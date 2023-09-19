import 'package:carousel_slider/carousel_slider.dart';
import 'package:dots_indicator/dots_indicator.dart';
import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/menu_home.dart';
import 'package:mad_project/pages/drawer_screen.dart';
import 'package:mad_project/pages/hall_availability.dart';
import 'package:mad_project/pages/lecture_cabin_state_page.dart';
import 'package:mad_project/pages/lecturers_availability_page.dart';
import 'package:mad_project/pages/location_view_page.dart';
import 'package:mad_project/pages/navbar_pages/calendar_page.dart';
import 'package:mad_project/pages/navbar_pages/profile_page.dart';
import 'package:mad_project/pages/settings_page.dart';
import '../../main.dart';
import '../mode_selector_page.dart';
import '../navigator_page.dart';

class HomePage extends StatefulWidget {
  HomePage({super.key});

  @override
  State<HomePage> createState() => _HomePageState();
}

int _currentIndex = 0;

class _HomePageState extends State<HomePage> {
  final TextEditingController _searchController = TextEditingController();

  // Creating a map to map page names to their routes.
  final Map<String, Widget> pageRoutes = {
    'Lectures': LecturerAvailabilityPage(),
    'Hall': HallAvailability(),
    'Cabin': CabinState(),
    'Settings': SettingsScreen(),
    'Profile': ProfilePage(),
    'Locations': LocationView(),
  };

  void navigateToPage(String pageName) {
    // Convert the entered pageName to lowercase.
    final lowerPageName = pageName.toLowerCase();

    // Check if a matching page name (case-insensitive) exists in the map.
    final matchingKey = pageRoutes.keys.firstWhere(
      (key) => key.toLowerCase() == lowerPageName,
      orElse: () => '',
    );

    if (matchingKey.isNotEmpty) {
      Navigator.push(context,
          MaterialPageRoute(builder: (context) => pageRoutes[matchingKey]!));

      // Clear the search bar.
      _searchController.clear();
    }
  }

  //fireStore fetching data
  LectureData? lectureData;

  @override
  void initState() {
    super.initState();
    getLectureData();
  }

  Future<void> getLectureData() async {
    LectureData? lectureDetails = await getLectureDetails();
    setState(() {
      lectureData = lectureDetails;
    });
  }

  List<String> imageList = [
    'assets/images/slider1.png',
    'assets/images/slider2.png',
    'assets/images/slider3.png',
    'assets/images/slider4.png',
  ];

  List<Widget> destinationRoutes = [
    NavigatorPage(),
    CalendarPage(),
    LecturerAvailabilityPage(),
    HallAvailability(),
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
                              controller: _searchController,
                              onSubmitted: (value) {
                                navigateToPage(value);
                              },
                              decoration: InputDecoration(
                                border: OutlineInputBorder(
                                  borderRadius: BorderRadius.circular(10),
                                ),
                                focusedBorder: OutlineInputBorder(
                                  borderRadius: BorderRadius.circular(10),
                                  borderSide: BorderSide(
                                    color: HexColor("#00B251"),
                                  ),
                                ),
                                contentPadding:
                                    EdgeInsets.symmetric(vertical: 15),
                                prefixIcon: Icon(
                                  Icons.search,
                                ),
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
                              autoPlay: true,
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
                              int currentIndex = imageList
                                  .indexOf(imageUrl); // Get the current index
                              return Builder(
                                builder: (BuildContext context) {
                                  return GestureDetector(
                                    onTap: () {
                                      if (currentIndex >= 0 &&
                                          currentIndex <
                                              destinationRoutes.length) {
                                        Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                            builder: (context) =>
                                                destinationRoutes[currentIndex],
                                          ),
                                        );
                                      }
                                    },
                                    child: Container(
                                      width: MediaQuery.of(context).size.width,
                                      margin:
                                          EdgeInsets.symmetric(horizontal: 5.0),
                                      child: Image.asset(
                                        imageUrl,
                                        fit: BoxFit.contain,
                                      ),
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
                        child: Row(
                          children: [
                            // Red left border
                            Container(
                              width: 8,
                              decoration: BoxDecoration(
                                color: HexColor('FB9078'), // Red color
                                borderRadius: BorderRadius.only(
                                  topLeft: Radius.circular(
                                      10),
                                  bottomLeft: Radius.circular(
                                      10),
                                ),
                              ),
                            ),

                            // Main content
                            Expanded(
                              child: Padding(
                                padding: const EdgeInsets.all(8.0),
                                child: Column(
                                  crossAxisAlignment: CrossAxisAlignment.start,
                                  children: [
                                    Text(
                                      lectureData != null
                                          ? lectureData!.lecture
                                          : "Lecture",
                                      style: TextStyle(
                                        fontSize: 18,
                                        fontWeight: FontWeight.bold,
                                      ),
                                    ),
                                    SizedBox(
                                      height: 5,
                                    ),
                                    Text(
                                      lectureData != null
                                          ? lectureData!.time
                                          : "Time",
                                      style: TextStyle(
                                        color: HexColor("77796B"),
                                        fontWeight: FontWeight.bold,
                                      ),
                                    ),
                                    SizedBox(
                                      height: 5,
                                    ),
                                    Text(
                                      lectureData != null
                                          ? lectureData!.lecturer
                                          : "Lecturer Name",
                                      style: TextStyle(
                                        fontSize: 18,
                                        fontWeight: FontWeight.bold,
                                      ),
                                    ),
                                    SizedBox(
                                      height: 5,
                                    ),
                                    Align(
                                      alignment: Alignment.bottomRight,
                                      child: Text(
                                        lectureData != null
                                            ? lectureData!.location
                                            : "Hall",
                                        style: TextStyle(
                                          color: HexColor("77796B"),
                                          fontWeight: FontWeight.bold,
                                        ),
                                      ),
                                    ),
                                  ],
                                ),
                              ),
                            ),
                          ],
                        ),
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
                                  Offset(0, 3),
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
                            //description: 'Shortest route to main gate',
                          ),
                          SizedBox(
                            width: 22,
                          ),
                          RecentlyViewed(
                            imagePath: 'assets/images/audi.png',
                            title: 'Auditorium',
                            //description: 'Shortest route to Auditorium',
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

  const RecentlyViewed({
    required this.imagePath,
    required this.title,
    super.key,
  });

  @override
  Widget build(BuildContext context) {
    double containerWidth = MediaQuery.of(context).size.width * 0.43;
    double containerHeight = 150;
    double fontlarge = MediaQuery.of(context).size.width * 0.04;
    //double fontsmall = MediaQuery.of(context).size.width * 0.028;

    return Container(
      height: containerHeight,
      width: containerWidth,
      decoration: BoxDecoration(
        color: Colors.white,
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 1,
            blurRadius: 10,
            offset: Offset(0, 3), // changes position of shadow
          ),
        ],
        borderRadius: BorderRadius.circular(10),
        border: Border.all(
          color: Colors.grey,
          width: 0.5, 
        ), 
      ),
      child: Column(
        children: [
          Expanded(
            flex: 2,
            child: ClipRRect(
              borderRadius: BorderRadius.only(
                topLeft: Radius.circular(10), 
                topRight: Radius.circular(10), 
              ),
              child: Image.asset(
                imagePath, 
                fit: BoxFit.cover,
              ),
            ),
          ),
          Expanded(
            flex:
                1, 
            child: Column(
              mainAxisAlignment: MainAxisAlignment.start,
              children: [
                Row(
                  crossAxisAlignment: CrossAxisAlignment.center,
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
                      ),
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
                decoration: BoxDecoration(
                  color: HexColor("#C8F6CD"),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 1,
                      blurRadius: 20,
                      offset: Offset(0, 3),
                    ),
                  ],
                ),
                child: Image.asset(
                  imagePath,
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
