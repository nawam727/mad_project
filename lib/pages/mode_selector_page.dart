import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';

import 'navigator_step.dart';

//import 'navigator_step.dart';

class ModeSelector extends StatefulWidget {
  const ModeSelector({super.key});

  @override
  State<ModeSelector> createState() => _ModeSelectorState();
}

class _ModeSelectorState extends State<ModeSelector> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: BackDots(
        title: "Mode Selector",
      ),
      body: Stack(
        fit: StackFit.expand,
        children: [
          // Background Image
          Padding(
            padding: const EdgeInsets.symmetric(horizontal: 0.0),
            child: Image.asset(
              'assets/images/bg.png', // Replace with your image path
              fit: BoxFit.cover,
            ),
          ),
          // Green Container at the Bottom
          Positioned(
            bottom: 0,
            left: 0,
            right: 0,
            child: Container(
              decoration: BoxDecoration(
                borderRadius: BorderRadius.only(
                  topLeft: Radius.circular(20),
                  topRight: Radius.circular(20),
                ),
                color: HexColor("#C8F6CD"),
              ),
              height: 170,
              child: Row(
                children: [
                  CircularCantainer(
                    nameText: 'Map Mode',
                    imagePath: 'assets/images/mapmode.png',
                    onPressed: () {
                      Navigator.push(
                        context,
                        MaterialPageRoute(
                            builder: (context) => NavigatorStepPage()),
                      );
                    },
                  ),
                  CircularCantainer(
                    nameText: 'AR Mode',
                    imagePath: 'assets/images/armode.png',
                    onPressed: () {},
                  ),
                  CircularCantainer(
                    nameText: 'Step Mode',
                    imagePath: 'assets/images/stepmode.png',
                    onPressed: () {},
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

class CircularCantainer extends StatelessWidget {
  final String nameText;
  final String imagePath;
  final VoidCallback? onPressed;

  CircularCantainer({
    super.key,
    required this.nameText,
    required this.imagePath,
    this.onPressed,
  });

  @override
  Widget build(BuildContext context) {
    double containerSize = MediaQuery.of(context).size.width * 0.2;
    double fontSize = MediaQuery.of(context).size.width * 0.04;
    return Padding(
      padding: const EdgeInsets.only(left: 40.0),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          GestureDetector(
            onTap: onPressed,
            child: ClipOval(
              child: Container(
                height: containerSize,
                width: containerSize,
                color: HexColor("#C8F6CD"),
                child: Image.asset(
                  imagePath, // Provide the image asset path here
                  fit: BoxFit.cover,
                ),
              ),
            ),
          ),
          SizedBox(
            height: 10,
          ),
          Container(
            child: Text(
              nameText,
              style: TextStyle(fontSize: fontSize),
            ),
          ),
        ],
      ),
    );
  }
}
