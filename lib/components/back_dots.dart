import 'package:flutter/material.dart';

class BackDots extends StatefulWidget {
  const BackDots({super.key});

  @override
  State<BackDots> createState() => _BackDotsState();
}

class _BackDotsState extends State<BackDots> {
  @override
  Widget build(BuildContext context) {
    return Container(
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
              'assets/icons/dots.png',
              width: 24,
              height: 24,
            ),
            onPressed: () {},
          ),
        ],
      ),
    );
  }
}
