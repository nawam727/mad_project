// ignore_for_file: dead_code

import 'package:cloud_firestore/cloud_firestore.dart';
//import 'pages/lecturers_availability_page.dart';

import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:mad_project/components/nav_bar.dart';
import 'package:mad_project/firebase_options.dart';
import 'package:mad_project/pages/hall_availability.dart';
import 'package:mad_project/pages/login_page.dart';
import 'package:mad_project/pages/map_navigation_page.dart';
import 'package:mad_project/pages/notification_page.dart';
import 'package:mad_project/pages/auth_pade.dart';
import 'package:mad_project/pages/get_started.dart';
import 'package:mad_project/pages/help_center.dart';
import 'package:mad_project/pages/settings_page.dart';


FirebaseAuth _auth = FirebaseAuth.instance;
FirebaseFirestore _firestore = FirebaseFirestore.instance;

class UserData {
  final String batch;
  final String degree;
  final String email;
  final String faculty;
  final String index;
  final String mobile;
  final String name;
  final String nic;
  final String sEmail;

  UserData(
    this.name,
    this.email,
    this.faculty,
    this.batch,
    this.index,
    this.nic,
    this.degree,
    this.mobile,
    this.sEmail,
  );
}

Future<UserData?> getUserDetails() async {
  User? user = _auth.currentUser;

  if (user != null) {
    DocumentSnapshot doc = await _firestore.collection('students').doc(user.uid).get();
    Map<String, dynamic>? userDataMap = doc.data() as Map<String, dynamic>?;

    if (userDataMap != null) {
      UserData userData = UserData(
        userDataMap.containsKey('name') ? userDataMap['name'] : '',
        userDataMap.containsKey('email') ? userDataMap['email'] : '',
        userDataMap.containsKey('faculty') ? userDataMap['faculty'] : '',
        userDataMap.containsKey('batch') ? userDataMap['batch'] : '',
        userDataMap.containsKey('index') ? userDataMap['index'] : '',
        userDataMap.containsKey('nic') ? userDataMap['nic'] : '',
         userDataMap.containsKey('degree') ? userDataMap['degree'] : '',
        userDataMap.containsKey('mobile') ? userDataMap['mobile'] : '',
        userDataMap.containsKey('semail') ? userDataMap['semail'] : '',
      );
      return userData;
    }
  }

  return null;
}


Future<void> main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp(options: DefaultFirebaseOptions.currentPlatform);
  //UserData? userData = await getUserDetails();
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData(fontFamily: "Poppins"),
      debugShowCheckedModeBanner: false,
      home: NavBar(),
    );
  }
}
