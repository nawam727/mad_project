import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';

import 'location_view_page.dart';
import 'mode_selector_page.dart';

class NavigatorPage extends StatelessWidget {
  const NavigatorPage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: BackDots(
        title: 'Navigator',
      ),
      body: ListView(
        children: [
          SafeArea(
            child: Column(
              children: [
                SizedBox(
                  height: 20,
                ),
                Column(
                  children: [
                    //Search Box
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
                                focusedBorder: OutlineInputBorder(
                                  borderRadius: BorderRadius.circular(10),
                                  borderSide: BorderSide(
                                      color: HexColor(
                                          "#00B251")), // Border color when focused
                                ),
                                contentPadding:
                                    EdgeInsets.symmetric(vertical: 15),
                                prefixIcon: Icon(
                                  Icons.search,
                                ), // Icon to be displayed before the text field
                                prefixText:
                                    'Search: ', // Text to be displayed before the input field
                                hintText: 'Search Here',
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
                  ],
                ),
                SizedBox(
                  height: 20,
                ),
                //Near by text
                Padding(
                  padding: const EdgeInsets.only(left: 16.0),
                  child: Align(
                    alignment: Alignment.topLeft,
                    child: Text(
                      "Near by",
                      style: TextStyle(
                        fontSize: 16,
                        color: Colors.black,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Near by Circles

                Center(
                  child: Padding(
                    padding: const EdgeInsets.symmetric(horizontal: 2),
                    child: Row(
                      children: [
                        CircularCantainer(
                          nameText: "Canteen",
                          imagePath: 'assets/images/canteen.png',
                          onPressed: () {
                            // Your onPressed logic here
                            Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => ModeSelector()),
                            );
                          },
                        ),
                        CircularCantainer(
                          nameText: "Toilet",
                          imagePath: 'assets/images/toilet.png',
                          onPressed: () {
                            // Your onPressed logic here
                            Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => ModeSelector()),
                            );
                          },
                        ),
                        CircularCantainer(
                          nameText: "Elevator",
                          imagePath: 'assets/images/lift.png',
                          onPressed: () {
                            // Your onPressed logic here
                            Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => ModeSelector()),
                            );
                          },
                        ),
                        CircularCantainer(
                          nameText: "Others",
                          imagePath: 'assets/images/other.png',
                          onPressed: () {
                            // Your onPressed logic here
                            Navigator.push(
                              context,
                              MaterialPageRoute(
                                  builder: (context) => LocationView()),
                            );
                          },
                        ),
                      ],
                    ),
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Main Locations Text

                Padding(
                  padding: const EdgeInsets.only(left: 16.0),
                  child: Align(
                    alignment: Alignment.topLeft,
                    child: Text(
                      "Main Locations",
                      style: TextStyle(
                        fontSize: 16,
                        color: Colors.black,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Main Location Card
                Container(
                  height: 150,
                  child: ListView(
                    scrollDirection: Axis.horizontal,
                    children: [
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                    ],
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Computing Faculty Text

                Padding(
                  padding: const EdgeInsets.only(left: 16.0),
                  child: Align(
                    alignment: Alignment.topLeft,
                    child: Text(
                      "Computing Faculty",
                      style: TextStyle(
                        fontSize: 16,
                        color: Colors.black,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Computing Faculty Location Card
                Container(
                  height: 150,
                  child: ListView(
                    scrollDirection: Axis.horizontal,
                    children: [
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                    ],
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Busines Faculty Text

                Padding(
                  padding: const EdgeInsets.only(left: 16.0),
                  child: Align(
                    alignment: Alignment.topLeft,
                    child: Text(
                      "Busines Faculty",
                      style: TextStyle(
                        fontSize: 16,
                        color: Colors.black,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Busines Faculty Location Card
                Container(
                  height: 150,
                  child: ListView(
                    scrollDirection: Axis.horizontal,
                    children: [
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                    ],
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Engineering Faculty Text

                Padding(
                  padding: const EdgeInsets.only(left: 16.0),
                  child: Align(
                    alignment: Alignment.topLeft,
                    child: Text(
                      "Engineering Faculty",
                      style: TextStyle(
                        fontSize: 16,
                        color: Colors.black,
                        fontWeight: FontWeight.bold,
                      ),
                    ),
                  ),
                ),
                SizedBox(
                  height: 20,
                ),

                //Engineering Faculty Location Card
                Container(
                  height: 150,
                  child: ListView(
                    scrollDirection: Axis.horizontal,
                    children: [
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                      LocationCard(
                        imagePath: 'assets/images/gate.png',
                        title: 'Main Gate',
                      ),
                    ],
                  ),
                ),
                SizedBox(
                  height: 20,
                )
              ],
            ),
          ),
        ],
      ),
    );
  }
}

class LocationCard extends StatelessWidget {
  final String imagePath;
  final String title;

  const LocationCard({
    required this.imagePath,
    required this.title,
    super.key,
  });

  @override
  Widget build(BuildContext context) {
    double containerHeight = MediaQuery.of(context).size.height * 0.43;
    double containerWidth = 200;
    double fontlarge = MediaQuery.of(context).size.height * 0.04;
    double fontsmall = MediaQuery.of(context).size.height * 0.028;

    return Padding(
      padding: const EdgeInsets.only(left: 16.0),
      child: Row(
        children: [
          Container(
            height: containerHeight,
            width: containerWidth,
            decoration: BoxDecoration(
              color: Colors.white,
              borderRadius: BorderRadius.circular(10),
              border: Border.all(
                color: Colors.grey, // Set your desired border color here
                width: 0.5, // Set the border width as needed
              ),
            ),
            child: Column(
              children: [
                Expanded(
                  flex: 3,
                  child: ClipRRect(
                    borderRadius: BorderRadius.only(
                      topLeft: Radius.circular(10), // Top-left corner radius
                      topRight: Radius.circular(10), // Top-right corner radius
                    ),
                    // Adjust this flex value to control the size of the image part
                    child: Image.asset(
                      imagePath, // Replace with your image URL
                      fit: BoxFit.cover,
                    ),
                  ),
                ),
                Expanded(
                  flex:
                      2, // Adjust this flex value to control the size of the text part
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: [
                      Row(
                        children: [
                          SizedBox(
                            width: 10,
                          ),
                          Text(
                            'Auditorium',
                            style: TextStyle(fontSize: 12),
                          ),
                          Spacer(),
                          IconButton(
                            icon: Icon(
                              Icons.arrow_circle_right,
                              color: HexColor("#00B251"),
                            ), // Replace with your desired icon
                            onPressed: () {
                              Navigator.push(
                                context,
                                MaterialPageRoute(
                                  builder: (context) => ModeSelector(),
                                ),
                              );
                            },
                          ),
                        ],
                      ),
                      // Text(
                      //   'Shortest route to Auditorium',
                      //   style: TextStyle(fontSize: 11),
                      // ),
                    ],
                  ),
                ),
              ],
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
      padding: const EdgeInsets.only(left: 16.0),
      child: Column(
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
