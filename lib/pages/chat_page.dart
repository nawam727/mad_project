import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';
import 'package:mad_project/components/back_notify.dart';
import 'package:mad_project/pages/drawer_screen.dart';

class ChatPage extends StatefulWidget {
  const ChatPage({Key? key}) : super(key: key);

  @override
  _ChatPageState createState() => _ChatPageState();
}

class _ChatPageState extends State<ChatPage> {
  TextEditingController emailController = TextEditingController();
  TextEditingController phoneNumberController = TextEditingController();
  TextEditingController messageController = TextEditingController();

  String emailErrorMessage = '';
  String phoneNumberErrorMessage = '';
  String successMessage = '';

  void clearErrorMessages() {
    setState(() {
      emailErrorMessage = '';
      phoneNumberErrorMessage = '';
    });
  }

  void showErrorMessage(String errorMessage) {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text('Error'),
          content: Text(errorMessage),
          actions: [
            TextButton(
              onPressed: () {
                Navigator.of(context).pop();
              },
              child: Text('OK'),
            ),
          ],
        );
      },
    );
  }

  void showSuccessMessage(String s) {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text('Success'),
          content: Text('Message is sent.'),
          actions: [
            TextButton(
              onPressed: () {
                Navigator.of(context).pop();
              },
              child: Text('OK'),
            ),
          ],
        );
      },
    );
  }

  @override
  void dispose() {
    // Dispose of the text controllers when the widget is disposed
    emailController.dispose();
    phoneNumberController.dispose();
    messageController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: BackDots(title: 'Chat with Us'),
      body: ListView(
        children: <Widget>[
          Column(
            children: <Widget>[
              Container(
                width: MediaQuery.of(context).size.width,
                height: MediaQuery.of(context).size.height * 0.90,
                padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
                margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
                decoration: BoxDecoration(
                  color: Color.fromARGB(255, 255, 255, 255),
                  borderRadius: BorderRadius.circular(24),
                  border: Border.all(
                    color: HexColor("#AFB0AB"),
                    width: 0.3,
                  ),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 2,
                      blurRadius: 10,
                      offset: Offset(0, 3),
                    ),
                  ],
                ),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.stretch,
                  children: <Widget>[
                    Expanded(
                      child: Column(
                        mainAxisAlignment: MainAxisAlignment.center,
                        children: <Widget>[
                          ClipRRect(
                            borderRadius: const BorderRadius.only(
                              topLeft: Radius.circular(8.0),
                              topRight: Radius.circular(8.0),
                            ),
                            child: Image.asset(
                              'assets/images/cl.jpeg',
                              width: MediaQuery.of(context).size.width*0.70,
                              height: MediaQuery.of(context).size.height*0.26,
                              alignment: Alignment.topCenter,
                              fit: BoxFit.fill,
                            ),
                          ),

                          SizedBox(height: 0), // Added spacing below the image
                          Text(
                            "Let's chat",
                            style: TextStyle(
                              fontSize: 23,
                              color: HexColor("#00000"),
                              fontWeight: FontWeight.bold,
                            ),
                            textAlign: TextAlign.center,
                          ),
                          SizedBox(height: 8,), // Added spacing below the image
                          Text(
                            "Get in touch and let us know how can we help you",
                            style: TextStyle(
                              fontSize: 13,
                              color: Color.fromARGB(255, 65, 61, 61),
                              fontWeight: FontWeight.normal,
                            ),
                            textAlign: TextAlign.center,
                          ),
                        ],
                      ),
                    ),
                  ],
                ),
              ),

              Container(
                width: MediaQuery.of(context).size.width,
                height: MediaQuery.of(context).size.height * 0.90,
                padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
                margin: const EdgeInsets.only(right: 20, left: 20, top: 20),
                decoration: BoxDecoration(
                  color: Color.fromARGB(255, 255, 255, 255),
                  borderRadius: BorderRadius.circular(24),
                  border: Border.all(
                    color: HexColor("#AFB0AB"),
                    width: 0.3,
                  ),
                  boxShadow: [
                    BoxShadow(
                      color: Colors.grey.withOpacity(0.5),
                      spreadRadius: 2,
                      blurRadius: 10,
                      offset: Offset(0, 3),
                    ),
                  ],
                ),

                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.start,
                  children: [
                    Padding(
                      padding: EdgeInsets.only(top: 40, bottom: 5),
                      child: Text(
                        'Enter your name',
                        style: TextStyle(
                          fontSize: 17,
                          color: HexColor('00B251'),
                        ),
                        textAlign: TextAlign.left,
                      ),
                    ),
                    SizedBox(
                      width: MediaQuery.of(context).size.width,
                      child: TextField(
                        keyboardType: TextInputType.text,
                        decoration: InputDecoration(
                          filled: true,
                          fillColor: HexColor('F4F4F4'),
                          contentPadding: EdgeInsets.all(10.0),
                          border: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(8.0),
                            borderSide: BorderSide.none,
                          ),
                        ),
                        style: TextStyle(fontSize: 18),
                      ),
                    ),

                    Padding(
                      padding: EdgeInsets.only(top: 35, bottom: 5),
                      child: Text(
                        'Enter your email',
                        style: TextStyle(
                          fontSize: 17,
                          color: HexColor('00B251'),
                        ),
                        textAlign: TextAlign.left,
                      ),
                    ),
                    SizedBox(
                      width: MediaQuery.of(context).size.width,
                      child: TextField(
                        keyboardType: TextInputType.emailAddress,
                        decoration: InputDecoration(
                          filled: true,
                          fillColor: HexColor('F4F4F4'),
                          contentPadding: EdgeInsets.all(10.0),
                          border: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(8.0),
                            borderSide: BorderSide.none,
                          ),
                        ),
                        controller: emailController,
                        style: TextStyle(fontSize: 18),
                      ),
                    ),

                    Padding(
                      padding: EdgeInsets.only(top: 35, bottom: 5),
                      child: Text(
                        'Enter your phone number',
                        style: TextStyle(
                          fontSize: 17,
                          color: HexColor('00B251'),
                        ),
                        textAlign: TextAlign.left,
                      ),
                    ),

                    SizedBox(
                      width: MediaQuery.of(context).size.width,
                      child: TextField(
                        keyboardType: TextInputType.phone,
                        inputFormatters: [LengthLimitingTextInputFormatter(10)],
                        decoration: InputDecoration(
                          filled: true,
                          fillColor: HexColor('F4F4F4'),
                          contentPadding: EdgeInsets.all(10.0),
                          border: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(8.0),
                            borderSide: BorderSide.none,
                          ),
                        ),
                        controller: phoneNumberController,
                        style: TextStyle(fontSize: 18),
                      ),
                    ),

                    Padding(
                      padding: EdgeInsets.only(top: 35, bottom: 5),
                      child: Text(
                        'Type your Message*',
                        style: TextStyle(
                          fontSize: 17,
                          color: HexColor('00B251'),
                        ),
                        textAlign: TextAlign.left,
                      ),
                    ),
                    SizedBox(
                      width: MediaQuery.of(context).size.width,
                      height: MediaQuery.of(context).size.height * 0.20,
                      child: TextField(
                        maxLines: null,
                        expands: true,
                        keyboardType: TextInputType.multiline,
                        decoration: InputDecoration(
                          filled: true,
                          fillColor: HexColor('F4F4F4'),
                          contentPadding: EdgeInsets.all(10.0),
                          border: OutlineInputBorder(
                            borderRadius: BorderRadius.circular(8.0),
                            borderSide: BorderSide.none,
                          ),
                        ),
                        controller: messageController,
                        style: TextStyle(fontSize: 18),
                      ),
                    ),

              Center(
                child: Padding(
                  padding: EdgeInsets.only(top: 40),
                  child: ElevatedButton(
                    onPressed: () {

                      clearErrorMessages();
                      successMessage = '';

                       // Clear any previous error messages
                      if (messageController.text.isEmpty) {
                        showErrorMessage('Please type your message');
                      } else {
                        if (emailController.text.isNotEmpty && !isValidEmail(emailController.text)) {
                          setState(() {
                            emailErrorMessage = '';
                            showErrorMessage('Invalid email format');
                          });
                        }
                        if (phoneNumberController.text.isNotEmpty && !isValidPhoneNumber(phoneNumberController.text)) {
                          setState(() {
                            phoneNumberErrorMessage = '';
                            showErrorMessage('Invalid phone number format');
                          });
                        }
                      }

                      if (((emailController.text.isNotEmpty && isValidEmail(emailController.text)) || 
       (phoneNumberController.text.isNotEmpty && isValidPhoneNumber(phoneNumberController.text))) &&
      messageController.text.isNotEmpty) {
    showSuccessMessage('Success! Your message has been sent.');
  } else {
    showErrorMessage('Please enter a valid email or phone number');
  }

  setState(() {  }); // Trigger a rebuild to display the success message or error message

                    },
                    child: Text(
                      'Send Message',
                      style: TextStyle(color: Colors.white, fontSize: 16),
                    ),
                    style: ElevatedButton.styleFrom(
                      backgroundColor: HexColor('00B251'),
                      elevation: 3,
                      shape: RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(8.0),
                        side: BorderSide(
                          color: HexColor("C4C5C2"),
                        ),
                      ),
                      fixedSize: Size(180, 50),
                    ),
                  ),
                ),
              ),
            ],
          ),
              ),
        ],
      ),
        ],
      ),
    );
  }

  bool isValidEmail(String email) {
    // You can implement your email validation logic here
    // For a simple email format check, you can use a regular expression
    final emailRegex = RegExp(r'^[\w-]+(\.[\w-]+)*@([\w-]+\.)+[a-zA-Z]{2,7}$');
    return emailRegex.hasMatch(email);
  }

  bool isValidPhoneNumber(String phoneNumber) {
    // You can implement your phone number validation logic here
    // For a simple phone number format check, you can use a regular expression
    final phoneRegex = RegExp(r'^[0-9]{10}$');
    return phoneRegex.hasMatch(phoneNumber);
  }
}
