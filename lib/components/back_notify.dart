import 'package:flutter/material.dart';

class BackNotify extends StatelessWidget implements PreferredSizeWidget {
  //late final Function() onMenuPressed;
  final String title;

  BackNotify({
    required this.title,
  });

  @override
  Size get preferredSize =>
      Size.fromHeight(55);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Material(
          elevation: 2.0,
          child: Container(
            height: preferredSize.height,
            color: Colors.white,
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
                    
                  },
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
