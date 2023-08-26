import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';

class NotificationSettings extends StatefulWidget {
  const NotificationSettings({super.key});

  @override
  State<NotificationSettings> createState() => _NotificationSettingsState();
}

class _NotificationSettingsState extends State<NotificationSettings> {
  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: BackDots(
        title: "Notification",
      ),
      body:  SafeArea(
        child: ListView(
           children: [
            Padding(      
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
                ),
                child: Container(
                  height: size.height * 0.10,
                  decoration: BoxDecoration(
                  borderRadius: BorderRadius.circular(15),
                  color: HexColor("#EAFEED"),
                  ),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      notification(size, "Allow Notification", true),
                      const Padding(
                        padding: EdgeInsets.only(left: 11),
                        child:Text(
                          "Turn on notifications for updates and timely information",
                          style: TextStyle(fontSize: 12),
                          ),
                        ),   
                    ]
                  ),
                ),
              ),
           ],
      ),
      ),
    );
  }
}

Row notification(Size size, String name, bool available) {
    return Row(
      children: [
        Expanded(
          flex: 8,
          child: Padding(
            padding: EdgeInsets.only(left: size.width * 0.03),
            child: Text(
              name,
              style: const TextStyle(
                fontWeight: FontWeight.w500,
                fontSize: 16,
              ),
            ),
          ),
        ),
        Expanded(
          flex: 2,
          child: Padding(
              padding: EdgeInsets.only(right: size.width * 0.03),
              child: Switch(
                activeColor: HexColor("#2A9A5C"),
                activeTrackColor: HexColor("#ABDEBE"),
                inactiveThumbColor: HexColor("#848884"),
                inactiveTrackColor: HexColor("#D3D3D3"),
                value: available,
                splashRadius: 18,
                onChanged: (value) {
                  available = value;
                },
              )),
        ),
      ],
    );
  }

