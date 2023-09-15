import 'package:flutter/material.dart';
import 'package:mad_project/pages/login_page.dart';
import 'package:mad_project/pages/onboarding/onboard_1.dart';
import 'package:mad_project/pages/onboarding/onboard_2.dart';
import 'package:mad_project/pages/onboarding/onboard_3.dart';
import 'package:smooth_page_indicator/smooth_page_indicator.dart';

class OnBoardingScreen extends StatefulWidget {
  const OnBoardingScreen({Key? key}) : super(key: key);

  @override
  State<OnBoardingScreen> createState() => _OnBoardingScreenState();
}

class _OnBoardingScreenState extends State<OnBoardingScreen> {
  PageController _controller = PageController();
  int currentPage = 0; // Track the current page index
  List<Widget> onboardingScreens = [
    Onboard1(),
    Onboard2(),
    Onboard3(),
  ];

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          PageView(
            controller: _controller,
            onPageChanged: (index) {
              setState(() {
                currentPage = index; // Update the current page index
              });
            },
            children: onboardingScreens,
          ),

          // Dot indicators
          Container(
            alignment: const Alignment(0, 0.9),
            child: Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                // Skip
                GestureDetector(
                  onTap: () {
                    _controller.jumpToPage(2);
                    setState(() {
                      currentPage = 2;
                    });
                  },
                  child: const Text("Skip"),
                ),
                const SizedBox(
                  width: 85,
                ),
                SmoothPageIndicator(
                  controller: _controller,
                  count: onboardingScreens.length,
                  effect: const WormEffect(), // Choose your desired effect
                ),

                // Next or Done buttons
                const SizedBox(
                  width: 85,
                ),
                currentPage == onboardingScreens.length - 1
                    ? GestureDetector(
                        onTap: () {
                          Navigator.push(
                            context,
                            MaterialPageRoute(
                              builder: (context) {
                                // Replace with your desired destination page
                                return const LoginPage();
                              },
                            ),
                          );
                        },
                        child: const Text("Done"),
                      )
                    : GestureDetector(
                        onTap: () {
                          _controller.nextPage(
                            duration: const Duration(milliseconds: 500),
                            curve: Curves.easeIn,
                          );
                          setState(() {
                            currentPage++;
                          });
                        },
                        child: const Text("Next"),
                      ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}
