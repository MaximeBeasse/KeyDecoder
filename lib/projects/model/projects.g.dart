// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'projects.dart';

// **************************************************************************
// MoorGenerator
// **************************************************************************

// ignore_for_file: unnecessary_brace_in_string_interps, unnecessary_this
class Project extends DataClass implements Insertable<Project> {
  int id;
  String title;
  String description;
  String pathRawPic;
  String pathCroppedPic;
  Uint8List markers;
  double originX;
  double originY;
  double angle;
  double isoRatio;
  Project(
      {@required this.id,
      @required this.title,
      @required this.description,
      @required this.pathRawPic,
      @required this.pathCroppedPic,
      this.markers,
      this.originX,
      this.originY,
      this.angle,
      this.isoRatio});
  factory Project.fromData(Map<String, dynamic> data, GeneratedDatabase db,
      {String prefix}) {
    final effectivePrefix = prefix ?? '';
    final intType = db.typeSystem.forDartType<int>();
    final stringType = db.typeSystem.forDartType<String>();
    final uint8ListType = db.typeSystem.forDartType<Uint8List>();
    final doubleType = db.typeSystem.forDartType<double>();
    return Project(
      id: intType.mapFromDatabaseResponse(data['${effectivePrefix}id']),
      title:
          stringType.mapFromDatabaseResponse(data['${effectivePrefix}title']),
      description: stringType
          .mapFromDatabaseResponse(data['${effectivePrefix}description']),
      pathRawPic: stringType
          .mapFromDatabaseResponse(data['${effectivePrefix}path_raw_pic']),
      pathCroppedPic: stringType
          .mapFromDatabaseResponse(data['${effectivePrefix}path_cropped_pic']),
      markers: uint8ListType
          .mapFromDatabaseResponse(data['${effectivePrefix}markers']),
      originX: doubleType
          .mapFromDatabaseResponse(data['${effectivePrefix}origin_x']),
      originY: doubleType
          .mapFromDatabaseResponse(data['${effectivePrefix}origin_y']),
      angle:
          doubleType.mapFromDatabaseResponse(data['${effectivePrefix}angle']),
      isoRatio: doubleType
          .mapFromDatabaseResponse(data['${effectivePrefix}iso_ratio']),
    );
  }
  @override
  Map<String, Expression> toColumns(bool nullToAbsent) {
    final map = <String, Expression>{};
    if (!nullToAbsent || id != null) {
      map['id'] = Variable<int>(id);
    }
    if (!nullToAbsent || title != null) {
      map['title'] = Variable<String>(title);
    }
    if (!nullToAbsent || description != null) {
      map['description'] = Variable<String>(description);
    }
    if (!nullToAbsent || pathRawPic != null) {
      map['path_raw_pic'] = Variable<String>(pathRawPic);
    }
    if (!nullToAbsent || pathCroppedPic != null) {
      map['path_cropped_pic'] = Variable<String>(pathCroppedPic);
    }
    if (!nullToAbsent || markers != null) {
      map['markers'] = Variable<Uint8List>(markers);
    }
    if (!nullToAbsent || originX != null) {
      map['origin_x'] = Variable<double>(originX);
    }
    if (!nullToAbsent || originY != null) {
      map['origin_y'] = Variable<double>(originY);
    }
    if (!nullToAbsent || angle != null) {
      map['angle'] = Variable<double>(angle);
    }
    if (!nullToAbsent || isoRatio != null) {
      map['iso_ratio'] = Variable<double>(isoRatio);
    }
    return map;
  }

  ProjectCompanion toCompanion(bool nullToAbsent) {
    return ProjectCompanion(
      id: id == null && nullToAbsent ? const Value.absent() : Value(id),
      title:
          title == null && nullToAbsent ? const Value.absent() : Value(title),
      description: description == null && nullToAbsent
          ? const Value.absent()
          : Value(description),
      pathRawPic: pathRawPic == null && nullToAbsent
          ? const Value.absent()
          : Value(pathRawPic),
      pathCroppedPic: pathCroppedPic == null && nullToAbsent
          ? const Value.absent()
          : Value(pathCroppedPic),
      markers: markers == null && nullToAbsent
          ? const Value.absent()
          : Value(markers),
      originX: originX == null && nullToAbsent
          ? const Value.absent()
          : Value(originX),
      originY: originY == null && nullToAbsent
          ? const Value.absent()
          : Value(originY),
      angle:
          angle == null && nullToAbsent ? const Value.absent() : Value(angle),
      isoRatio: isoRatio == null && nullToAbsent
          ? const Value.absent()
          : Value(isoRatio),
    );
  }

  factory Project.fromJson(Map<String, dynamic> json,
      {ValueSerializer serializer}) {
    serializer ??= moorRuntimeOptions.defaultSerializer;
    return Project(
      id: serializer.fromJson<int>(json['id']),
      title: serializer.fromJson<String>(json['title']),
      description: serializer.fromJson<String>(json['description']),
      pathRawPic: serializer.fromJson<String>(json['pathRawPic']),
      pathCroppedPic: serializer.fromJson<String>(json['pathCroppedPic']),
      markers: serializer.fromJson<Uint8List>(json['markers']),
      originX: serializer.fromJson<double>(json['originX']),
      originY: serializer.fromJson<double>(json['originY']),
      angle: serializer.fromJson<double>(json['angle']),
      isoRatio: serializer.fromJson<double>(json['isoRatio']),
    );
  }
  factory Project.fromJsonString(String encodedJson,
          {ValueSerializer serializer}) =>
      Project.fromJson(DataClass.parseJson(encodedJson) as Map<String, dynamic>,
          serializer: serializer);
  @override
  Map<String, dynamic> toJson({ValueSerializer serializer}) {
    serializer ??= moorRuntimeOptions.defaultSerializer;
    return <String, dynamic>{
      'id': serializer.toJson<int>(id),
      'title': serializer.toJson<String>(title),
      'description': serializer.toJson<String>(description),
      'pathRawPic': serializer.toJson<String>(pathRawPic),
      'pathCroppedPic': serializer.toJson<String>(pathCroppedPic),
      'markers': serializer.toJson<Uint8List>(markers),
      'originX': serializer.toJson<double>(originX),
      'originY': serializer.toJson<double>(originY),
      'angle': serializer.toJson<double>(angle),
      'isoRatio': serializer.toJson<double>(isoRatio),
    };
  }

  Project copyWith(
          {int id,
          String title,
          String description,
          String pathRawPic,
          String pathCroppedPic,
          Uint8List markers,
          double originX,
          double originY,
          double angle,
          double isoRatio}) =>
      Project(
        id: id ?? this.id,
        title: title ?? this.title,
        description: description ?? this.description,
        pathRawPic: pathRawPic ?? this.pathRawPic,
        pathCroppedPic: pathCroppedPic ?? this.pathCroppedPic,
        markers: markers ?? this.markers,
        originX: originX ?? this.originX,
        originY: originY ?? this.originY,
        angle: angle ?? this.angle,
        isoRatio: isoRatio ?? this.isoRatio,
      );
  @override
  String toString() {
    return (StringBuffer('Project(')
          ..write('id: $id, ')
          ..write('title: $title, ')
          ..write('description: $description, ')
          ..write('pathRawPic: $pathRawPic, ')
          ..write('pathCroppedPic: $pathCroppedPic, ')
          ..write('markers: $markers, ')
          ..write('originX: $originX, ')
          ..write('originY: $originY, ')
          ..write('angle: $angle, ')
          ..write('isoRatio: $isoRatio')
          ..write(')'))
        .toString();
  }

  @override
  int get hashCode => $mrjf($mrjc(
      id.hashCode,
      $mrjc(
          title.hashCode,
          $mrjc(
              description.hashCode,
              $mrjc(
                  pathRawPic.hashCode,
                  $mrjc(
                      pathCroppedPic.hashCode,
                      $mrjc(
                          markers.hashCode,
                          $mrjc(
                              originX.hashCode,
                              $mrjc(
                                  originY.hashCode,
                                  $mrjc(angle.hashCode,
                                      isoRatio.hashCode))))))))));
  @override
  bool operator ==(dynamic other) =>
      identical(this, other) ||
      (other is Project &&
          other.id == this.id &&
          other.title == this.title &&
          other.description == this.description &&
          other.pathRawPic == this.pathRawPic &&
          other.pathCroppedPic == this.pathCroppedPic &&
          other.markers == this.markers &&
          other.originX == this.originX &&
          other.originY == this.originY &&
          other.angle == this.angle &&
          other.isoRatio == this.isoRatio);
}

class ProjectCompanion extends UpdateCompanion<Project> {
  Value<int> id;
  Value<String> title;
  Value<String> description;
  Value<String> pathRawPic;
  Value<String> pathCroppedPic;
  Value<Uint8List> markers;
  Value<double> originX;
  Value<double> originY;
  Value<double> angle;
  Value<double> isoRatio;
  ProjectCompanion({
    this.id = const Value.absent(),
    this.title = const Value.absent(),
    this.description = const Value.absent(),
    this.pathRawPic = const Value.absent(),
    this.pathCroppedPic = const Value.absent(),
    this.markers = const Value.absent(),
    this.originX = const Value.absent(),
    this.originY = const Value.absent(),
    this.angle = const Value.absent(),
    this.isoRatio = const Value.absent(),
  });
  ProjectCompanion.insert({
    this.id = const Value.absent(),
    @required String title,
    this.description = const Value.absent(),
    this.pathRawPic = const Value.absent(),
    this.pathCroppedPic = const Value.absent(),
    this.markers = const Value.absent(),
    this.originX = const Value.absent(),
    this.originY = const Value.absent(),
    this.angle = const Value.absent(),
    this.isoRatio = const Value.absent(),
  }) : title = Value(title);
  static Insertable<Project> custom({
    Expression<int> id,
    Expression<String> title,
    Expression<String> description,
    Expression<String> pathRawPic,
    Expression<String> pathCroppedPic,
    Expression<Uint8List> markers,
    Expression<double> originX,
    Expression<double> originY,
    Expression<double> angle,
    Expression<double> isoRatio,
  }) {
    return RawValuesInsertable({
      if (id != null) 'id': id,
      if (title != null) 'title': title,
      if (description != null) 'description': description,
      if (pathRawPic != null) 'path_raw_pic': pathRawPic,
      if (pathCroppedPic != null) 'path_cropped_pic': pathCroppedPic,
      if (markers != null) 'markers': markers,
      if (originX != null) 'origin_x': originX,
      if (originY != null) 'origin_y': originY,
      if (angle != null) 'angle': angle,
      if (isoRatio != null) 'iso_ratio': isoRatio,
    });
  }

  ProjectCompanion copyWith(
      {Value<int> id,
      Value<String> title,
      Value<String> description,
      Value<String> pathRawPic,
      Value<String> pathCroppedPic,
      Value<Uint8List> markers,
      Value<double> originX,
      Value<double> originY,
      Value<double> angle,
      Value<double> isoRatio}) {
    return ProjectCompanion(
      id: id ?? this.id,
      title: title ?? this.title,
      description: description ?? this.description,
      pathRawPic: pathRawPic ?? this.pathRawPic,
      pathCroppedPic: pathCroppedPic ?? this.pathCroppedPic,
      markers: markers ?? this.markers,
      originX: originX ?? this.originX,
      originY: originY ?? this.originY,
      angle: angle ?? this.angle,
      isoRatio: isoRatio ?? this.isoRatio,
    );
  }

  @override
  Map<String, Expression> toColumns(bool nullToAbsent) {
    final map = <String, Expression>{};
    if (id.present) {
      map['id'] = Variable<int>(id.value);
    }
    if (title.present) {
      map['title'] = Variable<String>(title.value);
    }
    if (description.present) {
      map['description'] = Variable<String>(description.value);
    }
    if (pathRawPic.present) {
      map['path_raw_pic'] = Variable<String>(pathRawPic.value);
    }
    if (pathCroppedPic.present) {
      map['path_cropped_pic'] = Variable<String>(pathCroppedPic.value);
    }
    if (markers.present) {
      map['markers'] = Variable<Uint8List>(markers.value);
    }
    if (originX.present) {
      map['origin_x'] = Variable<double>(originX.value);
    }
    if (originY.present) {
      map['origin_y'] = Variable<double>(originY.value);
    }
    if (angle.present) {
      map['angle'] = Variable<double>(angle.value);
    }
    if (isoRatio.present) {
      map['iso_ratio'] = Variable<double>(isoRatio.value);
    }
    return map;
  }

  @override
  String toString() {
    return (StringBuffer('ProjectCompanion(')
          ..write('id: $id, ')
          ..write('title: $title, ')
          ..write('description: $description, ')
          ..write('pathRawPic: $pathRawPic, ')
          ..write('pathCroppedPic: $pathCroppedPic, ')
          ..write('markers: $markers, ')
          ..write('originX: $originX, ')
          ..write('originY: $originY, ')
          ..write('angle: $angle, ')
          ..write('isoRatio: $isoRatio')
          ..write(')'))
        .toString();
  }
}

class $ProjectsTable extends Projects with TableInfo<$ProjectsTable, Project> {
  final GeneratedDatabase _db;
  final String _alias;
  $ProjectsTable(this._db, [this._alias]);
  final VerificationMeta _idMeta = const VerificationMeta('id');
  GeneratedIntColumn _id;
  @override
  GeneratedIntColumn get id => _id ??= _constructId();
  GeneratedIntColumn _constructId() {
    return GeneratedIntColumn('id', $tableName, false,
        hasAutoIncrement: true, declaredAsPrimaryKey: true);
  }

  final VerificationMeta _titleMeta = const VerificationMeta('title');
  GeneratedTextColumn _title;
  @override
  GeneratedTextColumn get title => _title ??= _constructTitle();
  GeneratedTextColumn _constructTitle() {
    return GeneratedTextColumn(
      'title',
      $tableName,
      false,
    );
  }

  final VerificationMeta _descriptionMeta =
      const VerificationMeta('description');
  GeneratedTextColumn _description;
  @override
  GeneratedTextColumn get description =>
      _description ??= _constructDescription();
  GeneratedTextColumn _constructDescription() {
    return GeneratedTextColumn('description', $tableName, false,
        defaultValue: const Constant(''));
  }

  final VerificationMeta _pathRawPicMeta = const VerificationMeta('pathRawPic');
  GeneratedTextColumn _pathRawPic;
  @override
  GeneratedTextColumn get pathRawPic => _pathRawPic ??= _constructPathRawPic();
  GeneratedTextColumn _constructPathRawPic() {
    return GeneratedTextColumn('path_raw_pic', $tableName, false,
        defaultValue: const Constant(''));
  }

  final VerificationMeta _pathCroppedPicMeta =
      const VerificationMeta('pathCroppedPic');
  GeneratedTextColumn _pathCroppedPic;
  @override
  GeneratedTextColumn get pathCroppedPic =>
      _pathCroppedPic ??= _constructPathCroppedPic();
  GeneratedTextColumn _constructPathCroppedPic() {
    return GeneratedTextColumn('path_cropped_pic', $tableName, false,
        defaultValue: const Constant(''));
  }

  final VerificationMeta _markersMeta = const VerificationMeta('markers');
  GeneratedBlobColumn _markers;
  @override
  GeneratedBlobColumn get markers => _markers ??= _constructMarkers();
  GeneratedBlobColumn _constructMarkers() {
    return GeneratedBlobColumn(
      'markers',
      $tableName,
      true,
    );
  }

  final VerificationMeta _originXMeta = const VerificationMeta('originX');
  GeneratedRealColumn _originX;
  @override
  GeneratedRealColumn get originX => _originX ??= _constructOriginX();
  GeneratedRealColumn _constructOriginX() {
    return GeneratedRealColumn(
      'origin_x',
      $tableName,
      true,
    );
  }

  final VerificationMeta _originYMeta = const VerificationMeta('originY');
  GeneratedRealColumn _originY;
  @override
  GeneratedRealColumn get originY => _originY ??= _constructOriginY();
  GeneratedRealColumn _constructOriginY() {
    return GeneratedRealColumn(
      'origin_y',
      $tableName,
      true,
    );
  }

  final VerificationMeta _angleMeta = const VerificationMeta('angle');
  GeneratedRealColumn _angle;
  @override
  GeneratedRealColumn get angle => _angle ??= _constructAngle();
  GeneratedRealColumn _constructAngle() {
    return GeneratedRealColumn(
      'angle',
      $tableName,
      true,
    );
  }

  final VerificationMeta _isoRatioMeta = const VerificationMeta('isoRatio');
  GeneratedRealColumn _isoRatio;
  @override
  GeneratedRealColumn get isoRatio => _isoRatio ??= _constructIsoRatio();
  GeneratedRealColumn _constructIsoRatio() {
    return GeneratedRealColumn(
      'iso_ratio',
      $tableName,
      true,
    );
  }

  @override
  List<GeneratedColumn> get $columns => [
        id,
        title,
        description,
        pathRawPic,
        pathCroppedPic,
        markers,
        originX,
        originY,
        angle,
        isoRatio
      ];
  @override
  $ProjectsTable get asDslTable => this;
  @override
  String get $tableName => _alias ?? 'projects';
  @override
  final String actualTableName = 'projects';
  @override
  VerificationContext validateIntegrity(Insertable<Project> instance,
      {bool isInserting = false}) {
    final context = VerificationContext();
    final data = instance.toColumns(true);
    if (data.containsKey('id')) {
      context.handle(_idMeta, id.isAcceptableOrUnknown(data['id'], _idMeta));
    }
    if (data.containsKey('title')) {
      context.handle(
          _titleMeta, title.isAcceptableOrUnknown(data['title'], _titleMeta));
    } else if (isInserting) {
      context.missing(_titleMeta);
    }
    if (data.containsKey('description')) {
      context.handle(
          _descriptionMeta,
          description.isAcceptableOrUnknown(
              data['description'], _descriptionMeta));
    }
    if (data.containsKey('path_raw_pic')) {
      context.handle(
          _pathRawPicMeta,
          pathRawPic.isAcceptableOrUnknown(
              data['path_raw_pic'], _pathRawPicMeta));
    }
    if (data.containsKey('path_cropped_pic')) {
      context.handle(
          _pathCroppedPicMeta,
          pathCroppedPic.isAcceptableOrUnknown(
              data['path_cropped_pic'], _pathCroppedPicMeta));
    }
    if (data.containsKey('markers')) {
      context.handle(_markersMeta,
          markers.isAcceptableOrUnknown(data['markers'], _markersMeta));
    }
    if (data.containsKey('origin_x')) {
      context.handle(_originXMeta,
          originX.isAcceptableOrUnknown(data['origin_x'], _originXMeta));
    }
    if (data.containsKey('origin_y')) {
      context.handle(_originYMeta,
          originY.isAcceptableOrUnknown(data['origin_y'], _originYMeta));
    }
    if (data.containsKey('angle')) {
      context.handle(
          _angleMeta, angle.isAcceptableOrUnknown(data['angle'], _angleMeta));
    }
    if (data.containsKey('iso_ratio')) {
      context.handle(_isoRatioMeta,
          isoRatio.isAcceptableOrUnknown(data['iso_ratio'], _isoRatioMeta));
    }
    return context;
  }

  @override
  Set<GeneratedColumn> get $primaryKey => {id};
  @override
  Project map(Map<String, dynamic> data, {String tablePrefix}) {
    final effectivePrefix = tablePrefix != null ? '$tablePrefix.' : null;
    return Project.fromData(data, _db, prefix: effectivePrefix);
  }

  @override
  $ProjectsTable createAlias(String alias) {
    return $ProjectsTable(_db, alias);
  }
}

abstract class _$ProjectsDatabase extends GeneratedDatabase {
  _$ProjectsDatabase(QueryExecutor e) : super(SqlTypeSystem.defaultInstance, e);
  $ProjectsTable _projects;
  $ProjectsTable get projects => _projects ??= $ProjectsTable(this);
  ProjectsDao _projectsDao;
  ProjectsDao get projectsDao =>
      _projectsDao ??= ProjectsDao(this as ProjectsDatabase);
  @override
  Iterable<TableInfo> get allTables => allSchemaEntities.whereType<TableInfo>();
  @override
  List<DatabaseSchemaEntity> get allSchemaEntities => [projects];
}

// **************************************************************************
// DaoGenerator
// **************************************************************************

mixin _$ProjectsDaoMixin on DatabaseAccessor<ProjectsDatabase> {
  $ProjectsTable get projects => attachedDatabase.projects;
}
