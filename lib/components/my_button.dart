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
        margin: const EdgeInsets.symmetric(horizontal: 27),
        decoration: BoxDecoration(
          color: HexColor("#00B251"),
          borderRadius: BorderRadius.circular(10),
          border: Border.all(
            color: Colors.black, // Set your desired border color here
            width: 0.3,
          ),
        ),
        child: Center(
          child: Text(
            "Login",
            style: TextStyle(
                fontWeight: FontWeight.bold,
                fontSize: 16,
                color: HexColor("#ffffff")),
          ),
        ),
      ),
    );
  }
}
