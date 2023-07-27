import 'package:flutter/material.dart';

class BackNotify extends StatefulWidget {
  const BackNotify({super.key});

  @override
  State<BackNotify> createState() => _BackNotifyState();
}

class _BackNotifyState extends State<BackNotify> {
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
                      'assets/icons/back.png',
                      color: Colors.black,
                      width: 32,
                      height: 32,
                    ),
                    onPressed: () {},
                  ),
                  //Centered text
                      Text(
                        'My Profile',
                        style: TextStyle(color: Colors.black, fontSize: 17),
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