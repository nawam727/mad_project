import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import '../components/menu_home.dart';

class LectureAvailabilityPage extends StatelessWidget {
  const LectureAvailabilityPage({super.key});

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;

    return Scaffold(
        appBar: MenuHome(
          username: "Hi GNYS Silva",
        ),
        body: SafeArea(
          child: ListView(children: [
            Padding(
              padding:EdgeInsets.only(left:16,top:10),
              child: Text(
                "Upcoming Lectures",
                style: TextStyle(fontSize: 16, color: HexColor("#77796B")),
                textAlign: TextAlign.left,
              ),
            ),
            Container(
              child: Padding(
                padding: EdgeInsets.all(size.width * 0.05),
                child: Container(
                  color: HexColor("#E6FFF1"),
                  height: size.height * (2.9 / 4),
                  child: Container(
                    child: Padding(
                      padding: EdgeInsets.only(
                          top: size.width * 0.014,
                          bottom: size.width * 0.014,
                          left: size.width * 0.03),
                      child: SizedBox(
                        width: double.infinity,
                        child: Row(
                          children: [
                            Column(
                              mainAxisAlignment: MainAxisAlignment.start,
                              children: [
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                              ],
                            ),
                            Column(
                              mainAxisAlignment: MainAxisAlignment.start,
                              children: [
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                              ],
                            ),
                            Column(
                              mainAxisAlignment: MainAxisAlignment.start,
                              children: [
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                                lecture_card(
                                    size, "name", "assets/images/Logo.png"),
                              ],
                            ),
                          ],
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ),
            SizedBox(
              child: Padding(
                padding: EdgeInsets.only(
                    left: size.width * 0.05,
                    right: size.width * 0.05,
                    bottom: size.width * 0.05),
                child: Container(
                    height: size.height * 0.05,
                    //width:size.width*0.7,
                    color: Color.fromARGB(255, 255, 255, 255),
                    child: ElevatedButton(
                      onPressed: () {},
                      child: Row(
                        //mainAxisAlignment: MainAxisAlignment.center,
                        children: [
                          Expanded(
                            child: Text(
                              "Lecture's Cabin States......",
                              style: TextStyle(
                                fontSize: 20,
                                color: Colors.black,
                              ),
                            ),
                          ),
                          Icon(
                            Icons.man_4,
                            color: HexColor("#00B251"),
                            size: 35,
                          ),
                        ],
                      ),
                      style: ButtonStyle(
                        shape: MaterialStateProperty.all(
                          RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(10)),
                        ),
                        backgroundColor:
                            MaterialStateProperty.all(HexColor("#E6FFF1")),
                      ),
                    )),
              ),
            ),
          ]),
        ));
  }

  Padding lecture_card(Size size, String name, String imageLink) {
    return Padding(
      padding: EdgeInsets.all(size.width * 0.03),
      child: Container(
          width: size.width * (0.215),
          height: size.width * (0.325),
          decoration: BoxDecoration(
            color: Color.fromARGB(255, 255, 255, 255),
            borderRadius: BorderRadius.circular(10),
          ),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
              Expanded(
                flex: 4,
                child: Padding(
                  padding: EdgeInsets.only(
                    top: size.width * 0.02,
                  ),
                  child: CircleAvatar(
                    radius: 45,
                    backgroundImage: AssetImage('$imageLink'),
                  ),
                ),
              ),
              Expanded(
                flex: 1,
                child: Padding(
                  padding: EdgeInsets.only(top: size.width * 0.01),
                  child: Text(
                    "$name",
                    style: TextStyle(
                      fontSize: 10,
                      fontWeight: FontWeight.bold,
                    ),
                    textAlign: TextAlign.center,
                  ),
                ),
              ),
              Expanded(
                flex: 3,
                child: Container(
                    child: Padding(
                  padding: EdgeInsets.only(
                      top: size.width * 0.01,
                      left: size.width * 0.03,
                      right: size.width * 0.03),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: [
                      Expanded(
                        flex: 1,
                        child: Center(
                          child: Padding(
                            padding: EdgeInsets.only(
                                left: size.width * 0.004,
                                right: size.width * 0.004),
                            child: Container(
                              decoration: BoxDecoration(
                                shape: BoxShape.circle,
                                color: HexColor("#00B251"),
                              ),
                              child: Center(
                                child: Text(
                                  "P",
                                  style: TextStyle(
                                    color: Colors.white,
                                  ),
                                ),
                              ),
                            ),
                          ),
                        ),
                      ),
                      Expanded(
                        flex: 1,
                        child: Center(
                          child: Padding(
                            padding: EdgeInsets.only(
                                left: size.width * 0.004,
                                right: size.width * 0.004),
                            child: Container(
                              decoration: BoxDecoration(
                                shape: BoxShape.circle,
                                color: HexColor("#959CA3"),
                              ),
                              child: Center(
                                child: Text(
                                  "A",
                                  style: TextStyle(
                                    color: Colors.white,
                                  ),
                                ),
                              ),
                            ),
                          ),
                        ),
                      ),
                      Expanded(
                        flex: 1,
                        child: Center(
                          child: Padding(
                            padding: EdgeInsets.only(
                                left: size.width * 0.004,
                                right: size.width * 0.004),
                            child: Container(
                              decoration: BoxDecoration(
                                  shape: BoxShape.circle,
                                  color: HexColor("#959CA3")),
                              child: Center(
                                child: Text(
                                  "L",
                                  style: TextStyle(
                                    color: Colors.white,
                                  ),
                                ),
                              ),
                            ),
                          ),
                        ),
                      ),
                    ],
                  ),
                )),
              ),
              Expanded(
                flex: 2,
                child: SizedBox(
                  child: Padding(
                    padding: EdgeInsets.only(
                        bottom: size.width * 0.03,
                        left: size.width * 0.02,
                        right: size.width * 0.02),
                    child: ElevatedButton(
                      onPressed: () {},
                      child: const Text(
                        "View Details",
                        style: TextStyle(
                          fontSize: 6,
                          fontWeight: FontWeight.bold,
                        ),
                      ),
                      style: ButtonStyle(
                        alignment: Alignment.center,
                        shape: MaterialStateProperty.all(
                          RoundedRectangleBorder(
                            borderRadius: BorderRadius.circular(10),
                          ),
                        ),
                      ),
                    ),
                  ),
                ),
              ),
            ],
          )),
    );
  }
}
