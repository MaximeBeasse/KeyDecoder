import 'package:moor_ffi/moor_ffi.dart';
import 'package:path_provider/path_provider.dart';
import 'package:path/path.dart' as p;
import 'package:moor/moor.dart';
import 'dart:io';

part 'projects.g.dart';

class Projects extends Table {
	IntColumn get id => integer().autoIncrement()();
	TextColumn get title => text()();
	TextColumn get description => text()();
}

LazyDatabase _openConnection() {
  // the LazyDatabase util lets us find the right location for the file async.
  return LazyDatabase(() async {
    // put the database file, called db.sqlite here, into the documents folder
    // for your app.
    final dbFolder = await getApplicationDocumentsDirectory();
    final file = File(p.join(dbFolder.path, 'projectsdb.sqlite'));
    return VmDatabase(file, logStatements: true);
  });
}

@UseMoor(tables: [Projects], daos: [ProjectsDao])
class ProjectsDatabase extends _$ProjectsDatabase {

  // we tell the database where to store the data with this constructor
  ProjectsDatabase() : super(_openConnection());

  // you should bump this number whenever you change or add a table definition. Migrations
  // are covered later in this readme.
  @override
  int get schemaVersion => 1;
}

@UseDao(tables: [Projects])
class ProjectsDao extends DatabaseAccessor<ProjectsDatabase> with _$ProjectsDaoMixin {

	ProjectsDao(ProjectsDatabase db) : super(db);

	Future<List<Project>> get allProjects => select(projects).get();

	Stream<List<Project>> watchAll() {
		return (select(projects)).watch();
	}

	Future insertProject(Insertable<Project> project) => into(projects).insert(project);
  	Future updateProject(Insertable<Project> project) => update(projects).replace(project);
  	Future deleteProject(Insertable<Project> project) => delete(projects).delete(project);
}