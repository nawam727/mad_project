import 'package:flutter/material.dart';

class MenuCalendar extends StatelessWidget implements PreferredSizeWidget {
  //late final Function() onMenuPressed;
  final String title;

  MenuCalendar({required this.title,});

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
              Padding(
                padding: const EdgeInsets.only(left:4.0),
                child: IconButton(
                    icon: Image.asset(
                      'assets/icons/menu.png',
                      color: Colors.black,
                      width: 24,
                      height: 24,
                    ),
                    onPressed: () {
                      Scaffold.of(context).openDrawer();
                    } //onMenuPressed,
                    ),
              ),

              //Centered text
              Text(
                title,
                style: TextStyle(color: Colors.black, fontSize: 17),
              ),

              //Notification icon
              Padding(
                padding: const EdgeInsets.only(right:4.0),
                child: IconButton(
                  icon: Image.asset(
                    'assets/icons/calendar.png',
                    width: 24,
                    height: 24,
                  ),
                  onPressed: () {
                    // Your notification icon onPressed logic here
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
