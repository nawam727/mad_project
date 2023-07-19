import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';

class Onboard2 extends StatelessWidget {
  const Onboard2({super.key});

  @override
  Widget build(BuildContext context) {
    return Container(
      color: HexColor("#E6FFF1"),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Image.asset(
            'assets/images/lechall.png', // Replace with your image path
            width: 250,
            height: 250,
          ),
          const SizedBox(height: 20),
          const Text(
            "Lecture Hall Details",
            style: TextStyle(
              fontSize: 24,
              fontWeight: FontWeight.bold,
            ),
          ),
          const Center(
            child: Padding(
              padding: EdgeInsets.all(10.0),
              child: Align(
                alignment: Alignment.bottomCenter,
              child: Padding(
                padding: EdgeInsets.all(8.0),
                child: Text(
                  "Find information about lecture halls, including hall numbers. Locate your classes effortlessly.", 
                  textAlign: TextAlign.center,
                  style: TextStyle(
                    fontSize: 16,
                  ),
                  ),
              ),
              ),
            ),
          ),
        ],
      ),
    );
  }
}