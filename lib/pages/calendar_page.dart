import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:intl/intl.dart';
import 'package:mad_project/components/menu_calendar.dart';
import 'package:timeline_tile/timeline_tile.dart';

import 'drawer_screen.dart';

class CalendarPage extends StatelessWidget {
  const CalendarPage({super.key});

  @override
  Widget build(BuildContext context) {
    DateTime today = DateTime.now();
    List<DateTime> daysOfTheWeek = _getDaysOfTheWeek(today);

    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuCalendar(title: "Time Table"),
      body: ListView(
        children: [
          SizedBox(
            height: 10,
          ),
          Container(
            height: 80, // Adjust the height as needed
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
          SizedBox(
            height: 10,
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "9.00",
            eventText: 'Software Quality Assurance',
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "10.00",
            eventText: '',
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "11.00",
            eventText: '',
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "12.00",
            eventText: '',
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "13.00",
            eventText: '',
            eventColor: '#ffffff',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "14.00",
            eventText: 'Advanced DBMS',
            eventColor: '#FEECEC',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "15.00",
            eventText: '',
            eventColor: '#FEECEC',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "16.00",
            eventText: '',
            eventColor: '#FEECEC',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: true,
            timeText: "17.00",
            eventText: '',
            eventColor: '#FEECEC',
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

class TimeLineTitle extends StatelessWidget {
  final bool isFirst;
  final bool isLast;
  final String timeText;
  final String eventText;
  final String eventColor;

  const TimeLineTitle({
    super.key,
    required this.isFirst,
    required this.isLast,
    required this.timeText,
    required this.eventText,
    required this.eventColor,
  });

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(left: 8.0),
      child: SizedBox(
        height: 66,
        child: TimelineTile(
          isFirst: isFirst,
          isLast: isFirst,
          beforeLineStyle: LineStyle(
            color: HexColor('#717273'),
            thickness: 1,
          ),
          indicatorStyle: IndicatorStyle(
            width: 40, // Adjust width as needed
            padding: EdgeInsets.all(8), // Adjust padding as needed
            indicator: Container(
              alignment: Alignment.center,
              decoration: BoxDecoration(
                borderRadius:
                    BorderRadius.circular(5), // Adjust border radius as needed
              ),
              child: Text(
                timeText,
                style: TextStyle(
                  color: HexColor('#717273'),
                ),
              ),
            ),
          ),
          // Add the event text to the tile's content
          endChild: Padding(
            padding: const EdgeInsets.only(right:16.0),
            child: Container(
              color: HexColor(eventColor),
              padding: EdgeInsets.symmetric(horizontal: 16),
              alignment: Alignment.centerLeft,
              child: Text(
                eventText,
                style: TextStyle(
                  fontSize: 16,
                  fontWeight: FontWeight.bold,
                  color: Colors.black,
                ),
              ),
            ),
          ),
        ),
      ),
    );
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
