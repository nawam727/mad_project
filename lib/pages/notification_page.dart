import 'package:flutter/material.dart';
import 'package:mad_project/components/back_notify.dart';

class NotificationPgae extends StatelessWidget {
  const NotificationPgae({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: BackNotify(
        title: 'Notification',
      ),
      body: ListView(

      ),
    );
  }
}
