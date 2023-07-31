import 'package:flutter/material.dart';

class BackDots extends StatelessWidget implements PreferredSizeWidget {
  late final Function() onMenuPressed;

  BackDots({required this.onMenuPressed});

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
                  'assets/icons/back.png',
                  color: Colors.black,
                  width: 24,
                  height: 24,
                ),
                onPressed: () {
                },
              ),
    
              //Centered text
              Column(
                children: [
                  SizedBox(
                    height: 14,
                  ),
                  Text(
                    'Hi GNYS Silva',
                    style: TextStyle(color: Colors.black, fontSize: 17),
                  ),
                ],
              ),
    
              //Notification icon
              IconButton(
                icon: Image.asset(
                  'assets/icons/dots.png',
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
