import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_setting.dart';

class ProfilePage extends StatelessWidget {
  const ProfilePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: Drawer(),
      appBar: MenuSetting(
        title: "My Profile",
        onMenuPressed: () {},
      ),
      body: SafeArea(
        child: Column(
          children: [
            // Flexible(
            //   child: BackSetting(), // MenuNotify takes only the space it needs
            // ),
          ],
        ),
      ),
    );
  }
}
