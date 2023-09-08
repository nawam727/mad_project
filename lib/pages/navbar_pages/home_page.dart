import 'package:carousel_slider/carousel_slider.dart';
import 'package:dots_indicator/dots_indicator.dart';
import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/menu_home.dart';
import 'package:mad_project/pages/drawer_screen.dart';
import 'package:mad_project/pages/location_view_page.dart';

import '../../main.dart';
import '../mode_selector_page.dart';

class HomePage extends StatefulWidget {
  //final GlobalKey<ScaffoldState> _scaffoldKey = GlobalKey<ScaffoldState>();

  HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

int _currentIndex = 0;

class _HomePageState extends State<HomePage> {
  //fireStore fetching data
  UserData? userData;

  @override
  void initState() {
    super.initState();
    getUserData();
  }

  Future<void> getUserData() async {
    UserData? userDetails = await getUserDetails();
    setState(() {
      userData = userDetails;
    });
  }

  List<String> imageList = [
    'assets/images/slider1.png',
    'assets/images/slider2.png',
    'assets/images/slider3.png',
    'assets/images/slider4.png',
  ];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuHome(),
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
                    SizedBox(
                      height: 10,
                    ),

                    //Image Slider

                    Padding(
                      padding: const EdgeInsets.symmetric(horizontal: 14),
                      child: Column(
                        children: [
                          CarouselSlider(
                            options: CarouselOptions(
                              height: 200.0,
                              viewportFraction: 1,
                              enlargeCenterPage: true,
                              autoPlay: false,
                              autoPlayInterval: Duration(seconds: 3),
                              autoPlayAnimationDuration:
                                  Duration(milliseconds: 800),
                              autoPlayCurve: Curves.fastOutSlowIn,
                              onPageChanged: (index, reason) {
                                setState(() {
                                  _currentIndex = index;
                                });
                              },
                            ),
                            items: imageList.map((imageUrl) {
                              return Builder(
                                builder: (BuildContext context) {
                                  return Container(
                                    width: MediaQuery.of(context).size.width,
                                    margin:
                                        EdgeInsets.symmetric(horizontal: 5.0),
                                    child: Image.asset(
                                      imageUrl,
                                      fit: BoxFit.contain,
                                    ),
                                  );
                                },
                              );
                            }).toList(),
                          ),
                          DotsIndicator(
                            dotsCount: imageList.length,
                            position: _currentIndex.toDouble().toInt(),
                            decorator: DotsDecorator(
                              size: const Size.square(9.0),
                              activeSize: const Size(9.0, 9.0),
                              activeShape: RoundedRectangleBorder(
                                borderRadius: BorderRadius.circular(5.0),
                              ),
                              activeColor: HexColor(
                                  "#00B251"), // Set the active dot color
                              color: Colors.grey,
                            ),
                          ),
                        ],
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

                    //Upcoming Text

                    Padding(
                      padding: const EdgeInsets.only(left: 16),
                      child: Align(
                        alignment: Alignment.topLeft,
                        child: Text(
                          "Upcoming",
                          style: TextStyle(
                              fontSize: 16, color: HexColor("#77796B")),
                          //textAlign: TextAlign.left,
                        ),
                      ),
                    ),

                    //Lecture Showing Container

                    Padding(
                      padding: const EdgeInsets.all(16.0),
                      child: Container(
                        //color: HexColor("#FEECEC"),
                        height: 110,
                        decoration: BoxDecoration(
                          color: HexColor("#FEECEC"),
                          borderRadius: BorderRadius.circular(10),
                          boxShadow: [
                            BoxShadow(
                              color: Colors.grey.withOpacity(0.5),
                              spreadRadius: 1,
                              blurRadius: 10,
                              offset:
                                  Offset(0, 3), // changes position of shadow
                            ),
                          ],
                        ),
                      ),
                    ),
                    SizedBox(
                      height: 0,
                    ),

                    //Recently Viewed Text

                    Padding(
                      padding: const EdgeInsets.only(left: 16),
                      child: Align(
                        alignment: Alignment.topLeft,
                        child: Text(
                          "Recently Viewed",
                          style: TextStyle(
                              fontSize: 16, color: HexColor("#77796B")),
                          //textAlign: TextAlign.left,
                        ),
                      ),
                    ),
                    SizedBox(
                      height: 10,
                    ),

                    //Recently Viewed containar
                    Padding(
                      padding: const EdgeInsets.only(left: 17),
                      child: Row(
                        //mainAxisAlignment: MainAxisAlignment.spaceBetween,
                        children: [
                          RecentlyViewed(
                            imagePath: 'assets/images/gate.png',
                            title: 'Main Gate',
                            description: 'Shortest route to main gate',
                          ),
                          SizedBox(
                            width: 22,
                          ),
                          RecentlyViewed(
                            imagePath: 'assets/images/audi.png',
                            title: 'Auditorium',
                            description: 'Shortest route to Auditorium',
                          ),
                        ],
                      ),
                    )
                  ],
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

class RecentlyViewed extends StatelessWidget {
  final String imagePath;
  final String title;
  final String description;

  const RecentlyViewed({
    required this.imagePath,
    required this.title,
    required this.description,
    super.key,
  });

  @override
  Widget build(BuildContext context) {
    double containerWidth = MediaQuery.of(context).size.width * 0.43;
    double containerHeight = 200;
    double fontlarge = MediaQuery.of(context).size.width * 0.04;
    double fontsmall = MediaQuery.of(context).size.width * 0.028;

    return GestureDetector(
      onTap: () {
        Navigator.push(
          context,
          MaterialPageRoute(
            builder: (context) => ModeSelector(),
          ),
        );
      },
      child: Container(
        height: containerHeight,
        width: containerWidth,
        decoration: BoxDecoration(
          color: Colors.white,
          borderRadius: BorderRadius.circular(10),
          boxShadow: [
            BoxShadow(
              color: Colors.grey.withOpacity(0.5),
              spreadRadius: 1,
              blurRadius: 10,
              offset: Offset(0, 3), // changes position of shadow
            ),
          ],
          border: Border.all(
            color: Colors.grey, // Set your desired border color here
            width: 0.5, // Set the border width as needed
          ), // Adjust the radius value as needed
        ),
        child: Column(
          children: [
            Expanded(
              flex: 2,
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
                  1, // Adjust this flex value to control the size of the text part
              child: Column(
                mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                children: [
                  Row(
                    children: [
                      SizedBox(
                        width: 10,
                      ),
                      Text(
                        title,
                        style: TextStyle(fontSize: fontlarge),
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
                  Align(
                    alignment: Alignment.bottomLeft,
                    child: Padding(
                      padding: const EdgeInsets.only(left: 8.0),
                      child: Text(
                        description,
                        style: TextStyle(fontSize: fontsmall),
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ],
        ),
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
                decoration: BoxDecoration(
                  color: HexColor("#C8F6CD"),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 1,
                      blurRadius: 20,
                      offset: Offset(0, 3), // changes position of shadow
                    ),
                  ],
                ),
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
