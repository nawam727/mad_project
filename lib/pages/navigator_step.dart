import 'package:flutter/material.dart';
import '../components/back_dots.dart';
import 'map_pages/steps_page.dart';

class NavigatorStepPage extends StatefulWidget {
  const NavigatorStepPage({super.key});

  @override
  State<NavigatorStepPage> createState() => _NavigatorStepPageState();
}

class _NavigatorStepPageState extends State<NavigatorStepPage> {
  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: BackDots(title: "Step Mode"),
      body: Column(
        children: [
          Container(
              height: size.height * 0.8,

              //background image
              child: Column(
                children: [
                  Expanded(
                    child: StepsPage(),
                  ),
                  //bottom container that has popup function
                ],
              )),
        ],
      ),
    );
  }
}
