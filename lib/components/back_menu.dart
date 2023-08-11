import 'package:flutter/material.dart';

class BackMenu extends StatelessWidget implements PreferredSizeWidget {
  final Function() onMenuPressed;

  const BackMenu({super.key, required this.onMenuPressed, required String title});

  @override
  Size get preferredSize =>
      const Size.fromHeight(60); // Specify the preferred height of your app bar

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
              //Back Icon
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
                'Privacy Policy',
                style: TextStyle(color: Colors.black, fontSize: 17),
              ),
    
              //Menu Icon
              IconButton(
                icon: Image.asset(
                  'assets/icons/menu.png',
                  color: Colors.black,
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