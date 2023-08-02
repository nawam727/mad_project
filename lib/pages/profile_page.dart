import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_setting.dart';
import 'package:mad_project/pages/drawer_screen.dart';

class ProfilePage extends StatelessWidget {
  const ProfilePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuSetting(
        title: "My Profile",
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
