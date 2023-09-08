import 'package:flutter/material.dart';
import 'package:mad_project/components/back_dots.dart';

class TermsConditions extends StatefulWidget {
  const TermsConditions({super.key});

  @override
  State<TermsConditions> createState() => _TermsConditionsState();
}

class _TermsConditionsState extends State<TermsConditions> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: BackDots(
        title: "Terms and Conditions",
      ),
      body: const SingleChildScrollView(
         padding: EdgeInsets.only(left: 30,top: 20,right: 30,bottom: 30),
        
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            //1st paragraph
            Text(
              "1. By installing the NSBM N-Side app (“N-Side app”), you agree to be bound by these terms of use. Please review them carefully before installation and/or acceptance.",
              style: TextStyle(fontSize: 14),
            ),

            //2nd paragraph
            SizedBox(height: 16),
            Text(
              "2. To access certain features of the App, you may be required to create an account. You are responsible for maintaining the confidentiality of your account information and agree to accept responsibility for all activities that occur under your account. You agree to provide accurate and current information during account registration and promptly update any changes.",
              style: TextStyle(fontSize: 14),
            ),

            //3rd paragraph
            SizedBox(height: 16),
            Text(
              "3. The App provides access to academic schedules, lecture hall details, real-time updates, and navigation information. You may use the App for personal, non-commercial purposes only. You agree not to use the App for any unlawful or unauthorized purpose, including but not limited to infringing on intellectual property rights or engaging in unauthorized data collection.",
              style: TextStyle(fontSize: 14),
            ),

            //4th paragraph
            SizedBox(height: 16),
            Text(
              "4. Your privacy is important to us. Please review our Privacy Policy to understand how we collect, use, and safeguard your personal information.",
              style: TextStyle(fontSize: 14),
            ),

            //5th paragraph
            SizedBox(height: 16),
            Text(
              "5. By using the App, you consent to receive notifications, updates, and important information related to academic matters and events. You may opt-out of certain communications through your account settings.",
              style: TextStyle(fontSize: 14),
            ),

            //6th paragraph
            SizedBox(height: 16),
            Text(
              "6. All content provided through the App, including but not limited to text, graphics, images, and software, is owned by [N-Side] or its licensors and is protected by intellectual property laws. You may not reproduce, distribute, modify, or create derivative works based on the App's content without our express written permission.",
              style: TextStyle(fontSize: 14),
            ),

            //7th paragraph
            SizedBox(height: 16),
            Text(
              "7. The App is provided as is without any warranties, express or implied.N-Side does not guarantee the accuracy, completeness, or reliability of the App's content. In no event shall N-Side be liable for any direct, indirect, incidental, special, consequential, or punitive damages arising from the use or inability to use the App.",
              style: TextStyle(fontSize: 14),
            ),

            //8th paragraph
            SizedBox(height: 16),
            Text(
              "8. We reserve the right to terminate your access to the App or suspend your account at any time, without notice, for any reason, including but not limited to a violation of these terms.",
              style: TextStyle(fontSize: 14),
            ),

            //9th paragraph
            SizedBox(height: 16),
            Text(
              "9. We reserve the right to modify or update these terms and conditions at any time. You are responsible for reviewing these terms periodically for changes.",
              style: TextStyle(fontSize: 14),
            ),

            //10th paragraph
            SizedBox(height: 16),
            Text(
              "10. For any questions, concerns, or inquiries related to these terms and conditions, please contact us at nsidensbm@gmail.com.",
              style: TextStyle(fontSize: 14),
            ),
          ],
        ),
      ),
    );
  }
}