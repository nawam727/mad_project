import 'package:flutter/material.dart';

class MenuNotify extends StatefulWidget {
  const MenuNotify({super.key});

  @override
  State<MenuNotify> createState() => _MenuNotifyState();
}

class _MenuNotifyState extends State<MenuNotify> {
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
              'assets/icons/menu.png',
              color: Colors.black,
              width: 24,
              height: 24,
            ),
            onPressed: () {},
          ),
          //Centered text
          Text(
            'Service',
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