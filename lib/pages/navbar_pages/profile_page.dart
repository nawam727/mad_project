import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/menu_setting.dart';

import '../../main.dart';
import '../drawer_screen.dart';

class ProfilePage extends StatefulWidget {
  @override
  State<ProfilePage> createState() => _ProfilePageState();
}

class _ProfilePageState extends State<ProfilePage> {
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

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuSetting(
        title: "Profile",
      ),
      body: Container(
        padding: EdgeInsets.all(16.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            SizedBox(height: 20),
            CircleAvatar(
              radius: 60,
              backgroundImage: AssetImage('assets/images/profile.jpg'),
            ),
            SizedBox(height: 20),
            Text(
              userData != null ? userData!.name : "User Name",
              style: TextStyle(
                fontSize: 22,
                fontWeight: FontWeight.bold,
              ),
            ),
            SizedBox(height: 6),
            Text(
              userData != null ? userData!.sEmail : 'user@example.com',
              style: TextStyle(
                fontSize: 15,
                color: Colors.grey[600],
              ),
            ),
            Divider(
              color: Color.fromRGBO(0, 178, 86, 1),
              height: 30,
              thickness: 2,
            ),
            userData != null
                ? Column(
                    children: [
                      if (userData!.index != null)
                        ProfileInfoItem(title: 'Index', value: userData!.index),
                      if (userData!.faculty != null)
                        ProfileInfoItem(
                            title: 'Faculty', value: userData!.faculty),
                      if (userData!.degree != null)
                        ProfileInfoItem(
                            title: 'Degree', value: userData!.degree),
                      if (userData!.batch != null)
                        ProfileInfoItem(
                            title: 'Intake', value: userData!.batch),
                      if (userData!.nic != null)
                        ProfileInfoItem(
                            title: 'NIC/Passport', value: userData!.nic),
                      if (userData!.email != null)
                        ProfileInfoItem(title: 'Email', value: userData!.email),
                      if (userData!.mobile != null)
                        ProfileInfoItem(
                            title: 'Mobile Phone', value: userData!.mobile),
                    ],
                  )
                : CircularProgressIndicator(
                  color: HexColor("00B251"),
                ),
          ],
        ),
      ),
    );
  }
}

class ProfileInfoItem extends StatelessWidget {
  final String title;
  final String value;

  ProfileInfoItem({required this.title, required this.value});

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: EdgeInsets.symmetric(vertical: 8.0),
      child: Padding(
        padding: EdgeInsets.symmetric(horizontal: 16.0),
        child: Align(
          alignment: Alignment.centerLeft,
          child: Row(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              SizedBox(
                width: 150, // Adjust the width as needed
                child: Text(
                  '$title',
                  style: TextStyle(
                    fontSize: 16,
                    color: Colors.black,
                    fontWeight: FontWeight.bold,
                  ),
                ),
              ),
              SizedBox(width: 16), // Adjust the spacing as needed
              Flexible(
                child: Text(
                  value,
                  style: TextStyle(
                    color: Colors.grey[600],
                    fontSize: 16,
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
