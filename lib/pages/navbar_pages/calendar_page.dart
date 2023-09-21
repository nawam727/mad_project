import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:intl/intl.dart';
import 'package:mad_project/components/menu_calendar.dart';
import 'package:timeline_tile/timeline_tile.dart';

import '../../main.dart';
import '../drawer_screen.dart';

class CalendarPage extends StatefulWidget {
  const CalendarPage({super.key});

  @override
  State<CalendarPage> createState() => _CalendarPageState();
}

class _CalendarPageState extends State<CalendarPage> {
  //fetching data from firebase
  LectureData? lectureData;

  @override
  void initState() {
    super.initState();
    // Call getLectureData from initState
    getLectureData();
  }

  Future<void> getLectureData() async {
    LectureData? lectureDetails = await getLectureDetails();
    setState(() {
      lectureData = lectureDetails;
    });
  }

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
            height: 80,
            child: ListView.builder(
              scrollDirection: Axis.horizontal,
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
            eventText: lectureData != null ? lectureData!.lecture : "Lecture",
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "10.00",
            eventText: lectureData != null ? lectureData!.time : "Lecture Time",
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "11.00",
            eventText: lectureData != null ? lectureData!.lecturer : "Lecturer",
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "12.00",
            eventText: lectureData != null ? lectureData!.location : "Hall",
            eventColor: '#ECEEFE',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "13.00",
            eventText: '',
            eventColor: '#00FFFFFF',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "14.00",
            eventText: lectureData != null ? lectureData!.lecture2 : "Lecture",
            eventColor: '#FEECEC',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "15.00",
            eventText:
                lectureData != null ? lectureData!.time2 : "Lecture Time",
            eventColor: '#FEECEC',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: false,
            timeText: "16.00",
            eventText:
                lectureData != null ? lectureData!.lecturer2 : "Lecturer",
            eventColor: '#FEECEC',
          ),
          TimeLineTitle(
            isFirst: false,
            isLast: true,
            timeText: "17.00",
            eventText: lectureData != null ? lectureData!.location2 : "Hall",
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
            width: 40,
            padding: EdgeInsets.all(8),
            indicator: Container(
              alignment: Alignment.center,
              decoration: BoxDecoration(
                borderRadius: BorderRadius.circular(5),
              ),
              child: Text(
                timeText,
                style: TextStyle(
                  color: HexColor('#717273'),
                ),
              ),
            ),
          ),
          endChild: Padding(
            padding: const EdgeInsets.only(right: 16.0),
            child: Container(
              color: HexColor(eventColor),
              padding: EdgeInsets.symmetric(horizontal: 60),
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
              formattedDayText,
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
