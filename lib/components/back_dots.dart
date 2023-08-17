import 'package:flutter/material.dart';

// ignore: must_be_immutable
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
