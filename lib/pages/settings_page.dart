import 'package:flutter/material.dart';
import 'package:mad_project/components/back_dots.dart';
import 'package:ionicons/ionicons.dart';
import 'package:mad_project/pages/terms_conditions.dart';
import 'package:mad_project/widgets/settings_tile.dart';


class SettingsScreen extends StatefulWidget {
  const SettingsScreen({Key? key}) : super(key: key);

  @override
  State<SettingsScreen> createState() => _SettingsScreenState();
}

class _SettingsScreenState extends State<SettingsScreen> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: BackDots(
        title: "Settings",
      ),
      body: SafeArea(
        child: Padding(
          padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: [
              const SizedBox(height: 10),
              //account
              SettingsTile(
                color: const Color.fromARGB(255, 214, 247, 221),
                icon: Ionicons.person_outline,
                title: "Account",
                onTap: () {},
              ),
              const SizedBox(
                height: 10,
              ),
              //notification
              SettingsTile(
                color: const Color.fromARGB(255, 214, 247, 221),
                icon: Ionicons.notifications_outline,
                title: "Notification",
                onTap: () {},
              ),
              const SizedBox(
                height: 10,
              ),
              //location
              SettingsTile(
                color: const Color.fromARGB(255, 214, 247, 221),
                icon: Ionicons.location_outline,
                title: "Location",
                onTap: () {},
              ),
              const SizedBox(
                height: 10,
              ),
              //terms and conditions
              SettingsTile(
                color: const Color.fromARGB(255, 214, 247, 221),
                icon: Ionicons.document_outline,
                title: "Terms and Conditions",
                onTap: () {
                  Navigator.push(
                    context,
                    MaterialPageRoute(builder: (context) => TermsConditions()),
                  );
                },
              ),
              const SizedBox(
                height: 10,
              ),
              //software update
              SettingsTile(
                color: const Color.fromARGB(255, 214, 247, 221),
                icon: Ionicons.arrow_up_outline,
                title: "Software Update",
                onTap: () {},
              ),
              const SizedBox(
                height: 40,
              ),
              //logout
              SettingsTile(
                color: const Color.fromARGB(255, 214, 247, 221),
                icon: Ionicons.log_out_outline,
                title: "Logout",
                onTap: () {},
              ),
            ],
          ),
        ),
      ),
    );
  }
}

