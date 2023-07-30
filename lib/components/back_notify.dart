import 'package:flutter/material.dart';

class BackNotify extends StatefulWidget {
  const BackNotify({super.key});

  @override
  State<BackNotify> createState() => _BackNotifyState();
}

class _BackNotifyState extends State<BackNotify> {
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
            'Services',
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
    );
  }
}