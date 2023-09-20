import 'dart:convert';
import 'package:flutter/services.dart';

class PathModel {
  final int id1;
  final int id2;
  final String name;
  final List<String> steps;

  PathModel({
    required this.id1,
    required this.id2,
    required this.name,
    required this.steps,
  });

  factory PathModel.fromJson(Map<String, dynamic> json) {
    return PathModel(
      id1: json['id1'],
      id2: json['id2'],
      name: json['name'],
      steps: List<String>.from(json['steps']),
    );
  }
}

class StepsService {
  static Future<List<PathModel>> loadPaths() async {
    try {
      final String pathsJson = await rootBundle.loadString('assets/JSON/steps.json');
      final Map<String, dynamic> jsonData = json.decode(pathsJson);

      final List<dynamic> jsonPaths = jsonData['paths'];
      return jsonPaths.map((jsonPath) => PathModel.fromJson(jsonPath)).toList();
    } catch (e) {
      print('Error loading paths: $e');
      return [];
    }
  }

}
