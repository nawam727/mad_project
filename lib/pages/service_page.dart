import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/menu_notify.dart';
import 'package:mad_project/pages/drawer_screen.dart';
import 'package:mad_project/pages/hall_availability.dart';
import 'package:mad_project/pages/lecturers_availability_page.dart';
import 'package:mad_project/pages/navigator_page.dart';

class ServicePage extends StatelessWidget {
  const ServicePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuNotify(
        title: "Services",
      ),
      body: ListView(
        children: <Widget>[
          //Navigation Container
          Container(
            width: 500,
            height: 220,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
            margin: const EdgeInsets.only(right: 20, left: 20, top: 30),
            decoration: BoxDecoration(
              boxShadow: [
                BoxShadow(
                  color: Colors.grey.withOpacity(0.5),
                  spreadRadius: 1,
                  blurRadius: 10,
                  offset: Offset(0, 3), // changes position of shadow
                ),
              ],
              color: const Color.fromARGB(255, 214, 247, 221),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color:
                    HexColor("#00B251"), // Set your desired border color here
                width: 0.3, // Set the border width as needed
              ),
            ),
            child: GestureDetector(
              onTap: () {
                Navigator.push(
                  context,
                  MaterialPageRoute(
                    builder: (context) => NavigatorPage(),
                  ),
                );
              },
              child: Container(
                margin: const EdgeInsets.all(8.0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.stretch, // add this
                  children: <Widget>[
                    ClipRRect(
                      borderRadius: const BorderRadius.only(
                        topLeft: Radius.circular(8.0),
                        topRight: Radius.circular(8.0),
                      ),
                      child: Image.asset(
                        'assets/images/Frame.png',
                        width: 150,
                        height: 100,
                        alignment: Alignment.center,
                        //fit:BoxFit.fill
                      ),
                    ),
                    const SizedBox(height: 20),
                    const Text(
                      'Navigation',
                      style: TextStyle(
                          fontSize: 16,
                          color: Colors.black,
                          fontWeight: FontWeight.bold),
                      textAlign: TextAlign.center,
                    ),
                    SizedBox(
                      height: 20,
                    ),
                    const Text(
                      'Find your way around NSBM with ease',
                      textAlign: TextAlign.center,
                    )
                  ],
                ),
              ),
            ),
          ),

          //Lecturer Availability Container
          Container(
            width: 500,
            height: 220,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
            margin: const EdgeInsets.only(right: 20, left: 20, top: 30),
            decoration: BoxDecoration(
              boxShadow: [
                BoxShadow(
                  color: Colors.grey.withOpacity(0.5),
                  spreadRadius: 1,
                  blurRadius: 10,
                  offset: Offset(0, 3), // changes position of shadow
                ),
              ],
              color: const Color.fromARGB(255, 214, 247, 221),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color:
                    HexColor("#00B251"), // Set your desired border color here
                width: 0.3, // Set the border width as needed
              ),
            ),
            child: GestureDetector(
              onTap: () {
                Navigator.push(
                  context,
                  MaterialPageRoute(
                    builder: (context) => LecturerAvailabilityPage(),
                  ),
                );
              },
              child: Container(
                margin: const EdgeInsets.all(8.0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.stretch, // add this
                  children: <Widget>[
                    ClipRRect(
                      borderRadius: const BorderRadius.only(
                        topLeft: Radius.circular(8.0),
                        topRight: Radius.circular(8.0),
                      ),
                      child: Image.asset(
                        'assets/images/Frame (1).png',
                        width: 150,
                        height: 100,
                        alignment: Alignment.center,
                        //fit:BoxFit.fill
                      ),
                    ),
                    const SizedBox(height: 20),
                    const Text(
                      'Lecturer Availability',
                      style: TextStyle(
                          fontSize: 16,
                          color: Colors.black,
                          fontWeight: FontWeight.bold),
                      textAlign: TextAlign.center,
                    ),
                    SizedBox(
                      height: 20,
                    ),
                    const Text(
                      'Easily view wheather lecturers are available',
                      textAlign: TextAlign.center,
                    )
                  ],
                ),
              ),
            ),
          ),

          //Hall Availability Container
          Container(
            width: 500,
            height: 220,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
            margin: const EdgeInsets.only(right: 20, left: 20, top: 30),
            decoration: BoxDecoration(
              boxShadow: [
                BoxShadow(
                  color: Colors.grey.withOpacity(0.5),
                  spreadRadius: 1,
                  blurRadius: 10,
                  offset: Offset(0, 3), // changes position of shadow
                ),
              ],
              color: Color.fromARGB(255, 214, 247, 221),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color:
                    HexColor("#00B251"), // Set your desired border color here
                width: 0.3, // Set the border width as needed
              ),
            ),
            child: GestureDetector(
              onTap: () {
                Navigator.push(
                  context,
                  MaterialPageRoute(
                    builder: (context) => HallAvailability(),
                  ),
                );
              },
              child: Container(
                margin: const EdgeInsets.all(8.0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.stretch, // add this
                  children: <Widget>[
                    ClipRRect(
                      borderRadius: const BorderRadius.only(
                        topLeft: Radius.circular(8.0),
                        topRight: Radius.circular(8.0),
                      ),
                      child: Image.asset(
                        'assets/images/Frame (2).png',
                        width: 150,
                        height: 100,
                        alignment: Alignment.center,
                        //fit:BoxFit.fill
                      ),
                    ),
                    const SizedBox(height: 20),
                    const Text(
                      'Hall Availability',
                      style: TextStyle(
                          fontSize: 16,
                          color: Colors.black,
                          fontWeight: FontWeight.bold),
                      textAlign: TextAlign.center,
                    ),
                    SizedBox(
                      height: 20,
                    ),
                    const Text(
                      'Real-time updates on lecture hall availability',
                      textAlign: TextAlign.center,
                    )
                  ],
                ),
              ),
            ),
          ),
          SizedBox(
            height: 20,
          ),
        ],
      ),
    );
  }
}
