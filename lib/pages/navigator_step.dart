import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
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
              //decoration: const BoxDecoration(
              //   border: Border(
              //       bottom: BorderSide(
              //     width: 1,
              //     color: Colors.transparent,
              //   )),
              //   color: Color.fromARGB(255, 255, 255, 255),
              // ),

              //background image
              child: Column(
                children: [
                  Expanded(
                    //child: Container(),
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
