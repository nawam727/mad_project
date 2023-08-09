import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/my_button.dart';
import 'package:mad_project/components/text_field.dart';
//import 'package:google_fonts/google_fonts.dart';

class LoginPage extends StatefulWidget {
  const LoginPage({Key? key}) : super(key: key);

  @override
  State<LoginPage> createState() => _LoginPageState();
}

class _LoginPageState extends State<LoginPage> {
  void signUserIn() {}

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
                    height: screenHeight * 0.10,
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
                    hintText: "Username",
                    obscureText: false,
                  ),
                  SizedBox(
                    height: screenHeight * 0.05,
                  ),
                  // Password TextField
                  MyTextField(
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
                    onTap: signUserIn,
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
