import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';

import '../pages/notification_page.dart';

class MenuNotify extends StatelessWidget implements PreferredSizeWidget {
  late final Function() onMenuPressed;
  final String title;

  MenuNotify({required this.title});

  @override
  Size get preferredSize => Size.fromHeight(55);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Material(
          elevation: 2.0,
          child: Container(
            height: preferredSize.height,
            color: Colors.white,
            child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                //Menu Icon
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

                //Centered text
                Text(
                  title,
                  style: TextStyle(color: Colors.black, fontSize: 17),
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
                          Navigator.of(context).push(_createRoute());
                        },
                      ),
                      Positioned(
                        right: 0,
                        top: 0,
                        child: Container(
                          padding: EdgeInsets.all(5),
                          decoration: BoxDecoration(
                            color: HexColor("00B251"),
                            shape: BoxShape.circle,
                          ),
                          child: Text(
                            '0',
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
      ),
    );
  }
}

Route _createRoute() {
  return PageRouteBuilder(
    pageBuilder: (context, animation, secondaryAnimation) => NotificationPage(),
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
