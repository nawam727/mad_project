import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_setting.dart';

import 'drawer_screen.dart';

class ProfilePage extends StatefulWidget {
  @override
  State<ProfilePage> createState() => _ProfilePageState();
}

class _ProfilePageState extends State<ProfilePage> {
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
              'Denawakage N S M',
              style: TextStyle(
                fontSize: 22,
                fontWeight: FontWeight.bold,
              ),
            ),
            SizedBox(height: 6),
            Text(
              'nsmdenawage@students.nsbm.ac.lk',
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
            ProfileInfoItem(title: 'Index No', value: '22972'),
            ProfileInfoItem(title: 'Faculty', value: 'Faculty of Computing'),
            ProfileInfoItem(
                title: 'Degree', value: 'BSc (Hons.) in Software Engineering'),
            ProfileInfoItem(title: 'Intake', value: '2021.1'),
            ProfileInfoItem(title: 'NIC/Passport', value: '200005802480'),
            ProfileInfoItem(title: 'EMail', value: 'nawamdenawakage@gmail.com'),
            ProfileInfoItem(title: 'Mobile Phone', value: '076 7312274'),
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
