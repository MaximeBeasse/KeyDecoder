import 'package:drift/native.dart';
import 'package:path_provider/path_provider.dart';
import 'package:path/path.dart' as p;
import 'package:drift/drift.dart';
import 'dart:io';

part 'projects.g.dart';

class Projects extends Table {
	IntColumn get id => integer().autoIncrement()();
	TextColumn get title => text()();
	TextColumn get description => text().withDefault(const Constant(''))();

	TextColumn get pathRawPic => text().withDefault(const Constant(''))();
	TextColumn get pathCroppedPic => text().withDefault(const Constant(''))();

	BlobColumn get markers => blob().nullable()();

	RealColumn get originX => real().nullable()();
	RealColumn get originY => real().nullable()();
	RealColumn get angle => real().nullable()();

	RealColumn get isoRatio => real().nullable()();
}

LazyDatabase _openConnection() {
	// the LazyDatabase util lets us find the right location for the file async.
	return LazyDatabase(() async {
		// put the database file, called db.sqlite here, into the documents folder
		// for your app.
		final dbFolder = await getApplicationDocumentsDirectory();
		File file = File(p.join(dbFolder.path, 'projectsdb.sqlite'));
		return NativeDatabase(file, logStatements: true);
	});
}

@DriftDatabase(tables: [Projects], daos: [ProjectsDao])
class ProjectsDatabase extends _$ProjectsDatabase {

	// we tell the database where to store the data with this constructor
	ProjectsDatabase() : super(_openConnection());

	static ProjectsDatabase? _instance;

	static ProjectsDatabase get db {
		if(_instance == null)
			_instance = ProjectsDatabase();
		return _instance!;
	}

	static ProjectsDao get dao {
		if(_instance == null)
			_instance = ProjectsDatabase();
		return _instance!.projectsDao;
	}

	@override
	int get schemaVersion => 4;

	@override
	MigrationStrategy get migration => MigrationStrategy(
		onCreate: (Migrator m) {
			return m.createAll();
		},
		onUpgrade: (Migrator m, int from, int to) async {
			if (from < 2) {
				// we added the pathRawPic and pathCroppedPic properties in the project since version 2
				await m.addColumn(projects, projects.pathRawPic);
				await m.addColumn(projects, projects.pathCroppedPic);
			}
			if (from < 3) {
				// we added the markers, originX, originY and angle properties in the project since version 3
				await m.addColumn(projects, projects.markers);
				await m.addColumn(projects, projects.originX);
				await m.addColumn(projects, projects.originY);
				await m.addColumn(projects, projects.angle);
			}
			if (from < 4) {
				// we added the isoRatio property in the project since version 4
				await m.addColumn(projects, projects.isoRatio);
			}
		}
	);
}

@DriftAccessor(tables: [Projects])
class ProjectsDao extends DatabaseAccessor<ProjectsDatabase> with _$ProjectsDaoMixin {

	ProjectsDao(ProjectsDatabase db) : super(db);

	Future<int?> get nbProjects {
		final count = projects.id.count();
		final query = selectOnly(projects)
			..addColumns([count]);
		return query.map((row) => row.read(count)).getSingle();
	} 

	Future<List<Project>> get allProjects => select(projects).get();

	Stream<List<Project>> watchAll() {
		return (select(projects)).watch();
	}

	Future<Project> getProjectByID(int id) => (select(projects)..where((tbl) => tbl.id.equals(id))..limit(1)).getSingle();

	Future insertProject(Insertable<Project> project) => into(projects).insert(project);
  	Future updateProject(Insertable<Project> project) => update(projects).replace(project);
  	Future deleteProject(Insertable<Project> project) => delete(projects).delete(project);
}