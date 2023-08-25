import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/pages/about_page.dart';
import 'package:mad_project/pages/privacy_policy.dart';
import 'package:mad_project/pages/support_page.dart';

import '../main.dart';
import 'auth_pade.dart';

class DrawerScreen extends StatefulWidget {
  const DrawerScreen({super.key});

  @override
  State<DrawerScreen> createState() => _DrawerScreenState();
}

class _DrawerScreenState extends State<DrawerScreen> {
  //fireStore fetching data
  UserData? userData;

  @override
  void initState() {
    super.initState();
    getUserData();
  }

  Future<void> getUserData() async {
    UserData? userDetails = await getUserDetails();
    setState(() {
      userData = userDetails;
    });
  }

  //sign out method
  void signUserOut(BuildContext context) async {
    await FirebaseAuth.instance.signOut();
    Navigator.pushReplacement(
      context,
      MaterialPageRoute(
          builder: (context) =>
              AuthPage()), // Replace AuthPage with your authentication page widget
    );
  }

  //Alert box
  void showAlert(BuildContext context) {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text('Confirmation'),
          content: Text('Do you want to logout?'),
          actions: <Widget>[
            TextButton(
              onPressed: () {
                Navigator.of(context)
                    .pop(false); // Dismiss the dialog and return false
              },
              child: Text(
                'No',
                style: TextStyle(
                  color: HexColor("#00B251"),
                ),
              ),
            ),
            TextButton(
              onPressed: () {
                signUserOut(context);
              },
              child: Text(
                'Yes',
                style: TextStyle(
                  color: HexColor("#00B251"),
                ),
              ),
            ),
          ],
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return Drawer(
      child: ListView(
        padding: EdgeInsets.zero,
        children: [
          DrawerHeader(
            // decoration: BoxDecoration(
            //   color: HexColor("#"),
            // ),
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Padding(
                  padding: const EdgeInsets.only(left: 16),
                  child: CircleAvatar(
                    radius: 45,
                    backgroundImage: AssetImage('assets/images/profile.jpg'),
                  ),
                ),
                SizedBox(height: 13),
                Padding(
                  padding: const EdgeInsets.only(left: 15),
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.start,
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        userData != null ? userData!.name : "User Name",
                        style: TextStyle(
                          fontSize: 24,
                          color: Colors.black,
                        ),
                      ),
                      SizedBox(height: 0),
                    ],
                  ),
                ),
              ],
            ),
          ),
          SizedBox(
            height: 20,
          ),
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
                  ),
                  onPressed: () {},
                ),
                title: Text(
                  'About',
                  style: TextStyle(fontSize: 16),
                ),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  Navigator.push(
                    context,
                    MaterialPageRoute(builder: (context) => AboutPage()),
                  ); // Close the drawer
                },
              ),
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/check.png',
                    color: Colors.black,
                    width: 24,
                    height: 24,
                  ),
                  onPressed: () {},
                ),
                title: Text('Privacy Policy', style: TextStyle(fontSize: 16)),
                onTap: () {
                  Navigator.push(
                    context,
                    MaterialPageRoute(builder: (context) => PrivacyPolicy()),
                  );
                },
              ),
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/setting.png',
                    color: Colors.black,
                    width: 22,
                    height: 22,
                  ),
                  onPressed: () {},
                ),
                title: Text('Settings', style: TextStyle(fontSize: 16)),
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
                  ),
                  onPressed: () {},
                ),
                title: Text('Support', style: TextStyle(fontSize: 16)),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  Navigator.push(
                    context,
                    MaterialPageRoute(builder: (context) => SupportPage()),
                  ); // Close the drawer
                },
              ),
              SizedBox(
                height: 290,
              ),
              ListTile(
                leading: IconButton(
                  icon: Image.asset(
                    'assets/icons/logout.png',
                    color: Colors.black,
                    width: 22,
                    height: 22,
                  ),
                  onPressed: () {
                    showAlert(context);
                  },
                ),
                title: Text('Log Out', style: TextStyle(fontSize: 16)),
                onTap: () {
                  // Replace this with the action you want to perform when the user taps on this item
                  showAlert(context); // Close the drawer
                },
              ),
            ],
          ),
        ],
      ),
    );
  }
}
