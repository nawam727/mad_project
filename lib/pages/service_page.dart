import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_notify.dart';

class ServicePage extends StatelessWidget {
  const ServicePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: Drawer(),
      appBar: MenuNotify(
        title: "Services",
        onMenuPressed: () {},
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
