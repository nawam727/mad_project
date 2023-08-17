import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:mad_project/pages/drawer_screen.dart';

import '../pages/notification_page.dart';



class MenuHome extends StatelessWidget implements PreferredSizeWidget {
  //late final Function() onMenuPressed;
  final String username;

  MenuHome({required this.username});

  @override
  Size get preferredSize =>
      Size.fromHeight(55); // Specify the preferred height of your app bar

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      //drawer: DrawerScreen(),
      body: SafeArea(
        child: Container(
          height: preferredSize.height,
          color: Colors.white, // Customize your background color here
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              //Menu Icon
              Padding(
                padding: const EdgeInsets.only(left:4.0),
                child: IconButton(
                  icon: Image.asset(
                    'assets/icons/menu.png',
                    color: Colors.black,
                    width: 24,
                    height: 24,
                  ),
                  onPressed: () {
                    Scaffold.of(context).openDrawer();
                  },
                ),
              ),

              //Centered text
              Column(
                children: [
                  SizedBox(
                    height: 14,
                  ),
                  Text(
                    username,
                    style: TextStyle(color: Colors.black, fontSize: 17),
                  ),
                  Text(
                    'Have a nice day',
                    style: TextStyle(color: Colors.grey, fontSize: 12),
                  ),
                ],
              ),

              //Notification icon
              Padding(
                padding: const EdgeInsets.only(right:4.0),
                child: IconButton(
                  icon: Image.asset(
                    'assets/icons/notification.png',
                    width: 24,
                    height: 24,
                  ),
                  onPressed: () {
                    Navigator.of(context).push(_createRoute());
                    // Your notification icon onPressed logic here
                  },
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}

// Create a Route for the slide transition
Route _createRoute() {
  return PageRouteBuilder(
    pageBuilder: (context, animation, secondaryAnimation) => NotificationPgae(),
    transitionsBuilder: (context, animation, secondaryAnimation, child) {
      const begin = Offset(1.0, 0.0);
      const end = Offset.zero;
      const curve = Curves.easeInOut;

      var tween = Tween(begin: begin, end: end).chain(CurveTween(curve: curve));

      var offsetAnimation = animation.drive(tween);

      return SlideTransition(
        position: offsetAnimation,
        child: child,
      );
    },
  );
}
