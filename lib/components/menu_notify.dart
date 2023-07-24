import 'package:flutter/material.dart';

class MenuNotify extends StatefulWidget {
  const MenuNotify({super.key});

  @override
  State<MenuNotify> createState() => _MenuNotifyState();
}

class _MenuNotifyState extends State<MenuNotify> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          Positioned(
            top: 39,
            left: 0,
            right: 0,
            child: Container(
              height: 60,
              color: Colors.white, // Customize your background color here
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: [
                  //Menu Icon
                  IconButton(
                    icon: Image.asset(
                      'assets/icons/menu.png',
                      color: Colors.black,
                      width: 24,
                      height: 24,
                    ),
                    onPressed: () {},
                  ),

                  //Centered text
                  Column(
                    children: [
                      SizedBox(
                        height: 14,
                      ),
                      Text(
                        'Hi GNYS Silva',
                        style: TextStyle(color: Colors.black, fontSize: 17),
                      ),
                      Text(
                        'Have a nice day',
                        style: TextStyle(color: Colors.grey, fontSize: 12),
                      ),
                    ],
                  ),

                  //Notification icon
                  IconButton(
                    icon: Image.asset(
                      'assets/icons/notification.png',
                      width: 24,
                      height: 24,
                    ),
                    onPressed: () {},
                  ),
                ],
              ),
            ),
          ),
          Positioned(
            top: 80,
            left: 0,
            right: 0,
            bottom: 0,
            child: Center(
              child: Text(
                'Your main content goes here',
                style: TextStyle(fontSize: 20),
              ),
            ),
          ),
        ],
      ),
    );
  }
}
