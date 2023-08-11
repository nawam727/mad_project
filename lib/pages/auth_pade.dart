import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:mad_project/components/nav_bar.dart';
import 'package:mad_project/pages/onboading_screens.dart';

class AuthPage extends StatelessWidget {
  const AuthPage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: StreamBuilder<User?>(
        stream: FirebaseAuth.instance.authStateChanges(),
        builder: (context, snapshot) {
          //User is logged in
          if (snapshot.hasData) {
            return NavBar();
          }

          //User is NOT logged in
          else {
            return OnBoardingScreen();
          }
        },
      ),
    );
  }
}
