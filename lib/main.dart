// ignore_for_file: dead_code
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:mad_project/api/firebase_api.dart';
import 'package:mad_project/firebase_options.dart';
import 'package:mad_project/pages/hall_availability.dart';
import 'package:mad_project/pages/help_center.dart';
import 'package:mad_project/pages/navigator_page.dart';
import 'package:mad_project/pages/notification_page.dart';

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
  final String photoURL;

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
    this.photoURL,
  );
}

class LectureData {
  final String lecture;
  final String lecture2;
  final String lecturer;
  final String lecturer2;
  final String location;
  final String location2;
  final String time;
  final String time2;

  LectureData(
    this.lecture,
    this.lecture2,
    this.lecturer,
    this.lecturer2,
    this.location,
    this.location2,
    this.time,
    this.time2,
  );
}

class HallData {
  final String b1101;
  final String b1102;
  final String b1110;
  final String g002;
  final String g009;
  final String g003;

  HallData(
    this.b1101,
    this.b1102,
    this.b1110,
    this.g002,
    this.g009,
    this.g003,
  );
}

//Map Lecture Data
Future<LectureData?> getLectureDetails() async {
  User? user = _auth.currentUser;
  print('User UID1: ${user?.uid}');

  if (user != null) {
    DocumentSnapshot doc =
        await _firestore.collection('lectures').doc(user.uid).get();
    Map<String, dynamic>? lectureDataMap = doc.data() as Map<String, dynamic>?;

    if (lectureDataMap != null) {
      LectureData lectureData = LectureData(
        lectureDataMap.containsKey('lecture') ? lectureDataMap['lecture'] : '',
        lectureDataMap.containsKey('lecture2')
            ? lectureDataMap['lecture2']
            : '',
        lectureDataMap.containsKey('lecturer')
            ? lectureDataMap['lecturer']
            : '',
        lectureDataMap.containsKey('lecturer2')
            ? lectureDataMap['lecturer2']
            : '',
        lectureDataMap.containsKey('location')
            ? lectureDataMap['location']
            : '',
        lectureDataMap.containsKey('location2')
            ? lectureDataMap['location2']
            : '',
        lectureDataMap.containsKey('time') ? lectureDataMap['time'] : '',
        lectureDataMap.containsKey('time2') ? lectureDataMap['time2'] : '',
      );
      // print('time: ${lectureData.lecture2}');
      return lectureData;
    }
  }

  return null;
}

//Map User Data

Future<UserData?> getUserDetails() async {
  User? user = _auth.currentUser;

  if (user != null) {
    DocumentSnapshot doc =
        await _firestore.collection('students').doc(user.uid).get();
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
        userDataMap.containsKey('photoURL') ? userDataMap['photoURL'] : '',
      );
      return userData;
    }
  }

  return null;
}

//Map Hall Data
Future<HallData?> getHallDetails() async {
  User? user = _auth.currentUser;
  print('User UID3: ${user?.uid}');

  if (user != null) {
    DocumentSnapshot doc =
        await _firestore.collection('halls').doc(user.uid).get();
    Map<String, dynamic>? hallDataMap = doc.data() as Map<String, dynamic>?;

    if (hallDataMap != null) {
      HallData hallData = HallData(
        hallDataMap.containsKey('b1101') ? hallDataMap['b1101'] : '',
        hallDataMap.containsKey('b1102') ? hallDataMap['b1102'] : '',
        hallDataMap.containsKey('b1110') ? hallDataMap['b1110'] : '',
        hallDataMap.containsKey('g002') ? hallDataMap['g002'] : '',
        hallDataMap.containsKey('g009') ? hallDataMap['g009'] : '',
        hallDataMap.containsKey('g003') ? hallDataMap['g003'] : '',
      );
      return hallData;
    }
  }

  return null;
}

void fetchData() async {
  // Retrieve user data
  UserData? userData = await getUserDetails();
  // Retrieve lecture data
  LectureData? lectureData = await getLectureDetails();
  // Retrieve lecture data
  HallData? hallData = await getHallDetails();

  // Check if data is available and use it
  if (userData != null) {
    print('User Name: ${userData.name}');
    print('User Email: ${userData.email}');
  } else {
    print('User data not found.');
  }

  if (lectureData != null) {
    print('Lecture: ${lectureData.lecture}');
    print('Lecturer: ${lectureData.lecturer}');
  } else {
    print('Lecture data not found.');
  }

  if (hallData != null) {
    print('Hall 1: ${hallData.b1101}');
    print('Hall 2: ${hallData.g003}');
  } else {
    print('Hall data not found.');
  }
}

Future<void> main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp(options: DefaultFirebaseOptions.currentPlatform);
  await FirebaseApi().initNotification();
  fetchData();
  runApp(const MyApp());
}

final navigatorKey = GlobalKey<NavigatorState>();

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData(fontFamily: "Poppins"),
      debugShowCheckedModeBanner: false,
      home: HelpCenter(),
      navigatorKey: navigatorKey,
      routes: {
        '/notification_screen': (context) => NotificationPage(),
      },
    );
  }
}
