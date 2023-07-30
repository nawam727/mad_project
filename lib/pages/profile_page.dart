import 'package:flutter/material.dart';
import 'package:mad_project/components/back_setting.dart';

class ProfilePage extends StatelessWidget {
  const ProfilePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Column(
          children: [
            Flexible(
              child: BackSetting(), // MenuNotify takes only the space it needs
            ),
          ],
        ),
      ),
    );
  }
}
