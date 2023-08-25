import 'package:flutter/material.dart';

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
                  Text(
                    'Hi, ' + (userData != null ? userData!.name : "User Name"),
                    style: TextStyle(color: Colors.black, fontSize: 17),
                  ),
                  Text(
                    'Have a nice day',
                    style: TextStyle(color: Colors.grey, fontSize: 12),
                  ),
                ],
              ),
              Padding(
                padding: const EdgeInsets.only(right: 4.0),
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
