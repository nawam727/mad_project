import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';

class Onboard3 extends StatelessWidget {
  const Onboard3({super.key});

  @override
  Widget build(BuildContext context) {
    return Container(
      color: HexColor("#ffffff"),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Image.asset(
            'assets/images/navigation.png', // Replace with your image path
            width: 225,
            height: 225,
          ),
          const SizedBox(height: 20),
          const Text(
            "Directions to Lecture Halls",
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
                  "Navigate campus effortlessly. Get step-by-step directions to your lecture halls, complete with integrated maps, to help you find your way easily.", 
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