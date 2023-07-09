import 'package:flutter/material.dart';
import 'package:mad_project/pages/onboarding/onboard_1.dart';
import 'package:mad_project/pages/onboarding/onboard_2.dart';
import 'package:mad_project/pages/onboarding/onboard_3.dart';
import 'package:smooth_page_indicator/smooth_page_indicator.dart';

class OnBoardingScreen extends StatefulWidget {
  const OnBoardingScreen({super.key});

  @override
  State<OnBoardingScreen> createState() => _OnBoardingScreenState();
}

//Controller to keep track which page we are on
PageController _controller = PageController();

class _OnBoardingScreenState extends State<OnBoardingScreen> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          PageView(
            controller: _controller,
            children: const [
              Onboard1(),
              Onboard2(),
              Onboard3()
            ],
          ),

          //dot indicators
          Container(
            alignment: const Alignment(0, 0.9),
            child: SmoothPageIndicator(controller: _controller, count: 3)
            )
        ],
      ),
    );
  }
}
