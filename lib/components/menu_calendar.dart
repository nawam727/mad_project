import 'package:flutter/material.dart';

class MenuCalendar extends StatefulWidget {
  const MenuCalendar({super.key});

  @override
  State<MenuCalendar> createState() => _MenuCalendarState();
}

class _MenuCalendarState extends State<MenuCalendar> {
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
            'Time Table',
            style: TextStyle(color: Colors.black, fontSize: 17),
          ),
          //Notification icon
          IconButton(
            icon: Image.asset(
              'assets/icons/calendar.png',
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
