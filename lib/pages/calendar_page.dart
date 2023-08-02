import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:intl/intl.dart';
import 'package:mad_project/components/menu_calendar.dart';

class CalendarPage extends StatelessWidget {
  const CalendarPage({super.key});

  @override
  Widget build(BuildContext context) {
    DateTime today = DateTime.now();
    List<DateTime> daysOfTheWeek = _getDaysOfTheWeek(today);

    return Scaffold(
      appBar: MenuCalendar(title: "Time Table"),
      body: ListView(
        children: [
          SizedBox(
            height: 10,
          ),
          Container(
            height: 100, // Adjust the height as needed
            child: ListView.builder(
              scrollDirection: Axis.horizontal, // Display items horizontally
              itemCount: daysOfTheWeek.length,
              itemBuilder: (context, index) {
                DateTime day = daysOfTheWeek[index];
                String formattedDayText = DateFormat('EEE').format(day);

                return DayofCalendar(
                  dayText: formattedDayText,
                  date: day,
                );
              },
            ),
          ),
        ],
      ),
    );
  }

  List<DateTime> _getDaysOfTheWeek(DateTime date) {
    DateTime startOfWeek = date.subtract(Duration(days: date.weekday - 1));
    List<DateTime> daysOfTheWeek = [];

    for (int i = 0; i < 7; i++) {
      daysOfTheWeek.add(startOfWeek.add(Duration(days: i)));
    }

    return daysOfTheWeek;
  }
}

class DayofCalendar extends StatelessWidget {
  final String dayText;
  final DateTime date;

  DayofCalendar({
    required this.dayText,
    required this.date,
  });

  @override
  Widget build(BuildContext context) {
    DateTime currentDate = date;
    String formattedDate = DateFormat('d').format(currentDate);
    String formattedDayText = DateFormat('EEE').format(currentDate);

    bool isToday = isActualDate(currentDate);

    double containerSize = MediaQuery.of(context).size.width * 0.117;
    double fontSize = MediaQuery.of(context).size.width * 0.04;

    Color textColor = isToday ? const Color(0xFF00B251) : Colors.black;
    Color containerColor = isToday ? Colors.white : Colors.white;
    Color borderColor = isToday ? const Color(0xFF00B251) : HexColor("#77796B");

    return Padding(
      padding: const EdgeInsets.only(left: 9),
      child: Column(
        children: [
          Container(
            child: Text(
              formattedDayText, // Use the formatted day name
              style: TextStyle(fontSize: fontSize, color: textColor),
            ),
          ),
          SizedBox(height: 10),
          Container(
            height: containerSize,
            width: containerSize,
            child: Center(
              child: Text(
                formattedDate,
                style: TextStyle(fontSize: fontSize, color: textColor),
              ),
            ),
            decoration: BoxDecoration(
              color: containerColor,
              borderRadius: BorderRadius.circular(100),
              border: Border.all(color: borderColor),
            ),
          )
        ],
      ),
    );
  }

  bool isActualDate(DateTime currentDate) {
    DateTime today = DateTime.now();
    return currentDate.year == today.year &&
        currentDate.month == today.month &&
        currentDate.day == today.day;
  }
}
