import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/my_button.dart';
import 'package:mad_project/components/text_field.dart';

class LoginPage extends StatefulWidget {
  const LoginPage({super.key});

  @override
  State<LoginPage> createState() => _LoginPageState();
}

class _LoginPageState extends State<LoginPage> {

  void signUserIn() {

  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      //backgroundColor: HexColor("#E6FFF1"),
      body: ListView(
        //physics: const NeverScrollableScrollPhysics(),
        children:[
          SafeArea(
            child: Center(
              child: Column(children: [
                const SizedBox(height: 20,
                ),
                //logo
                Image.asset(
                  'assets/images/nsbm.png',
                  width: 200,
                  height: 200,
                ),
                const SizedBox(height: 20,
                ),
                
                //text
                const Text("Welcome to Uni-Connect",
                style: TextStyle(fontSize: 20),
                ),
                const SizedBox(height: 70,
                ),
        
                //login text
                const Text("Login", 
                style: TextStyle(fontSize: 38, fontWeight: FontWeight.bold),
                ),
                const SizedBox(height: 60,
                ),

                //username
                const MyTextField(
                  hintText: "Username",
                  obscureText: false,
                ),
                const SizedBox(height: 40,
                ),

                //password
                const MyTextField(
                  hintText: "Password",
                  obscureText: true,
                ),
                const SizedBox(height: 30,
                ),

                //remember password
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 27),
                  child: Row(
                    mainAxisAlignment: MainAxisAlignment.end,
                    children: [
                      Text("Remember Password",
                      style: TextStyle(color: HexColor("#959CA3")
                      ),
                      ),
                    ],
                  ),
                ),
                const SizedBox(height: 60,
                ),

                //login btn
                MyButton(
                  onTap: signUserIn,
                ),

              ],),
            ),
          ),
        ],
      ),
    );
  }
}
