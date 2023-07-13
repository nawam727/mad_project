import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';

class MyButton extends StatelessWidget {

  final Function()? onTap;

  const MyButton({super.key, required this.onTap});

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: onTap,
      child: Container(
        padding: const EdgeInsets.all(20),
        margin: const EdgeInsets.symmetric(horizontal: 100),
        decoration: BoxDecoration(
          color: HexColor("#00B251"),
          borderRadius: BorderRadius.circular(10),
        ),
        child: Center(
          child: Text("Login",
          style: TextStyle(
            fontWeight: FontWeight.bold,
            fontSize: 18,
            color: HexColor("#ffffff")
            ),
          ),
        ),
      ),
    );
  }
}