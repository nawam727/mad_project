import 'package:cloud_firestore/cloud_firestore.dart';
//import 'pages/lecturers_availability_page.dart';

import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:mad_project/components/nav_bar.dart';
import 'package:mad_project/firebase_options.dart';

FirebaseAuth _auth = FirebaseAuth.instance;
FirebaseFirestore _firestore = FirebaseFirestore.instance;

Future<void> getUserDetails() async {
  User? user = _auth.currentUser;

  if (user != null) {
    DocumentSnapshot doc =
        await _firestore.collection('students').doc(user.uid).get();
    Map<String, dynamic> userData = doc.data() as Map<String, dynamic>;

    // Now you can use userData to display user details in your UI
    print('User Name: ${userData['name']}');
    print('User Email: ${userData['email']}');
    // Display other user details as needed
  }
}

Future<void> main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp(options: DefaultFirebaseOptions.currentPlatform);
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
