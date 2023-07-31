import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/menu_home.dart';
import 'package:mad_project/pages/drawer_screen.dart';

class HomePage extends StatelessWidget {
  final GlobalKey<ScaffoldState> _scaffoldKey = GlobalKey<ScaffoldState>();

  HomePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      key: _scaffoldKey,
      drawer: DrawerScreen(),
      appBar: MenuHome(
        username: "Hi GNYS Silva",
      ),
      body: SafeArea(
        child: Column(
          children: [
            // Flexible(
            //   child: MenuHome(),
            // ),
            SizedBox(
              height: 20,
            ),
            Column(
              children: [
                //Textbox and Icon

                Row(
                  children: [
                    Expanded(
                      child: Padding(
                        padding: const EdgeInsets.only(left: 16, right: 5),
                        child: TextField(
                          decoration: InputDecoration(
                            border: OutlineInputBorder(
                              borderRadius: BorderRadius.circular(10),
                            ),
                            contentPadding:
                                EdgeInsets.symmetric(vertical: 20),
                          ),
                        ),
                      ),
                    ),
                    Padding(
                      padding: const EdgeInsets.only(right: 6),
                      child: IconButton(
                        icon: Image.asset(
                          'assets/icons/filter.png',
                          //color: Colors.black,
                          width: 28,
                          height: 28,
                        ),
                        onPressed: () {},
                      ),
                    ),
                  ],
                ),
                SizedBox(
                  height: 20,
                ),

                //Upcoming Lectures Text

                Text(
                  "Upcoming Lectures",
                  style: TextStyle(fontSize: 16, color: HexColor("#77796B")),
                  textAlign: TextAlign.left,
                ),

                //Lecture Showing Container

                Padding(
                  padding: const EdgeInsets.all(16.0),
                  child: Container(
                    //color: HexColor("#FEECEC"),
                    height: 120,
                    decoration: BoxDecoration(
                        color: HexColor("#FEECEC"),
                        borderRadius: BorderRadius.circular(10)),
                  ),
                ),

                //Near by Text

                Padding(
                  padding: const EdgeInsets.only(left: 16.0),
                  child: Align(
                    alignment: Alignment.topLeft,
                    child: Text(
                      "Near by",
                      style: TextStyle(fontSize: 16, color: Colors.black),
                    ),
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Near by Circles

                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 2),
                  child: Row(
                    children: [
                      Padding(
                        padding: const EdgeInsets.only(left: 16.0),
                        child: Container(
                          //color: HexColor("#FEECEC"),
                          height: 83,
                          width: 83,
                          decoration: BoxDecoration(
                              color: HexColor("#C8F6CD"),
                              borderRadius: BorderRadius.circular(100)),
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.only(left: 16.0),
                        child: Container(
                          //color: HexColor("#FEECEC"),
                          height: 83,
                          width: 83,
                          decoration: BoxDecoration(
                              color: HexColor("#C8F6CD"),
                              borderRadius: BorderRadius.circular(100)),
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.only(left: 16),
                        child: Container(
                          //color: HexColor("#FEECEC"),
                          height: 83,
                          width: 83,
                          decoration: BoxDecoration(
                              color: HexColor("#C8F6CD"),
                              borderRadius: BorderRadius.circular(100)),
                        ),
                      ),
                      Padding(
                        padding: const EdgeInsets.only(left: 16),
                        child: Container(
                          //color: HexColor("#FEECEC"),
                          height: 83,
                          width: 83,
                          decoration: BoxDecoration(
                              color: HexColor("#C8F6CD"),
                              borderRadius: BorderRadius.circular(100)),
                        ),
                      ),
                    ],
                  ),
                ),
              ],
            )
          ],
        ),
      ),
    );
  }
}
