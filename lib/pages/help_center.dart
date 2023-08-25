import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';
import 'package:mad_project/pages/drawer_screen.dart';


class HelpCenter extends StatelessWidget {
  const HelpCenter({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: BackDots(title: 'Help Center'),
      body:ListView(
  children: <Widget>[
    Column(
      children:<Widget>[
        Container(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height*0.90,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
      decoration: BoxDecoration(
        color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
      ),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.stretch,
        children: <Widget>[
          Expanded(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/help.jpg',
                    width: 250,
                    height: 250,
                    alignment: Alignment.topCenter,
                    fit: BoxFit.fill,
                  ),
                ),
              
                
                SizedBox(height: 0), // Added spacing below the image
                Text(
                  "Help Center",
                  style: TextStyle(
                    fontSize: 23 ,
                    color: HexColor("#00000"),
                    fontWeight: FontWeight.bold,
                  ),
                  textAlign: TextAlign.center,
                ),
                SizedBox(height: 8,), // Added spacing below the image
                Text(
                  "search here for tips,product guides and answers to common questions",
                  style: TextStyle(
                    fontSize: 13,
                    color: Color.fromARGB(255, 65, 61, 61),
                    fontWeight: FontWeight.normal,
                  ),
                  textAlign: TextAlign.center,
                ),
              ],
            ),
          ),
        ],
      ),
     ),
  
      //help center menu page

        Container(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height*0.90,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
      decoration: BoxDecoration(
        color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
      ),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.stretch,
            children:<Widget>[
            Container(
            width:MediaQuery.of(context).size.width,
            height:MediaQuery.of(context).size.height*0.20,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
            margin: const EdgeInsets.only(right: 0, left: 0, top: 10),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#959CA3"),
                width: 0.3,
              ),
              boxShadow: [
                BoxShadow(
                  color: Colors.grey.withOpacity(0.5),
                  spreadRadius: 2,
                  blurRadius: 10,
                  offset: Offset(0, 3), // changes position of shadow
                ),
              ],
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              children: <Widget>[
                Expanded(
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: <Widget>[
                      Text(
                        'How can we Help you?',
                        style: TextStyle(
                          fontSize: 18,
                          color: Colors.black,
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.center,
                      ),
                    ],
                  ),
                ),
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/help2.jpg',
                    width: 150,
                    height: 150,
                    alignment: Alignment.bottomRight,
                    fit: BoxFit.fill,
                  ),
                ),
              ],
            ),
          ),
          Padding(
            padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 20),
            child: TextField(
              decoration: InputDecoration(
                prefixIcon: Icon(
                  Icons.search,
                ),
                // Text to be displayed before the input field
                hintText: 'Enter your search term....',
                border: OutlineInputBorder(
                  borderRadius: BorderRadius.circular(8.0),
                  borderSide:
                      BorderSide(color: HexColor("#00B251") //border color
                          ),
                ),
              ),
            ),
          ),
          Row(
            children: <Widget>[
              Container(
                width: MediaQuery.of(context).size.width*0.35,
                height: MediaQuery.of(context).size.height*0.20,
                padding:
                    const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
                margin: const EdgeInsets.only(left: 10,right: 10, top: 10),
                decoration: BoxDecoration(
                  color: HexColor('#FFFFFF'),
                  borderRadius: BorderRadius.circular(24),
                  border: Border.all(
                    color: HexColor(
                        "#959CA3"), // Set your desired border color here
                    width: 0.3, // Set the border width as needed
                  ),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 2,
                      blurRadius: 10,
                      offset: Offset(0, 3), // changes position of shadow
                    ),
                  ],
                ),
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
                        child: Padding(
                          padding: const EdgeInsets.only(
                              top: 10), // Add padding to move the text down
                          child: Image.asset(
                            'assets/images/faq.png',
                            width: 100,
                            height: 50,
                            alignment: Alignment.center,
                            //fit:BoxFit.fill
                          ),
                        ),
                      ),
                      const SizedBox(width: 50),
                      Padding(
                        padding: const EdgeInsets.only(top: 8),
                        child: TextButton(
                          onPressed: () {},
                          child: Text(
                            'FAQ',
                            style: TextStyle(
                                fontSize: 14,
                                color: Colors.black,
                                fontWeight: FontWeight.bold),
                            textAlign: TextAlign.center,
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
              //Spacer(),
              Container(
                width: MediaQuery.of(context).size.width*0.35,
                height: MediaQuery.of(context).size.height*0.20,
                padding:
                    const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
                margin: const EdgeInsets.only(left: 10, top: 10),
                decoration: BoxDecoration(
                  color: HexColor('FFFFFF'),
                  borderRadius: BorderRadius.circular(24),
                  border: Border.all(
                    color: HexColor(
                        "#959CA3"), // Set your desired border color here
                    width: 0.3, // Set the border width as needed
                  ),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 2,
                      blurRadius: 10,
                      offset: Offset(0, 3), // changes position of shadow
                    ),
                  ],
                ),
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
                        child: Padding(
                          padding: const EdgeInsets.only(top: 0),
                          child: Image.asset(
                            'assets/images/u.png',
                            width: 100,
                            height: 70,
                            alignment: Alignment.center,
                            //fit:BoxFit.fill
                          ),
                        ),
                      ),
                      const SizedBox(width: 50),
                      Padding(
                        padding: const EdgeInsets.only(top: 0),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                            'Manage your Account',
                            style: TextStyle(
                                fontSize: 14,
                                color: Colors.black,
                                fontWeight: FontWeight.bold),
                            textAlign: TextAlign.center,
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
            ],
          ),
      
          Row(
            children: <Widget>[
              Container(
                width: MediaQuery.of(context).size.width*0.35,
                height: MediaQuery.of(context).size.height*0.20,
                padding:
                    const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
                margin: const EdgeInsets.only(left: 10, right: 10, top: 30),
                decoration: BoxDecoration(
                  color: HexColor('FFFFFF'),
                  borderRadius: BorderRadius.circular(24),
                  border: Border.all(
                    color: HexColor(
                        "#959CA3"), // Set your desired border color here
                    width: 0.3, // Set the border width as needed
                  ),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 2,
                      blurRadius: 10,
                      offset: Offset(0, 3), // changes position of shadow
                    ),
                  ],
                ),
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
                        child: Padding(
                          padding: const EdgeInsets.only(top: 8),
                          child: Image.asset(
                            'assets/images/human.png',
                            width: 100,
                            height: 50,
                            alignment: Alignment.center,
                            //fit:BoxFit.fill
                          ),
                        ),
                      ),
                      const SizedBox(width: 50),
                      Padding(
                        padding: const EdgeInsets.only(top: 8),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                            'General Questions',
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.black,
                                fontWeight: FontWeight.bold),
                            textAlign: TextAlign.center,
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
              Container(
                width: MediaQuery.of(context).size.width*0.35,
                height: MediaQuery.of(context).size.height*0.20,
                padding:
                    const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
                margin: const EdgeInsets.only( left: 10, top: 30),
                decoration: BoxDecoration(
                  color: HexColor('#FFFFFF'),
                  borderRadius: BorderRadius.circular(24),
                  border: Border.all(
                    color: HexColor(
                        "#959CA3"), // Set your desired border color here
                    width: 0.3, // Set the border width as needed
                  ),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 2,
                      blurRadius: 10,
                      offset: Offset(0, 3), // changes position of shadow
                    ),
                  ],
                ),
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
                        child: Padding(
                          padding: const EdgeInsets.only(top: 10),
                          child: Image.asset(
                            'assets/images/plan.png',
                            width: 100,
                            height: 50,
                            alignment: Alignment.center,
                            //fit:BoxFit.fill
                          ),
                        ),
                      ),
                      const SizedBox(width: 100),
                      Padding(
                        padding: const EdgeInsets.only(top: 6),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                            'Education plan',
                            style: TextStyle(
                                fontSize: 15,
                                color: Colors.black,
                                fontWeight: FontWeight.bold),
                            textAlign: TextAlign.center,
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),
            ],
          ),
          ],
       
        ),
        ),

        //1st general question page
        Container(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height*0.90,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
      decoration: BoxDecoration(
        color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
      ),
            child:Container(
                  margin: const EdgeInsets.all(8.0),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.stretch, // add this
                    children: <Widget>[
                    SizedBox(height: 0),
                    Padding(
                        padding: const EdgeInsets.only(top: 10,left:10, bottom: 10),
                        // Add padding to move the text down
                          child: Text(
                            'Frequently Asked Questions',
                            style: TextStyle(
                                fontSize: 18,
                                color: Color.fromARGB(255, 91, 91, 91),
                                fontWeight: FontWeight.bold),
                            textAlign: TextAlign.left,
                          ),
                        ),
        
        Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
          
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'How can I view my personalized timetable?',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Discover where to access and view your custom-made daily schedule.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
      ),
      Spacer(),
      Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'How do I set up notifications for upcoming classes?',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Find out how to enable notifications to receive reminders about your upcoming classes.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
        Spacer(),
        Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'How is my personal data protected and used within the app',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                "Learn about the app's data security measures and how your personal information is handled.",
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
        Spacer(),
        Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'How do I set up notifications for upcoming classes?',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Find out how to enable notifications to receive reminders about your upcoming classes.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
        
        Spacer(),
        Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'What should I do if I encounter a technical issue with the app?',                
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Learn how to troubleshoot and address technical issues you might encounter while using the app.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
                    ],
        ),
            ),

            
        ),
        
        //next question page
        Container(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height*0.90,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 20),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
      decoration: BoxDecoration(
        color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
      ),
        
        child:Column(
          children: [
          Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
          
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'How do I log in if I forgot my password?',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Find out the steps to reset your password and regain access to your account.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
      ),
      Spacer(),
      Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'How do I input my course schedule into the app?',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Understand how to input your class timings and subjects to create a personalized timetable.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
        Spacer(),
        Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'Can I get directions to a lecture hall from my current location?',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                "Find out how to get directions to your lecture hall using your device's map application.",
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
        Spacer(),
        Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'How can I check the availability of a specific lecture?',
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Learn how to check if a particular lecture has available seats or is already full.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
        
        Spacer(),
        Container(
        decoration: BoxDecoration(
          color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ), // Adding a border
        
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
        ),
        child: Column(
          children: [
            SizedBox(height: 2),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 10, right: 15),
              child: Text(
                'Can I use the app on multiple devices?',                
                style: TextStyle(
                    fontSize: 16,
                    color: Color.fromARGB(255, 0, 0, 0),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
            SizedBox(height: 0),
            Padding(
              padding: const EdgeInsets.only(top: 10, left: 15, right:15, bottom: 10),
              child: Text(
                'Understand whether the app supports usage on multiple devices and how to sync your data.',
                style: TextStyle(
                    fontSize: 14,
                    color: HexColor('929595'),
                    fontWeight: FontWeight.bold),
                textAlign: TextAlign.left,
              ),
            ),
          ],
        ),
                        ),
                    ],
        ),
        ),
        Container(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height*0.90,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
      decoration: BoxDecoration(
        color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
      ),
      child: Column(
            crossAxisAlignment: CrossAxisAlignment.stretch,
            children:<Widget>[
            Container(
            width:MediaQuery.of(context).size.width,
            height:MediaQuery.of(context).size.height*0.15,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
            margin: const EdgeInsets.only(right: 0, left: 0, top: 20),
            decoration: BoxDecoration(
              color: HexColor('02B251'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#02B251"),
                width: 0.3,
              ),
              boxShadow: [
                BoxShadow(
                  color: Colors.grey.withOpacity(0.5),
                  spreadRadius: 2,
                  blurRadius: 10,
                  offset: Offset(0, 3), // changes position of shadow
                ),
              ],
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/u2.png',
                    width:MediaQuery.of(context).size.width*0.20,
            height:MediaQuery.of(context).size.height*0.20,
                    alignment: Alignment.centerLeft,
                    //fit: BoxFit.fill,
                  ),
                ),
                //Spacer(),
                Expanded(
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.center,
 
                    children: <Widget>[
                      Text(
                        'Hi, GNYS Silva',
                        style: TextStyle(
                          fontSize: 20,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.right,
                      ),
                    ],
                  ),
                ),
                
              ],
            ),
          ),
        
          Container(
            width:MediaQuery.of(context).size.width*0.20,
            height:MediaQuery.of(context).size.height*0.075,
            padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
            margin: const EdgeInsets.only(right:0, left: 0, top: 30),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#FFFFFF"),
                width: 0.3,
              ),
              
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              //mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/up.png',
                    width:MediaQuery.of(context).size.width*0.07,
            height:MediaQuery.of(context).size.height*0.07,
                    alignment: Alignment.centerLeft,
                    //fit: BoxFit.fill,
                  ),
                ),
                //Spacer()
 
                  SizedBox(width: 15),Padding(
                        padding: const EdgeInsets.only(top: 0),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                        'Update profile picture',
                        style: TextStyle(
                          fontSize: 16,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.right,
                      ),
                  ),
                ),
                
              ],
            ),
          ),

          Container(
            width:MediaQuery.of(context).size.width*0.30,
            height:MediaQuery.of(context).size.height*0.075,
            padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
            margin: const EdgeInsets.only(right: 0, left: 0, top: 0),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#FFFFFF"),
                width: 0.3,
              ),
              
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              //mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/t.png',
                    width:MediaQuery.of(context).size.width*0.07,
            height:MediaQuery.of(context).size.height*0.07,
                    alignment: Alignment.centerLeft,
                    //fit: BoxFit.fill,
                  ),
                ),
                //Spacer()
 
                  SizedBox(width: 15),Padding(
                        padding: const EdgeInsets.only(top: 0),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                        'Change mobile number',
                        style: TextStyle(
                          fontSize: 16,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.right,
                      ),
                  ),
                ),
                
              ],
            ),
          ),

          Container(
            width:MediaQuery.of(context).size.width*0.30,
            height:MediaQuery.of(context).size.height*0.075,
            padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
            margin: const EdgeInsets.only(right: 0, left: 0, top: 0),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#FFFFFF"),
                width: 0.3,
              ),
              
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              //mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/n.png',
                    width:MediaQuery.of(context).size.width*0.07,
            height:MediaQuery.of(context).size.height*0.07,
                    alignment: Alignment.centerLeft,
                    //fit: BoxFit.fill,
                  ),
                ),
                //Spacer()
 
                  SizedBox(width: 15),Padding(
                        padding: const EdgeInsets.only(top: 0),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                        'Notifications',
                        style: TextStyle(
                          fontSize: 16,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.right,
                      ),
                  ),
                ),
                
              ],
            ),
          ),

          Container(
            width:MediaQuery.of(context).size.width*0.30,
            height:MediaQuery.of(context).size.height*0.075,
            padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
            margin: const EdgeInsets.only(right: 0, left: 0, top: 0),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#FFFFFF"),
                width: 0.3,
              ),
              
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              //mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/d.png',
                    width:MediaQuery.of(context).size.width*0.07,
            height:MediaQuery.of(context).size.height*0.07,
                    alignment: Alignment.centerLeft,
                    //fit: BoxFit.fill,
                  ),
                ),
                //Spacer()
 
                  SizedBox(width: 15),Padding(
                        padding: const EdgeInsets.only(top: 0),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                        'Backup / restore',
                        style: TextStyle(
                          fontSize: 16,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.right,
                      ),
                  ),
                ),
                
              ],
            ),
          ),

          Container(
            width:MediaQuery.of(context).size.width*0.30,
            height:MediaQuery.of(context).size.height*0.075,
            padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
            margin: const EdgeInsets.only(right: 0, left: 0, top: 0),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#FFFFFF"),
                width: 0.3,
              ),
              
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              //mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/t1.png',
                    width:MediaQuery.of(context).size.width*0.08,
            height:MediaQuery.of(context).size.height*0.08,
                    alignment: Alignment.centerLeft,
                    //fit: BoxFit.fill,
                  ),
                ),
                //Spacer()
 
                  SizedBox(width: 15),Padding(
                        padding: const EdgeInsets.only(top: 0),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                        'Deactivate account',
                        style: TextStyle(
                          fontSize: 16,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.right,
                      ),
                  ),
                ),
                
              ],
            ),
          ),

          Container(
            width:MediaQuery.of(context).size.width*0.30,
            height:MediaQuery.of(context).size.height*0.075,
            padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 10),
            margin: const EdgeInsets.only(right: 0, left: 0, top: 0),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("#FFFFFF"),
                width: 0.3,
              ),
              
            ),
          child: Row(
              //text and image
              crossAxisAlignment: CrossAxisAlignment.stretch,
              //mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: Image.asset(
                    'assets/images/i.png',
                    width:MediaQuery.of(context).size.width*0.07,
            height:MediaQuery.of(context).size.height*0.07,
                    alignment: Alignment.centerLeft,
                    //fit: BoxFit.fill,
                  ),
                ),
                //Spacer()
 
                  SizedBox(width: 15),Padding(
                        padding: const EdgeInsets.only(top: 0),
                        child: TextButton(
                          onPressed: () {}, // Add padding to move the text down
                          child: Text(
                        'Help',
                        style: TextStyle(
                          fontSize: 16,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.right,
                      ),
                  ),
                ),
                
              ],
            ),
          ),
            ],
      ),
        ),

        Container(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height*0.90,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
      decoration: BoxDecoration(
        color: Color.fromARGB(255, 255, 255, 255),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#AFB0AB"),
          width: 0.3,
        ),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 2,
            blurRadius: 10,
            offset: Offset(0, 3),
          ),
        ],
      ),

      child: Column(
            crossAxisAlignment: CrossAxisAlignment.stretch,
            children:<Widget>[
            Container(
            width:MediaQuery.of(context).size.width,
            height:MediaQuery.of(context).size.height*0.10,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
            margin: const EdgeInsets.only(top: 15),
            decoration: BoxDecoration(
              color: HexColor('FFFFFF'),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color: HexColor("FFFFFF"),
                width: 0.3,
              ),
              boxShadow: [
                BoxShadow(
                  color: Colors.grey.withOpacity(0.5),
                  spreadRadius: 2,
                  blurRadius: 10,
                  offset: Offset(0, 3), // changes position of shadow
                ),
              ],
            ),

      child: Row(

        crossAxisAlignment: CrossAxisAlignment.center,
              children: <Widget>[
                ClipRRect(
                  borderRadius: const BorderRadius.only(
                    topLeft: Radius.circular(8.0),
                    topRight: Radius.circular(8.0),
                  ),
                  child: IconButton(
                    icon: Image.asset(
                    'assets/icons/search.png',
                    width:MediaQuery.of(context).size.width*0.05,
            height:MediaQuery.of(context).size.height*0.05,
                    alignment: Alignment.centerLeft,
                  ),
                  onPressed: () {},
                  ),
                ),
              
              //text 
              SizedBox(
                        height: 36,
                        child:Text(
                        'Ask Us Anything',
                        style: TextStyle(
                          fontSize: 28,
                          color: HexColor('3F3F3F'),
                          fontWeight: FontWeight.bold,
                        ),
                        textAlign: TextAlign.center,
                      ),
                      ),

                    ],
                  ),
                ),

                Column(
  crossAxisAlignment: CrossAxisAlignment.start,
  children: [
    //add comment boxes
    Padding(
      padding: EdgeInsets.only(top: 30, bottom: 5), // Add padding to move text down
      //add name field
      child: Text(
        'Enter your name....',
        style: TextStyle(
          fontSize: 16,
          color: HexColor('00B251'),
        ),
        textAlign: TextAlign.left,
      ),
    ),
    SizedBox(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height * 0.10,
      child: TextField(
        maxLines: null,
        expands: true,
        keyboardType: TextInputType.multiline,
        decoration: InputDecoration(
          filled: true,
          fillColor: HexColor('FCFCFC'),
          hintText: 'Enter your name....',
          contentPadding: EdgeInsets.all(10.0),
          border: OutlineInputBorder(
            borderRadius: BorderRadius.circular(8.0),
            borderSide: BorderSide(
              color: HexColor("FFFFFF"),
            ),
          ),
        ),
      ),
    ),


    Padding(
      padding: EdgeInsets.only(top: 30 , bottom: 5), // Add padding to move text down
      child: Text(
        //add email field
        'Enter your email....',
        style: TextStyle(
          fontSize: 16,
          color: HexColor('00B251'),
        ),
        textAlign: TextAlign.left,
      ),
    ),
    SizedBox(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height * 0.10,
      child: TextField(
        maxLines: null,
        expands: true,
        keyboardType: TextInputType.multiline,
        decoration: InputDecoration(
          filled: true,
          fillColor: HexColor('FCFCFC'),
          hintText: 'Enter your email....',
          contentPadding: EdgeInsets.all(10.0),
          border: OutlineInputBorder(
            borderRadius: BorderRadius.circular(8.0),
            borderSide: BorderSide(
              color: HexColor("FFFFFF"),
            ),
          ),
        ),
      ),
    ),

    Padding(
      padding: EdgeInsets.only(top: 30, bottom: 5), // Add padding to move text down
      child: Text(
        //add question field
        'Ask your question....',
        style: TextStyle(
          fontSize: 16,
          color: HexColor('00B251'),
        ),
        textAlign: TextAlign.left,
      ),
    ),
    SizedBox(
      width: MediaQuery.of(context).size.width,
      height: MediaQuery.of(context).size.height * 0.20,
      child: TextField(
        maxLines: null,
        expands: true,
        keyboardType: TextInputType.multiline,
        decoration: InputDecoration(
          filled: true,
          fillColor: HexColor('FCFCFC'),
          hintText:'Ask your question....',
          contentPadding: EdgeInsets.all(10.0),
          border: OutlineInputBorder(
            borderRadius: BorderRadius.circular(8.0),
            borderSide: BorderSide(
              color: HexColor("FFFFFF"),
            ),
          ),
        ),
      ),
    ),
  ],
),

//add submit button
SizedBox(height: 30), 
ElevatedButton(
                onPressed: () {},
                child: Text(
                  'Submit',
                  style: TextStyle(color: HexColor('FFFFFF'), fontSize: 16),
                ),
                style: ElevatedButton.styleFrom(backgroundColor: HexColor('00B251'),elevation: 3,
              shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(32.0)),
              fixedSize: Size(100, 40)),
              ),
            ],
        ),
        ),
  ],
    ),
  ],
      ),
    );
  }
}