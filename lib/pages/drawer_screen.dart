import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';

class DrawerScreen extends StatelessWidget {
  const DrawerScreen({super.key});

  @override
  Widget build(BuildContext context) {
    return Drawer(
      child: ListView(
        padding: EdgeInsets.zero,
        children: [
          DrawerHeader(
            decoration: BoxDecoration(
              color: HexColor("#C8F6CD"),
            ),
            child: Text(
              'GNYS Silva',
              style: TextStyle(
                fontSize: 24,
              ),
            ),
          ),
          // SizedBox(
          //   height: 150,
          // ),
          Column(
            mainAxisAlignment: MainAxisAlignment.start,
            children: [
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/information.png',
                    color: Colors.black,
                    width: 22,
                    height: 22,
                  ), onPressed: () {  },
                ),
                title: Text('About',style: TextStyle(fontSize: 16),),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  Navigator.pop(context); // Close the drawer
                },
              ),
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/check.png',
                    color: Colors.black,
                    width: 24,
                    height: 24,
                  ), onPressed: () {  },
                ),
                title: Text('Privacy Policy',style: TextStyle(fontSize: 16)),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  Navigator.pop(context); // Close the drawer
                },
              ),
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/setting.png',
                    color: Colors.black,
                    width: 22,
                    height: 22,
                  ), onPressed: () {  },
                ),
                title: Text('Settings',style: TextStyle(fontSize: 16)),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  Navigator.pop(context); // Close the drawer
                },
              ),
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/support.png',
                    color: Colors.black,
                    width: 22,
                    height: 22,
                  ), onPressed: () {  },
                ),
                title: Text('Support',style: TextStyle(fontSize: 16)),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  Navigator.pop(context); // Close the drawer
                },
              ),
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/logout.png',
                    color: Colors.black,
                    width: 22,
                    height: 22,
                  ), onPressed: () {  },
                ),
                title: Text('Log Out',style: TextStyle(fontSize: 16)),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  Navigator.pop(context); // Close the drawer
                },
              ),
            ],
          ),
        ],
      ),
    );
  }
}
