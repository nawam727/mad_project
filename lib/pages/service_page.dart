import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_notify.dart';
import 'package:mad_project/pages/drawer_screen.dart';

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
        Container(
      width: 500,
      height: 220,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 30),
      decoration: BoxDecoration(color: const Color.fromARGB(255, 214, 247, 221),
      borderRadius: BorderRadius.circular(24),
      boxShadow: const[
        BoxShadow(color: Color.fromARGB(255, 214, 247, 221),
        blurRadius: 10,
        spreadRadius: 5,
        ),
      ],
     ),
     child:
        Container(
          margin:const EdgeInsets.all(8.0),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.stretch,  // add this
                children: <Widget>[
                  ClipRRect(
                    borderRadius: const BorderRadius.only(
                      topLeft: Radius.circular(8.0),
                      topRight: Radius.circular(8.0),
                    ),
                    child: Image.asset('assets/Frame.png',
                        width: 150,
                        height: 100,
                        alignment: Alignment.center,
                        //fit:BoxFit.fill

                    ),
                  ),
                  const SizedBox(height: 30),
                  OutlinedButton(
                  onPressed: () {
                 Navigator.pop(context);
                 },
                 style: OutlinedButton.styleFrom(side: const BorderSide(
                  color: Colors.transparent
                 ),
                 ),
                 child: const Text('Navigation',
                 style: TextStyle(fontSize: 16 ,color: Colors.black ,fontWeight: FontWeight.bold),
                   textAlign: TextAlign.center,
                 ),
                ),
                 const Text('Find your way around NSBM with ease',textAlign: TextAlign.center,)
                ],
              ),
            // child: Center(
            //   child: Container(
            //   height: 10,
            //   width: 20,
            //   color: Colors.grey,
            //   ),
            // ),
          )
        ),
      
      Container(
      width: 500,
      height: 220,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 30),
      decoration: BoxDecoration(color: const Color.fromARGB(255, 214, 247, 221),
      borderRadius: BorderRadius.circular(24),
      boxShadow: const[
        BoxShadow(color: Color.fromARGB(255, 214, 247, 221),
        blurRadius: 10,
        spreadRadius: 5,
        ),
      ],
     ),
    child:
    Container(
      margin:const EdgeInsets.all(8.0),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.stretch,  // add this
        children: <Widget>[
          ClipRRect(
            borderRadius: const BorderRadius.only(
              topLeft: Radius.circular(8.0),
              topRight: Radius.circular(8.0),
            ),
            child: Image.asset('assets/Frame (1).png',
              width: 150,
              height: 100,
              alignment: Alignment.center,
              //fit:BoxFit.fill

            ),
          ),
          const SizedBox(height: 30),
                  OutlinedButton(
                  onPressed: () {
                 Navigator.pop(context);
                 },
                 style: OutlinedButton.styleFrom(side: const BorderSide(
                  color: Colors.transparent
                 ),
                 ),
                 child: const Text('Lecturer Availability',
                 style: TextStyle(fontSize: 16 ,color: Colors.black ,fontWeight: FontWeight.bold),
                   textAlign: TextAlign.center,
                 ),
                ),
                 const Text('Easily view the time slots when lecturers are available',textAlign: TextAlign.center,)
        ],
      ),
    ),
  ),

  Container(
      width: 500,
      height: 220,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 30),
      decoration: BoxDecoration(color: Color.fromARGB(255, 214, 247, 221),
      borderRadius: BorderRadius.circular(24),
      boxShadow: const[
        BoxShadow(color: Color.fromARGB(255, 214, 247, 221),
        blurRadius: 10,
        spreadRadius: 5,
        ),
      ],
     ),
    child:
    Container(
      margin:const EdgeInsets.all(8.0),
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.stretch,  // add this
        children: <Widget>[
          ClipRRect(
            borderRadius: const BorderRadius.only(
              topLeft: Radius.circular(8.0),
              topRight: Radius.circular(8.0),
            ),
            child: Image.asset('assets/Frame (2).png',
              width: 150,
              height: 100,
              alignment: Alignment.center,
              //fit:BoxFit.fill

            ),
          ),
          const SizedBox(height: 30),
                  OutlinedButton(
                  onPressed: () {
                 Navigator.pop(context);
                 },
                 style: OutlinedButton.styleFrom(side: const BorderSide(
                  color: Colors.transparent
                 ),
                 ),
                 child: const Text('Hall Availability',
                 style: TextStyle(fontSize: 16 ,color: Colors.black ,fontWeight: FontWeight.bold),
                   textAlign: TextAlign.center,
                 ),
                ),
                 const Text('Real-time updates on lecture hall availability',textAlign: TextAlign.center,)
           ],
         ),
       ),
      ),
      ],
      ),
    );
  }
}
