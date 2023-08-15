//import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
//import 'package:mad_project/components/back_search.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_search.dart';
import 'package:mad_project/pages/mode_selector_page.dart';

class HallAvailability extends StatefulWidget {
  HallAvailability({super.key});

  @override
  State<HallAvailability> createState() => _HallAvailabilityState();
}

class _HallAvailabilityState extends State<HallAvailability> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: BackSearch(
        title: "Hall Availability",
      ),
      body: ListView(
        children: [
          _buildHallContainer("Hall B1 101", "Basement 1", "150 persons",
              HexColor("#98C5EE"), const Color.fromARGB(255, 119, 246, 77)),
          _buildHallContainer("Hall B1 101", "Basement 1", "150 persons",
              HexColor("#98E9EE"), const Color.fromARGB(255, 119, 246, 77)),
          _buildHallContainer("Hall B1 101", "Basement 1", "150 persons",
              HexColor("#AE98EE"), const Color.fromARGB(255, 119, 246, 77)),
          _buildHallContainer("Hall B1 101", "Basement 1", "150 persons",
              HexColor("#98EEA0"), const Color.fromARGB(255, 119, 246, 77)),
          _buildHallContainer("Hall B1 101", "Basement 1", "150 persons",
              HexColor("#D8EE98"), const Color.fromARGB(255, 119, 246, 77)),
          _buildHallContainer("Hall B1 101", "Basement 1", "150 persons",
              HexColor("#98C5EE"), const Color.fromARGB(255, 119, 246, 77)),
        ],
      ),
    );
  }

  Widget _buildHallContainer(String hallName, String location, String capacity,
      Color containerColor, Color availableColor) {
    double screenWidth = MediaQuery.of(context).size.width;
    return Container(
      width: screenWidth * 0.9,
      height: 130,
      padding: const EdgeInsets.symmetric(horizontal: 20, vertical: 10),
      margin: const EdgeInsets.only(right: 20, left: 20, top: 25),
      decoration: BoxDecoration(
        color: containerColor,
        borderRadius: BorderRadius.circular(24),
      ),
      child: Column(
        //crossAxisAlignment: CrossAxisAlignment.stretch,
        children: <Widget>[
          //Hall name and Go button
          Row(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: <Widget>[
              ClipRRect(
                borderRadius: const BorderRadius.only(
                  topLeft: Radius.circular(16.0),
                  topRight: Radius.circular(16.0),
                ),
              ),
              Text(
                hallName,
                style: TextStyle(fontSize: 20, fontWeight: FontWeight.bold),
              ),
              Spacer(),
              ElevatedButton(
                onPressed: () {
                  Navigator.push(
                    context,
                    MaterialPageRoute(
                      builder: (context) => ModeSelector(),
                    ),
                  );
                },
                child: Text(
                  'Go',
                  style: TextStyle(color: Colors.black),
                ),
                style: ElevatedButton.styleFrom(backgroundColor: Colors.white),
              ),
            ],
          ),
          SizedBox(
            height: 10,
          ),

          //Hall Location Text
          Align(
            alignment: Alignment.topLeft,
            child: Text(
              location,
              style: TextStyle(fontSize: 16),
            ),
          ),
          SizedBox(
            height: 10,
          ),

          //Hall Capacity and Availability
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: [
              Container(
                decoration: BoxDecoration(
                  border: Border.all(color: Colors.black, width: 1),
                ),
                child: Padding(
                  padding: EdgeInsets.symmetric(vertical: 2, horizontal: 8),
                  child: Text(
                    capacity,
                    style: TextStyle(fontSize: 14, fontWeight: FontWeight.bold),
                  ),
                ),
              ),
              Container(
                decoration: BoxDecoration(
                  color: availableColor,
                  border: Border.all(
                    color: availableColor,
                    width: 1,
                  ),
                  borderRadius: BorderRadius.circular(24),
                ),
                child: Padding(
                  padding: EdgeInsets.symmetric(vertical: 2, horizontal: 8),
                  child: Text(
                    'Available',
                    style: TextStyle(fontSize: 14, fontWeight: FontWeight.bold),
                  ),
                ),
              ),
            ],
          ),
        ],
      ),
    );
  }
}
