import 'package:flutter/material.dart';
import 'package:mad_project/components/nav_bar.dart';
import 'package:mad_project/pages/home_page.dart';

class BackNotify extends StatelessWidget implements PreferredSizeWidget {
  //late final Function() onMenuPressed;
  final String title;

  BackNotify({
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
              //Menu Icon
              IconButton(
                  icon: Image.asset(
                    'assets/icons/back.png',
                    color: Colors.black,
                    width: 32,
                    height: 32,
                  ),
                  onPressed: () {
                    Navigator.pop(context);
                  } //onMenuPressed,
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
