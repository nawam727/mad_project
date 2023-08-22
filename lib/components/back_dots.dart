import 'package:flutter/material.dart';

// ignore: must_be_immutable
import '../pages/calendar_page.dart';
import '../pages/home_page.dart';
import '../pages/profile_page.dart';
import '../pages/service_page.dart';

enum _MenuValues {
  home,
  services,
  profile,
  timeTable,
}

class BackDots extends StatelessWidget implements PreferredSizeWidget {
  final String title;

  BackDots({
    required this.title,
  });

  @override
  Size get preferredSize =>
      Size.fromHeight(55); // Specify the preferred height of your app bar

  @override
  Widget build(BuildContext context) {
    return AppBar(
      backgroundColor: Colors.white,
      elevation: 0, // Remove the shadow
      leading: IconButton(
        icon: Image.asset(
          'assets/icons/back.png',
          color: Colors.black,
          width: 32,
          height: 32,
        ),
        onPressed: () {
          Navigator.pop(context);
        },
      ),
      title: Center(
        child: Text(
          title,
          style: TextStyle(color: Colors.black, fontSize: 17),
        ),
      ),
      actions: [
        PopupMenuButton<_MenuValues>(
          //color: Colors.black,
          icon: Icon(
            Icons.more_vert, // or your preferred icon
            color: Colors.black, // Set the color you want for the icon
          ),
          itemBuilder: (BuildContext context) => [
            const PopupMenuItem(
              value: _MenuValues.home,
              child: Text("Home"),
            ),
            const PopupMenuItem(
              value: _MenuValues.timeTable,
              child: Text("TimeTable"),
            ),
            const PopupMenuItem(
              value: _MenuValues.services,
              child: Text("Services"),
            ),
            const PopupMenuItem(
              value: _MenuValues.profile,
              child: Text("Profile"),
            ),
          ],
          onSelected: (value) {
            switch (value) {
              case _MenuValues.home:
                Navigator.of(context)
                    .push(MaterialPageRoute(builder: (c) => HomePage()));
                break;
              case _MenuValues.timeTable:
                Navigator.of(context)
                    .push(MaterialPageRoute(builder: (c) => CalendarPage()));
                break;
              case _MenuValues.services:
                Navigator.of(context).push(
                    MaterialPageRoute(builder: (c) => const ServicePage()));
                break;
              case _MenuValues.profile:
                Navigator.of(context)
                    .push(MaterialPageRoute(builder: (c) => ProfilePage()));
                break;
            }
          },
        ),
      ],
    );
  }
}
