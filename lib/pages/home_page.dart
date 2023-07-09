import 'package:flutter/material.dart';

class HomePage extends StatelessWidget {
  const HomePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Center(child: Text("Home Pgae")),
        backgroundColor: const Color.fromARGB(255, 107, 226, 133),
      ),
      body: const Center(
          child: Text(
        "This is Home Page",
        style: TextStyle(fontSize: 20),
      )),
    );
  }
}
