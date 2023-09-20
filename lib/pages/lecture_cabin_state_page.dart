import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_search.dart';

class CabinState extends StatelessWidget {
  const CabinState({super.key});

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    return Scaffold(
      appBar: BackSearch(
        title: "Lecturers Availability",
      ),
      body: SafeArea(
        child: ListView(
          children: [
            SizedBox(
              height: 10,
            ),
            Padding(
              padding: EdgeInsets.only(
                  left: size.width * 0.06, right: size.width * 0.06),
              child: Container(
                height: size.height * 0.035,
                decoration: BoxDecoration(
                  borderRadius: BorderRadius.circular(10),
                  color: HexColor("#2C8E3B"),
                ),
                //title of the table{lecture name and cabin status text}
                child: const Row(
                  children: [
                    Expanded(
                      flex: 3,
                      child: Center(
                        child: Text(
                          "Lecturer Name",
                          style: TextStyle(
                            color: Colors.white,
                            fontSize: 14,
                          ),
                        ),
                      ),
                    ),
                    Expanded(
                      flex: 2,
                      child: Center(
                        child: Text(
                          "Cabin State",
                          style: TextStyle(
                            color: Colors.white,
                            fontSize: 14,
                          ),
                        ),
                      ),
                    ),
                  ],
                ),
              ),
            ),

            //card details of the lecturer and cabin status
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Dr.Rasika Ranaweera", true),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mrs.Pavithra Subashini", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mr.Naji Saravanabawan", true),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mrs.Hirushi Dilpriya", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mr.Gayan Perera", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mr.Mohamed Shafraz", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mr.Isuru Sri Bandara", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mrs.Chalani Oruthitarachchi", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mr.Chamara Disanayake", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mr.Chamendra Aththanayake", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mr.Dilhara Batan Arachchi", false),
              ),
            ),
            Padding(
              padding: EdgeInsets.only(
                left: size.width * 0.06,
                top: size.width * 0.025,
                right: size.width * 0.06,
              ),
              child: Container(
                height: size.height * 0.07,
                color: HexColor("#EAFEED"),
                child: cabinStatus(size, "Mrs.Nethmi Weerasinghe", false),
              ),
            ),
          ],
        ),
      ),
    );
  }

  Row cabinStatus(Size size, String name, bool available) {
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
                fontSize: 18,
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
                inactiveThumbColor: HexColor("#ED8F68"),
                inactiveTrackColor: HexColor("#EBC9AD"),
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
}
