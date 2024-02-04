// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'projects.dart';

// ignore_for_file: type=lint
class $ProjectsTable extends Projects with TableInfo<$ProjectsTable, Project> {
  @override
  final GeneratedDatabase attachedDatabase;
  final String? _alias;
  $ProjectsTable(this.attachedDatabase, [this._alias]);
  static const VerificationMeta _idMeta = const VerificationMeta('id');
  @override
  late final GeneratedColumn<int> id = GeneratedColumn<int>(
      'id', aliasedName, false,
      hasAutoIncrement: true,
      type: DriftSqlType.int,
      requiredDuringInsert: false,
      defaultConstraints:
          GeneratedColumn.constraintIsAlways('PRIMARY KEY AUTOINCREMENT'));
  static const VerificationMeta _titleMeta = const VerificationMeta('title');
  @override
  late final GeneratedColumn<String> title = GeneratedColumn<String>(
      'title', aliasedName, false,
      type: DriftSqlType.string, requiredDuringInsert: true);
  static const VerificationMeta _descriptionMeta =
      const VerificationMeta('description');
  @override
  late final GeneratedColumn<String> description = GeneratedColumn<String>(
      'description', aliasedName, false,
      type: DriftSqlType.string,
      requiredDuringInsert: false,
      defaultValue: const Constant(''));
  static const VerificationMeta _pathRawPicMeta =
      const VerificationMeta('pathRawPic');
  @override
  late final GeneratedColumn<String> pathRawPic = GeneratedColumn<String>(
      'path_raw_pic', aliasedName, false,
      type: DriftSqlType.string,
      requiredDuringInsert: false,
      defaultValue: const Constant(''));
  static const VerificationMeta _pathCroppedPicMeta =
      const VerificationMeta('pathCroppedPic');
  @override
  late final GeneratedColumn<String> pathCroppedPic = GeneratedColumn<String>(
      'path_cropped_pic', aliasedName, false,
      type: DriftSqlType.string,
      requiredDuringInsert: false,
      defaultValue: const Constant(''));
  static const VerificationMeta _markersMeta =
      const VerificationMeta('markers');
  @override
  late final GeneratedColumn<Uint8List> markers = GeneratedColumn<Uint8List>(
      'markers', aliasedName, true,
      type: DriftSqlType.blob, requiredDuringInsert: false);
  static const VerificationMeta _originXMeta =
      const VerificationMeta('originX');
  @override
  late final GeneratedColumn<double> originX = GeneratedColumn<double>(
      'origin_x', aliasedName, true,
      type: DriftSqlType.double, requiredDuringInsert: false);
  static const VerificationMeta _originYMeta =
      const VerificationMeta('originY');
  @override
  late final GeneratedColumn<double> originY = GeneratedColumn<double>(
      'origin_y', aliasedName, true,
      type: DriftSqlType.double, requiredDuringInsert: false);
  static const VerificationMeta _angleMeta = const VerificationMeta('angle');
  @override
  late final GeneratedColumn<double> angle = GeneratedColumn<double>(
      'angle', aliasedName, true,
      type: DriftSqlType.double, requiredDuringInsert: false);
  static const VerificationMeta _isoRatioMeta =
      const VerificationMeta('isoRatio');
  @override
  late final GeneratedColumn<double> isoRatio = GeneratedColumn<double>(
      'iso_ratio', aliasedName, true,
      type: DriftSqlType.double, requiredDuringInsert: false);
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
  String get aliasedName => _alias ?? 'projects';
  @override
  String get actualTableName => 'projects';
  @override
  VerificationContext validateIntegrity(Insertable<Project> instance,
      {bool isInserting = false}) {
    final context = VerificationContext();
    final data = instance.toColumns(true);
    if (data.containsKey('id')) {
      context.handle(_idMeta, id.isAcceptableOrUnknown(data['id']!, _idMeta));
    }
    if (data.containsKey('title')) {
      context.handle(
          _titleMeta, title.isAcceptableOrUnknown(data['title']!, _titleMeta));
    } else if (isInserting) {
      context.missing(_titleMeta);
    }
    if (data.containsKey('description')) {
      context.handle(
          _descriptionMeta,
          description.isAcceptableOrUnknown(
              data['description']!, _descriptionMeta));
    }
    if (data.containsKey('path_raw_pic')) {
      context.handle(
          _pathRawPicMeta,
          pathRawPic.isAcceptableOrUnknown(
              data['path_raw_pic']!, _pathRawPicMeta));
    }
    if (data.containsKey('path_cropped_pic')) {
      context.handle(
          _pathCroppedPicMeta,
          pathCroppedPic.isAcceptableOrUnknown(
              data['path_cropped_pic']!, _pathCroppedPicMeta));
    }
    if (data.containsKey('markers')) {
      context.handle(_markersMeta,
          markers.isAcceptableOrUnknown(data['markers']!, _markersMeta));
    }
    if (data.containsKey('origin_x')) {
      context.handle(_originXMeta,
          originX.isAcceptableOrUnknown(data['origin_x']!, _originXMeta));
    }
    if (data.containsKey('origin_y')) {
      context.handle(_originYMeta,
          originY.isAcceptableOrUnknown(data['origin_y']!, _originYMeta));
    }
    if (data.containsKey('angle')) {
      context.handle(
          _angleMeta, angle.isAcceptableOrUnknown(data['angle']!, _angleMeta));
    }
    if (data.containsKey('iso_ratio')) {
      context.handle(_isoRatioMeta,
          isoRatio.isAcceptableOrUnknown(data['iso_ratio']!, _isoRatioMeta));
    }
    return context;
  }

  @override
  Set<GeneratedColumn> get $primaryKey => {id};
  @override
  Project map(Map<String, dynamic> data, {String? tablePrefix}) {
    final effectivePrefix = tablePrefix != null ? '$tablePrefix.' : '';
    return Project(
      id: attachedDatabase.typeMapping
          .read(DriftSqlType.int, data['${effectivePrefix}id'])!,
      title: attachedDatabase.typeMapping
          .read(DriftSqlType.string, data['${effectivePrefix}title'])!,
      description: attachedDatabase.typeMapping
          .read(DriftSqlType.string, data['${effectivePrefix}description'])!,
      pathRawPic: attachedDatabase.typeMapping
          .read(DriftSqlType.string, data['${effectivePrefix}path_raw_pic'])!,
      pathCroppedPic: attachedDatabase.typeMapping.read(
          DriftSqlType.string, data['${effectivePrefix}path_cropped_pic'])!,
      markers: attachedDatabase.typeMapping
          .read(DriftSqlType.blob, data['${effectivePrefix}markers']),
      originX: attachedDatabase.typeMapping
          .read(DriftSqlType.double, data['${effectivePrefix}origin_x']),
      originY: attachedDatabase.typeMapping
          .read(DriftSqlType.double, data['${effectivePrefix}origin_y']),
      angle: attachedDatabase.typeMapping
          .read(DriftSqlType.double, data['${effectivePrefix}angle']),
      isoRatio: attachedDatabase.typeMapping
          .read(DriftSqlType.double, data['${effectivePrefix}iso_ratio']),
    );
  }

  @override
  $ProjectsTable createAlias(String alias) {
    return $ProjectsTable(attachedDatabase, alias);
  }
}

class Project extends DataClass implements Insertable<Project> {
  final int id;
  final String title;
  final String description;
  final String pathRawPic;
  final String pathCroppedPic;
  final Uint8List? markers;
  final double? originX;
  final double? originY;
  final double? angle;
  final double? isoRatio;
  const Project(
      {required this.id,
      required this.title,
      required this.description,
      required this.pathRawPic,
      required this.pathCroppedPic,
      this.markers,
      this.originX,
      this.originY,
      this.angle,
      this.isoRatio});
  @override
  Map<String, Expression> toColumns(bool nullToAbsent) {
    final map = <String, Expression>{};
    map['id'] = Variable<int>(id);
    map['title'] = Variable<String>(title);
    map['description'] = Variable<String>(description);
    map['path_raw_pic'] = Variable<String>(pathRawPic);
    map['path_cropped_pic'] = Variable<String>(pathCroppedPic);
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

  ProjectsCompanion toCompanion(bool nullToAbsent) {
    return ProjectsCompanion(
      id: Value(id),
      title: Value(title),
      description: Value(description),
      pathRawPic: Value(pathRawPic),
      pathCroppedPic: Value(pathCroppedPic),
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
      {ValueSerializer? serializer}) {
    serializer ??= driftRuntimeOptions.defaultSerializer;
    return Project(
      id: serializer.fromJson<int>(json['id']),
      title: serializer.fromJson<String>(json['title']),
      description: serializer.fromJson<String>(json['description']),
      pathRawPic: serializer.fromJson<String>(json['pathRawPic']),
      pathCroppedPic: serializer.fromJson<String>(json['pathCroppedPic']),
      markers: serializer.fromJson<Uint8List?>(json['markers']),
      originX: serializer.fromJson<double?>(json['originX']),
      originY: serializer.fromJson<double?>(json['originY']),
      angle: serializer.fromJson<double?>(json['angle']),
      isoRatio: serializer.fromJson<double?>(json['isoRatio']),
    );
  }
  @override
  Map<String, dynamic> toJson({ValueSerializer? serializer}) {
    serializer ??= driftRuntimeOptions.defaultSerializer;
    return <String, dynamic>{
      'id': serializer.toJson<int>(id),
      'title': serializer.toJson<String>(title),
      'description': serializer.toJson<String>(description),
      'pathRawPic': serializer.toJson<String>(pathRawPic),
      'pathCroppedPic': serializer.toJson<String>(pathCroppedPic),
      'markers': serializer.toJson<Uint8List?>(markers),
      'originX': serializer.toJson<double?>(originX),
      'originY': serializer.toJson<double?>(originY),
      'angle': serializer.toJson<double?>(angle),
      'isoRatio': serializer.toJson<double?>(isoRatio),
    };
  }

  Project copyWith(
          {int? id,
          String? title,
          String? description,
          String? pathRawPic,
          String? pathCroppedPic,
          Value<Uint8List?> markers = const Value.absent(),
          Value<double?> originX = const Value.absent(),
          Value<double?> originY = const Value.absent(),
          Value<double?> angle = const Value.absent(),
          Value<double?> isoRatio = const Value.absent()}) =>
      Project(
        id: id ?? this.id,
        title: title ?? this.title,
        description: description ?? this.description,
        pathRawPic: pathRawPic ?? this.pathRawPic,
        pathCroppedPic: pathCroppedPic ?? this.pathCroppedPic,
        markers: markers.present ? markers.value : this.markers,
        originX: originX.present ? originX.value : this.originX,
        originY: originY.present ? originY.value : this.originY,
        angle: angle.present ? angle.value : this.angle,
        isoRatio: isoRatio.present ? isoRatio.value : this.isoRatio,
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
  int get hashCode => Object.hash(
      id,
      title,
      description,
      pathRawPic,
      pathCroppedPic,
      $driftBlobEquality.hash(markers),
      originX,
      originY,
      angle,
      isoRatio);
  @override
  bool operator ==(Object other) =>
      identical(this, other) ||
      (other is Project &&
          other.id == this.id &&
          other.title == this.title &&
          other.description == this.description &&
          other.pathRawPic == this.pathRawPic &&
          other.pathCroppedPic == this.pathCroppedPic &&
          $driftBlobEquality.equals(other.markers, this.markers) &&
          other.originX == this.originX &&
          other.originY == this.originY &&
          other.angle == this.angle &&
          other.isoRatio == this.isoRatio);
}

class ProjectsCompanion extends UpdateCompanion<Project> {
  final Value<int> id;
  final Value<String> title;
  final Value<String> description;
  final Value<String> pathRawPic;
  final Value<String> pathCroppedPic;
  final Value<Uint8List?> markers;
  final Value<double?> originX;
  final Value<double?> originY;
  final Value<double?> angle;
  final Value<double?> isoRatio;
  const ProjectsCompanion({
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
  ProjectsCompanion.insert({
    this.id = const Value.absent(),
    required String title,
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
    Expression<int>? id,
    Expression<String>? title,
    Expression<String>? description,
    Expression<String>? pathRawPic,
    Expression<String>? pathCroppedPic,
    Expression<Uint8List>? markers,
    Expression<double>? originX,
    Expression<double>? originY,
    Expression<double>? angle,
    Expression<double>? isoRatio,
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

  ProjectsCompanion copyWith(
      {Value<int>? id,
      Value<String>? title,
      Value<String>? description,
      Value<String>? pathRawPic,
      Value<String>? pathCroppedPic,
      Value<Uint8List?>? markers,
      Value<double?>? originX,
      Value<double?>? originY,
      Value<double?>? angle,
      Value<double?>? isoRatio}) {
    return ProjectsCompanion(
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
    return (StringBuffer('ProjectsCompanion(')
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

abstract class _$ProjectsDatabase extends GeneratedDatabase {
  _$ProjectsDatabase(QueryExecutor e) : super(e);
  late final $ProjectsTable projects = $ProjectsTable(this);
  late final ProjectsDao projectsDao = ProjectsDao(this as ProjectsDatabase);
  @override
  Iterable<TableInfo<Table, Object?>> get allTables =>
      allSchemaEntities.whereType<TableInfo<Table, Object?>>();
  @override
  List<DatabaseSchemaEntity> get allSchemaEntities => [projects];
}

mixin _$ProjectsDaoMixin on DatabaseAccessor<ProjectsDatabase> {
  $ProjectsTable get projects => attachedDatabase.projects;
}
