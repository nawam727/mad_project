import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_notify.dart';
import 'package:mad_project/pages/drawer_screen.dart';

class ServicePage extends StatelessWidget {
  const ServicePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuNotify(
        title: "Services",
      ),
      body: Column(
        children: [
          // Flexible(
          //   child: MenuNotify(), // MenuNotify takes only the space it needs
          // ),
        ],
      ),
    );
  }
}
