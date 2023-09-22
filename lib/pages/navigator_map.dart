import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';
import 'map_pages/map_page.dart';

class NavigatorMapPage extends StatefulWidget {
  const NavigatorMapPage({super.key});

  @override
  State<NavigatorMapPage> createState() => _NavigatorMapPageState();
}

class _NavigatorMapPageState extends State<NavigatorMapPage> {
  String? valueChoose;
  String? valueChoose1;
  String x1Index = '0';
  String x2Index = '0';
  String y1Index = '0';
  String y2Index = '0';

  //int? xp1 = int.tryParse(valueChoose);
  //int? xp2 = int.tryParse(valueChoose1);

  List listItem = ["Main Gate", "Canteen", "Com.Faculty", "Busi.Faculty"];
  List listx = [
    '6.821344287173196',
    '6.82124768770943',
    '6.820235027249114',
    '6.820639973882668'
  ];
  List listy = [
    '80.04157259862674',
    '80.03782705843815',
    '80.03953120216208',
    '80.03901295034026'
  ];

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: BackDots(title: "Map Mode"),
      body: Column(
        children: [
          Container(
            height: size.height * 0.17,
            color: Color.fromARGB(255, 255, 255, 255),
            child: Padding(
              padding: EdgeInsets.only(top: size.width * 0.028),
              child: Column(
                children: [
                  Padding(
                    padding: EdgeInsets.only(left: size.width * 0.05),
                    child: SizedBox(
                      height: size.height * 0.061,
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
                              child: Padding(
                                padding: const EdgeInsets.only(right: 16),
                                child: DropdownButtonFormField(
                                  decoration: InputDecoration(
                                    contentPadding: EdgeInsets.all(8),
                                    focusedBorder: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(10),
                                      borderSide: BorderSide(
                                          color: HexColor(
                                              "#00B251")), // Border color when focused
                                    ),
                                    border: OutlineInputBorder(
                                        borderRadius: BorderRadius.circular(10),
                                        borderSide: BorderSide(
                                          color: HexColor("#3F3F3F"),
                                        )),
                                    filled: true,
                                    fillColor:
                                    Color.fromARGB(255, 255, 255, 255),
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
                          ),
                        ],
                      ),
                    ),
                  ),
                  const SizedBox(
                    height: 8,
                  ),
                  //to , dropdown list and search icon Row
                  SizedBox(
                    height: size.height * 0.061,
                    child: Padding(
                      padding: EdgeInsets.only(left: size.width * 0.05),
                      child: Row(
                        children: [
                          const Expanded(
                            flex: 1,
                            child: Text(
                              "To",
                              style: TextStyle(
                                  fontSize: 17, fontWeight: FontWeight.w400),
                            ),
                          ),
                          //dropdown list for to
                          Expanded(
                            flex: 5,
                            child: Padding(
                              padding: const EdgeInsets.only(right: 16),
                              child: DropdownButtonFormField(
                                decoration: InputDecoration(
                                  contentPadding: EdgeInsets.all(8),
                                  focusedBorder: OutlineInputBorder(
                                    borderRadius: BorderRadius.circular(10),
                                    borderSide: BorderSide(
                                        color: HexColor(
                                            "#00B251")), // Border color when focused
                                  ),
                                  border: OutlineInputBorder(
                                      borderRadius: BorderRadius.circular(10),
                                      borderSide: BorderSide(
                                        color: HexColor("#3F3F3F"),
                                      )),
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
                child: Column(
                  children: [
                    Expanded(
                        child: Column(
                          children: [
                            Expanded(
                              child: MapScreen(
                                  x1: "6.821444818536872",
                                  y1: "80.04173648147007",
                                  x2: "6.821444818536872",
                                  y2: "80.04173648147007"),
                            ),
                          ],
                        )),
                    //bottom container that has popup function
                    Container(
                      child: Container(),
                    ),
                    //bottom container that has popup function
                    Container(
                      height: size.width * 0.12,
                      decoration: BoxDecoration(
                          color: Colors.white70,
                          border: Border.all(width: 1, color: HexColor("3F3F3F")),
                          borderRadius: const BorderRadius.vertical(
                            top: Radius.circular(20),
                          )),
                      child: Center(
                        child: IconButton(
                          onPressed: () {
                            for (int i = 0; i < 4; i++) {
                              if (listItem[i] == valueChoose) {
                                x1Index = listx[i];
                                y1Index = listy[i];
                              }
                              if (listItem[i] == valueChoose1) {
                                x2Index = listx[i];
                                y2Index = listy[i];
                              }
                            }
                            showModalBottomSheet(
                                isScrollControlled: true,
                                backgroundColor: Colors.transparent,
                                context: context,
                                builder: (context) =>
                                    buildSheet(x1Index, y1Index, x2Index, y2Index,size));
                          },
                          icon: const Icon(
                            Icons.expand_less_sharp,
                            color: Colors.black54,
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
  Widget buildSheet(
      String x1index, String y1index, String x2index, String y2index,Size size) =>
      makeDismissible(
        child: DraggableScrollableSheet(
          initialChildSize: 0.8,
          minChildSize: 0.2,
          maxChildSize: 0.8,
          builder: (_, controller) => Container(
              decoration: BoxDecoration(
                border: Border.all(width: 1, color: HexColor("#3F3F3F")),
                color: Colors.white,
                borderRadius: BorderRadius.vertical(top: Radius.circular(20)),
              ),
              child: Padding(
                padding: EdgeInsets.all(16),
                child: ListView(
                  controller: controller,
                  children: [
                    TextButton(
                      onPressed: () {
                        Navigator.of(context).pop();
                      },
                      style: TextButton.styleFrom(
                        primary: Colors.black54, // Text color
                      ),
                      child: Row(
                        children: [
                          Icon(
                            Icons.expand_more_sharp,
                            color: Colors.black54,
                            size: 50,
                          ),
                          Text(
                            'Your Path', // Replace 'Your Text' with the desired text
                            style: TextStyle(
                              fontSize: 16, // Adjust the font size as needed
                            ),
                          ),
                        ],
                      ),
                    ),
                    // Text("$x1Index"),
                    // Text("$y1Index"),
                    // Text("$x2Index"),
                    // Text("$y2Index"),
                    Container(
                      width: double.infinity,
                      height: size.height * 0.8,
                      child: MapScreen(
                        x1: x1index,
                        y1: y1index,
                        x2: x2index,
                        y2: y2index,
                      ),
                    ),
                  ],
                ),
              )

          ),
        ),
      );
}