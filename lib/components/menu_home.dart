import 'package:flutter/material.dart';
import 'package:mad_project/pages/drawer_screen.dart';
import 'package:mad_project/pages/home_page.dart';

class MenuHome extends StatelessWidget implements PreferredSizeWidget {
  //late final Function() onMenuPressed;
  final String username;

  MenuHome({required this.username});

  @override
  Size get preferredSize =>
      Size.fromHeight(60); // Specify the preferred height of your app bar

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      body: SafeArea(
        child: Container(
          height: preferredSize.height,
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
                onPressed: () {
                  Scaffold.of(context).openDrawer();
                },
              ),

              //Centered text
              Column(
                children: [
                  SizedBox(
                    height: 14,
                  ),
                  Text(
                    username,
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
                onPressed: () {
                  // Your notification icon onPressed logic here
                },
              ),
            ],
          ),
        ),
      ),
    );
  }
}
