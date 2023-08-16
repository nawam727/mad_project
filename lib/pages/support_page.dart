import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';
import 'package:mad_project/pages/drawer_screen.dart';


class SupportPage extends StatelessWidget {
  const SupportPage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: BackDots(
        title: "Support",
      ),
      body: ListView(
  children: <Widget>[
    //how can help?
    Container(
      width: 500,
      height: 190,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 15, left: 15, top: 20),
      decoration: BoxDecoration(
        color: const Color.fromARGB(255, 214, 247, 221),
        borderRadius: BorderRadius.circular(24),
        border: Border.all(
          color: HexColor("#00B251"),
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
      child: Row(  //text and image
        crossAxisAlignment: CrossAxisAlignment.stretch,
        children: <Widget>[
          Expanded(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                Text(
                  'How can we help you?',
                  style: TextStyle(
                    fontSize: 30,
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
              'assets/images/support.png',
              width: 110,
              height: 100,
              alignment: Alignment.bottomRight,
              fit: BoxFit.fill,
            ),
          ),
        ],
      ),
    ),
    //search bar
    Padding(
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 20),
      child: TextField(
        decoration: InputDecoration(
          prefixIcon: Icon( Icons.search, ),
           // Text to be displayed before the input field
          hintText: 'Start typing your search......',
          border: OutlineInputBorder(
            borderRadius: BorderRadius.circular(8.0),
            borderSide: BorderSide(
              color:HexColor("#00B251") //border color
            ),  
          ),
        ),
      ),
    ), 
    //get started and chat with us row
    Row(
      children:<Widget>[
        Container(
            width: 150,
            height: 150,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
            margin: const EdgeInsets.only(left:30, right:20, top: 10),
            decoration: BoxDecoration(
              color: Color.fromARGB(255, 214, 247, 221),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color:
                    HexColor("#00B251"), // Set your desired border color here
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
                      child:Padding(
                      padding: const EdgeInsets.only(top: 10), // Add padding to move the text down
                    child:Image.asset(
                        'assets/images/information.png',
                        width: 100,
                        height: 50,
                        alignment: Alignment.center,
                        //fit:BoxFit.fill
                      ),
                    ),
                    ),
                    const SizedBox(width: 50),
                    Padding(
                      padding: const EdgeInsets.only(top:5),
                      child: TextButton(
            onPressed: () {},
                    child: Text(
                      'Get Started',
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
            width: 150,
            height: 150,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 5),
            margin: const EdgeInsets.only(right: 10, left: 10, top: 10),
            decoration: BoxDecoration(
              color: Color.fromARGB(255, 214, 247, 221),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color:
                    HexColor("#00B251"), // Set your desired border color here
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
                      child:Padding(
                      padding: const EdgeInsets.only(top: 10),
                      child: Image.asset(
                        'assets/images/call.png',
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
                    child:Text(
                      'Chat with Us',
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
    //help center and feedback row
    Row(
      children:<Widget>[
      Container(
            width: 150,
            height: 150,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 5),
            margin: const EdgeInsets.only(left:30, right:20, top: 30),
            decoration: BoxDecoration(
              color: Color.fromARGB(255, 214, 247, 221),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color:
                    HexColor("#00B251"), // Set your desired border color here
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
                      child:Padding(
                      padding: const EdgeInsets.only(top: 10),
                      child: Image.asset(
                        'assets/images/conversation.png',
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
                    child:Text(
                      'Help Center',
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
            width: 150,
            height: 150,
            padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 5),
            margin: const EdgeInsets.only(right: 10, left: 10, top: 30),
            decoration: BoxDecoration(
              color: Color.fromARGB(255, 214, 247, 221),
              borderRadius: BorderRadius.circular(24),
              border: Border.all(
                color:
                    HexColor("#00B251"), // Set your desired border color here
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
                      child:Padding(
                      padding: const EdgeInsets.only(top: 10),
                      child: Image.asset(
                        'assets/images/chat.png',
                        width: 100,
                        height: 50,
                        alignment: Alignment.center,
                        //fit:BoxFit.fill
                      ),
                    ),
                    ),
                    const SizedBox(width: 100),
                    Padding(
                      padding: const EdgeInsets.only(top: 2),
                      child: TextButton(
                      onPressed: () {}, // Add padding to move the text down
                    child:Text(
                      'Feedback and Suggestions',
                      style: TextStyle(
                          fontSize: 13,
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
);
}
}