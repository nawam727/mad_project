import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/my_button.dart';
import 'package:mad_project/components/nav_bar.dart';
import 'package:mad_project/components/text_field.dart';
//import 'package:google_fonts/google_fonts.dart';

class LoginPage extends StatefulWidget {
  const LoginPage({Key? key}) : super(key: key);

  @override
  State<LoginPage> createState() => _LoginPageState();
}

class _LoginPageState extends State<LoginPage> {
  final usernameController = TextEditingController();
  final passwordController = TextEditingController();

  void signUserIn(BuildContext context) async {
    String email = usernameController.text;
    String password = passwordController.text;

    showDialog(
      context: context,
      builder: (context) {
        return Center(
          child: CircularProgressIndicator(
            color: HexColor("#00B251"),
          ),
        );
      },
    );

    try {
      await FirebaseAuth.instance.signInWithEmailAndPassword(
        email: email,
        password: password,
      );

      // Authentication successful, navigate to the home page
      Navigator.pushReplacement(
        context,
        MaterialPageRoute(
            builder: (context) =>
                NavBar()), // Replace HomePage with your actual home page widget
      );
    } catch (e) {
      // Handle any authentication errors here
      print('Error signing in: $e');
    }
  }

  @override
  Widget build(BuildContext context) {
    final double screenHeight = MediaQuery.of(context).size.height;
    final double screenWidth = MediaQuery.of(context).size.width;

    return Scaffold(
      body: ListView(
        children: [
          SafeArea(
            child: Center(
              child: Column(
                children: [
                  SizedBox(
                    height: screenHeight * 0.15,
                  ),
                  // Logo
                  Image.asset(
                    'assets/images/logo.png',
                    width: screenWidth * 0.3,
                    height: screenHeight * 0.15,
                  ),
                  SizedBox(
                    height: screenHeight * 0.05,
                  ),
                  // Welcome Text
                  const Text(
                    "Welcome to N-Side",
                    style: TextStyle(fontSize: 20),
                  ),
                  SizedBox(
                    height: screenHeight * 0.05,
                  ),
                  // Login Text
                  const Text(
                    "Login",
                    style: TextStyle(fontSize: 38, fontWeight: FontWeight.bold),
                  ),
                  SizedBox(
                    height: screenHeight * 0.05,
                  ),
                  // Username TextField
                  MyTextField(
                    controller: usernameController,
                    hintText: "Username",
                    obscureText: false,
                  ),
                  SizedBox(
                    height: screenHeight * 0.05,
                  ),
                  // Password TextField
                  MyTextField(
                    controller: passwordController,
                    hintText: "Password",
                    obscureText: true,
                  ),
                  SizedBox(
                    height: screenHeight * 0.03,
                  ),
                  // Remember Password
                  Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 28),
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.end,
                      children: [
                        Text(
                          "Remember Password",
                          style: TextStyle(color: HexColor("#959CA3")),
                        ),
                      ],
                    ),
                  ),
                  SizedBox(
                    height: screenHeight * 0.08,
                  ),
                  // Login Button
                  MyButton(
                    onTap: () {
                      signUserIn(context);
                    },
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }
}
