import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_notify.dart';


class ServicePage extends StatelessWidget {
  const ServicePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Column(
          children: [
            Flexible(
              child: MenuNotify(), // MenuNotify takes only the space it needs
            ),
          ],
        ),
      ),
    );
  }
}
