import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';

import '../main.dart';
import '../pages/notification_page.dart';

class MenuHome extends StatefulWidget implements PreferredSizeWidget {
  @override
  _MenuHomeState createState() => _MenuHomeState();

  @override
  Size get preferredSize => Size.fromHeight(55);
}

class _MenuHomeState extends State<MenuHome> {
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

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Container(
          height: widget.preferredSize.height,
          color: Colors.white,
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Padding(
                padding: const EdgeInsets.only(left: 4.0),
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
              Column(
                crossAxisAlignment: CrossAxisAlignment.center,
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Row(
                    children: [
                      Text(
                        'Hi, ' +
                            (userData != null ? userData!.name : "User Name"),
                        style: TextStyle(color: Colors.black, fontSize: 17),
                      ),
                      SizedBox(
                          width:
                              3), // Adjust the spacing between the text and image
                      // Add your image here, for example:
                      Image.asset(
                        'assets/icons/wave.png', // Replace with your image path
                        width: 20,
                        height: 20,
                        // You can customize the width, height, and other properties of the image
                      ),
                    ],
                  ),
                  Text(
                    'Have a nice day',
                    style: TextStyle(color: Colors.grey, fontSize: 12),
                  ),
                ],
              ),
              // Notification icon with red indicator
              Padding(
                padding: const EdgeInsets.only(right: 4.0),
                child: Stack(
                  children: [
                    IconButton(
                      icon: Image.asset(
                        'assets/icons/notification.png',
                        width: 24,
                        height: 24,
                      ),
                      onPressed: () {
                        // Your notification icon onPressed logic here
                        Navigator.of(context).push(_createRoute());
                      },
                    ),
                    Positioned(
                      right: 0,
                      top: 0,
                      child: Container(
                        padding: EdgeInsets.all(5),
                        decoration: BoxDecoration(
                          color: HexColor("00B251"), // green indicator color
                          shape: BoxShape.circle,
                        ),
                        child: Text(
                          '1', // You can replace this with the actual notification count
                          style: TextStyle(
                            color: Colors.white,
                            fontSize: 11,
                            fontWeight: FontWeight.bold,
                          ),
                        ),
                      ),
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

// Create a Route for the slide transition
  Route _createRoute() {
    return PageRouteBuilder(
      pageBuilder: (context, animation, secondaryAnimation) =>
          NotificationPgae(),
      transitionsBuilder: (context, animation, secondaryAnimation, child) {
        const begin = Offset(1.0, 0.0);
        const end = Offset.zero;
        const curve = Curves.easeInOut;

        var tween =
            Tween(begin: begin, end: end).chain(CurveTween(curve: curve));

        var offsetAnimation = animation.drive(tween);

        return SlideTransition(
          position: offsetAnimation,
          child: child,
        );
      },
    );
  }
}
