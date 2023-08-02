import 'package:flutter/material.dart';

class MenuNotify extends StatelessWidget implements PreferredSizeWidget {
  late final Function() onMenuPressed;
  final String title;

  MenuNotify({required this.title});

  @override
  Size get preferredSize =>
      Size.fromHeight(60); // Specify the preferred height of your app bar

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
              Text(
                title,
                style: TextStyle(color: Colors.black, fontSize: 17),
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