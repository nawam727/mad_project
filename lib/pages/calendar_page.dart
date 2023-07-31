import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/menu_calendar.dart';
import 'package:mad_project/pages/drawer_screen.dart';

class CalendarPage extends StatelessWidget {
  const CalendarPage({super.key});

  @override
  Widget build(BuildContext context) {
    //Size size = MediaQuery.of(context).size;
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuCalendar(
        title: "Time Table",
        onMenuPressed: () {
           Scaffold.of(context).openDrawer();
      }, actions: [],),
      body: SafeArea(
        child: Column(
          children: [
            // Flexible(
            //   child: MenuCalendar(onMenuPressed: () {  },), // MenuNotify takes only the space it needs
            // ),
            SizedBox(
              height: 20,
            ),
            Column(
              children: [
                SizedBox(
                  child: Row(
                    children: [
                      DayofCalendar(
                        dayText: "MON",
                        dateNum: "10",
                      ),
                      DayofCalendar(dayText: "TUE", dateNum: "11"),
                      DayofCalendar(dayText: "WED", dateNum: "12"),
                      DayofCalendar(dayText: "THU", dateNum: "13"),
                      DayofCalendar(dayText: "FRI", dateNum: "14"),
                      DayofCalendar(dayText: "SAT", dateNum: "15"),
                      DayofCalendar(dayText: "SAT", dateNum: "15"),
                    ],
                  ),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }
}

class DayofCalendar extends StatelessWidget {
  final String dayText;
  final String dateNum;

  const DayofCalendar({
    required this.dayText,
    required this.dateNum, // Pass the dayText parameter
  });

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(left: 9),
      child: Column(
        children: [
          Container(
            child: Text(dayText),
          ),
          SizedBox(
            height: 10,
          ),
          Container(
            height: 48,
            width: 48,
            child: Center(child: Text(dateNum)),
            decoration: BoxDecoration(
                borderRadius: BorderRadius.circular(100),
                border: Border.all(color: HexColor("#77796B"))),
          )
        ],
      ),
    );
  }
}
