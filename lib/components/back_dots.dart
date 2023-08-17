import 'package:flutter/material.dart';

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
  late String title;

  BackDots({
    required this.title,
  });

  @override
  Size get preferredSize =>
      Size.fromHeight(55); // Specify the preferred height of your app bar

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Container(
          height: preferredSize.height,
          color: Colors.white, // Customize your background color here
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              //back Icon
              IconButton(
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

              //Centered text
              Text(
                title,
                style: TextStyle(color: Colors.black, fontSize: 17),
              ),

              //dots icon
              Padding(
                padding: const EdgeInsets.only(right:4.0),
                child: PopupMenuButton<_MenuValues>(
                    itemBuilder: (BuildContext context) => [
                          const PopupMenuItem(
                              value: _MenuValues.home,
                              child: Text("Home")),
                              const PopupMenuItem(
                              value: _MenuValues.timeTable,
                              child: Text("TimeTable")),
                          const PopupMenuItem(
                              value: _MenuValues.services,
                              child: Text("Services")),
                          const PopupMenuItem(
                            value: _MenuValues.profile,
                            child: Text("Profile"),
                          ),
                        ],
                        onSelected: (value){
                          switch(value){
                            case _MenuValues.home:Navigator.of(context).push(MaterialPageRoute(builder: (c)=> HomePage()));
                            break;
                            case _MenuValues.timeTable:Navigator.of(context).push(MaterialPageRoute(builder: (c)=> CalendarPage()));
                            break;
                            case _MenuValues.services:Navigator.of(context).push(MaterialPageRoute(builder: (c)=>const ServicePage()));
                            break;
                            case _MenuValues.profile:Navigator.of(context).push(MaterialPageRoute(builder: (c)=>ProfilePage()));
                            break;
                          }
                        },
                        ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
