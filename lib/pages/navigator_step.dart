import 'package:flutter/material.dart';
import 'package:mad_project/components/back_menu.dart';
import 'package:mad_project/components/back_notify.dart';

class NavigatorStepPage extends StatefulWidget {
  const NavigatorStepPage({super.key});

  @override
  State<NavigatorStepPage> createState() => _NavigatorStepPageState();
}

class _NavigatorStepPageState extends State<NavigatorStepPage> {

  String? valueChoose;
  String? valueChoose1;
  List listItem = ["Main Gate", "Canteen", "Toilet", "Lecture hall"];
  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: BackNotify(title:"Map-Step"),
      body: Column(
        children: [
          Container(
            height: size.height * 0.17,
            decoration: const BoxDecoration(
              border: Border(bottom: BorderSide(width: 1)),
              color: Color.fromARGB(255, 255, 255, 255),
            ),
            child: Padding(
              padding: EdgeInsets.only(top: size.width * 0.028),
              child: Column(
                children: [
                  Padding(
                    padding: EdgeInsets.only(left: size.width * 0.05),
                    child: SizedBox(
                      height: size.height*0.061,
                      //from and drop down list Row
                      child: Row(
                        children: [
                          const Expanded(
                            flex: 1,
                            child: Text(
                              "From",
                              style: TextStyle(
                                  fontSize: 17, fontWeight: FontWeight.w400),
                            ),
                          ),
                          //drop down list for from
                          Expanded(
                            flex: 5,
                            child: Container(
                              color: const Color.fromARGB(255, 255, 255, 255),
                              child: DropdownButtonFormField(
                                decoration: const InputDecoration(
                                  enabledBorder: OutlineInputBorder(
                                    borderSide: BorderSide(
                                        color: Colors.black, width: 1),
                                  ),
                                  focusedBorder: OutlineInputBorder(
                                    borderSide: BorderSide(
                                        color: Colors.black, width: 1),
                                  ),
                                  filled: true,
                                  fillColor: Color.fromARGB(255, 255, 255, 255),
                                ),
                                hint: const Padding(
                                  padding: EdgeInsets.only(left: 5),
                                  child: Text(
                                    "Select Location",
                                    style: TextStyle(fontSize: 15),
                                  ),
                                ),
                                dropdownColor: Colors.white,
                                icon: const Padding(
                                  padding: EdgeInsets.only(left: 100),
                                  child: Icon(Icons.expand_more),
                                ),
                                iconSize: 30,
                                style: const TextStyle(
                                  color: Colors.black,
                                  fontSize: 15,
                                ),
                                value: valueChoose,
                                onChanged: (newValue) {
                                  setState(() {
                                    valueChoose = newValue as String?;
                                  });
                                },
                                items: listItem.map((valueItem) {
                                  return DropdownMenuItem(
                                    value: valueItem,
                                    child: Text(valueItem),
                                  );
                                }).toList(),
                              ),
                            ),
                          ),
                          const Expanded(child: SizedBox())
                        ],
                      ),
                    ),
                  ),
                  const SizedBox(
                    height: 8,
                  ),
                  //to , dropdown list and search icon Row
                  SizedBox(
                    height: size.height*0.061,
                    child: Padding(
                      padding: EdgeInsets.only(left: size.width * 0.05),
                      child: Row(
                        children: [
                          const Expanded(
                            flex: 1,
                            child: Text(
                              "To",
                              style: TextStyle(
                                  fontSize: 17, fontWeight: FontWeight.w500),
                            ),
                          ),
                          //dropdown list for to
                          Expanded(
                            flex: 5,
                            child: DropdownButtonFormField(
                              decoration: const InputDecoration(
                                enabledBorder: OutlineInputBorder(
                                  borderSide:
                                      BorderSide(color: Colors.black, width: 1),
                                ),
                                focusedBorder: OutlineInputBorder(
                                  borderSide:
                                      BorderSide(color: Colors.black, width: 1),
                                ),
                                filled: true,
                                fillColor: Color.fromARGB(255, 255, 255, 255),
                              ),
                              hint: const Padding(
                                padding: EdgeInsets.only(left: 8),
                                child: Text("Select Location"),
                              ),
                              dropdownColor: Colors.white,
                              icon: const Padding(
                                padding: EdgeInsets.only(left: 100),
                                child: Icon(Icons.expand_more),
                              ),
                              iconSize: 30,
                              style: const TextStyle(
                                color: Colors.black,
                                fontSize: 15,
                              ),
                              value: valueChoose1,
                              onChanged: (newValue1) {
                                setState(() {
                                  valueChoose1 = newValue1 as String?;
                                });
                              },
                              items: listItem.map((valueItem) {
                                return DropdownMenuItem(
                                  value: valueItem,
                                  child: Text(valueItem),
                                );
                              }).toList(),
                            ),
                          ),
                          // Search icon
                          Expanded(
                            flex: 1,
                            child: IconButton(
                              icon: Image.asset(
                                'assets/icons/search.png',
                                height: size.width * 0.04,
                              ),
                              onPressed: () {},
                            ),
                          ),
                        ],
                      ),
                    ),
                  ),
                ],
              ),
            ),
          ),
          //background image
          Expanded(
            child: Container(
                decoration: const BoxDecoration(
                  image: DecorationImage(
                    image: AssetImage("assets/images/Map.png"),
                    fit: BoxFit.cover,
                  ),
                ),
                child: Column(
                  children: [
                    Expanded(
                      child: Container(),
                    ),
                    //bottom container that has popup function
                    Container(
                      height: size.width * 0.12,
                      decoration: BoxDecoration(
                          color: Colors.white70,
                          border: Border.all(width: 1),
                          borderRadius:const  BorderRadius.vertical(
                            top: Radius.circular(20),
                          )),
                      child: Center(
                        child: IconButton(
                          onPressed: () {
                            showModalBottomSheet(
                                isScrollControlled: true,
                                backgroundColor: Colors.transparent,
                                context: context,
                                builder: (context) => buildSheet());
                          },
                          icon: const Icon(
                            Icons.expand_less_sharp,
                          ),
                          iconSize: 50,
                        ),
                      ),
                    ),
                  ],
                )),
          ),
        ],
      ),
    );
  }

//to dismiss the popup card when click the out of the container
  Widget makeDismissible({required Widget child}) => GestureDetector(
      behavior: HitTestBehavior.opaque,
      onTap: () {
        Navigator.of(context).pop();
      },
      child: GestureDetector(onTap: () {}, child: child));

//popup container
  Widget buildSheet() => makeDismissible(
    
        child: DraggableScrollableSheet(
          initialChildSize: 0.3,
          minChildSize: 0.2,
          maxChildSize: 0.5,
          builder: (_, controller) => Container(
            decoration: BoxDecoration(
              border: Border.all(width: 1),
              color: Colors.white,
              borderRadius: BorderRadius.vertical(top: Radius.circular(20)),
            ),
            child: Padding(
              padding: EdgeInsets.all(16),
              child: ListView(
                controller: controller,
                children:  [
                  IconButton(
                          onPressed: () {
                             Navigator.of(context).pop();
                          },
                          icon: const Icon(
                            Icons.expand_more_sharp,
                          ),
                          iconSize: 50,
                        ),
                  Text(
                      "Dolore esse duis Lorem amet id do aute dolor eiusmod tempor aliquip exercitation. Eiusmod esse exercitation nulla fugiat labore eiusmod ad laborum velit ut pariatur laboris occaecat esse. Deserunt nulla elit reprehenderit exercitation dolore ea ex mollit. Deserunt consequat minim Lorem tempor officia proident sunt culpa sunt fugiat aute ex nostrud. Laborum duis dolor voluptate ea deserunt amet velit proident labore deserunt mollit cillum. Proident tempor ipsum officia non officia ipsum anim."),
                  Text(
                      "Officia laboris aute irure ipsum dolore Lorem proident. Officia ex elit ad consequat fugiat sunt mollit dolor eu adipisicing. Adipisicing qui proident tempor id duis do qui minim minim ullamco adipisicing ipsum. Adipisicing sit fugiat irure laborum do. Laboris Lorem tempor et deserunt aute esse ad cillum. Pariatur sunt sunt commodo elit.")
                ],
              ),
            ),
          ),
        ),
      );
}
