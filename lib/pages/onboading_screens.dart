import 'package:flutter/material.dart';
import 'package:mad_project/pages/home_page.dart';
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

//keep track of if I on last page or not
bool onLastPage = false;

class _OnBoardingScreenState extends State<OnBoardingScreen> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          PageView(
            controller: _controller,
            onPageChanged: (index) {
              setState(() {
                onLastPage = (index == 2);
              });
            },
            children: const [Onboard1(), Onboard2(), Onboard3()],
          ),

          //dot indicators
          Container(
              alignment: const Alignment(0, 0.9),
              child: Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  //Skip
                  GestureDetector(
                      onTap: () {
                        _controller.jumpToPage(2);
                      },
                      child: const Text("Skip")),
                  const SizedBox(
                    width: 85,
                  ),
                  SmoothPageIndicator(controller: _controller, count: 3),

                  //Next or Done

                  const SizedBox(
                    width: 85,
                  ),
                  onLastPage
                      ? GestureDetector(
                          onTap: () {
                            Navigator.push(context,
                                MaterialPageRoute(builder: (context) {
                              return const HomePage();
                            },),);
                          },
                          child: const Text("Done"))
                      : GestureDetector(
                          onTap: () {
                            _controller.nextPage(
                                duration: const Duration(milliseconds: 500),
                                curve: Curves.easeIn);
                          },
                          child: const Text("Next")),
                ],
              ))
        ],
      ),
    );
  }
}
