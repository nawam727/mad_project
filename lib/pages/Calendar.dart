import 'package:flutter/material.dart';
import 'package:table_calendar/table_calendar.dart';

class CalendarPage extends StatefulWidget {
  const CalendarPage({Key? key}) : super(key: key);

  @override
  State<CalendarPage> createState() => _CalendarPageState();
}

class _CalendarPageState extends State<CalendarPage> {
  DateTime today = DateTime.now();
  Map<DateTime, List<String>> events = {}; // Map to store events

  String selectedEventMessage = ""; // Event message for the selected day

  String a = "MAD";     // Event name variables
  String b = "SQA";
  String c = "MATHS";
  String d = "IAS";    
  String e = "MAD";
  String f = "ADBMS";

  void _onDaySelected(DateTime day, DateTime focusedDay) {
    setState(() {
      today = day;
      selectedEventMessage = events[day]?.isNotEmpty == true ? events[day]![0] : "";
    });

    // Check if the selected date is 2023-09-18 (My birthday)
    if (day.year == 2023 && day.month == 9 && day.day == 15) {
      selectedEventMessage = a;
    }
    // Check if the selected date is 2023-09-26 (My name)
    else if (day.year == 2023 && day.month == 9 && day.day == 18) {
      selectedEventMessage = b;
    }
    // Check if the selected date is 2023-09-28 (I am ama)
    else if (day.year == 2023 && day.month == 9 && day.day == 20) {
      selectedEventMessage = c;
    }
    // Check if the selected date is 2023-09-18 (My birthday)
    if (day.year == 2023 && day.month == 9 && day.day == 22) {
      selectedEventMessage = d;
    }
    // Check if the selected date is 2023-09-26 (My name)
    else if (day.year == 2023 && day.month == 9 && day.day == 26) {
      selectedEventMessage = e;
    }
    // Check if the selected date is 2023-09-28 (I am ama)
    else if (day.year == 2023 && day.month == 9 && day.day == 28) {
      selectedEventMessage = f;
    }
  }

  @override
  void initState() {
    super.initState();
    // Add events to the map
    events[DateTime(2023, 9, 15)] = [a];
    events[DateTime(2023, 9, 18)] = [b];
    events[DateTime(2023, 9, 20)] = [c];
    events[DateTime(2023, 9, 22)] = [d];
    events[DateTime(2023, 9, 26)] = [e];
    events[DateTime(2023, 9, 28)] = [f];
    
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Center(child: Text("Time Table")),
      ),
      body: content(),
    );
  }

  Widget content() {
    return Padding(
      padding: const EdgeInsets.all(20.0),
      child: Column(
        children: [
          Container(
            child: TableCalendar(
              locale: "en_US",
              rowHeight: 43,
              headerStyle: const HeaderStyle(
                formatButtonVisible: false,
                titleCentered: true,
              ),
              availableGestures: AvailableGestures.all,
              selectedDayPredicate: (day) => isSameDay(day, today),
              focusedDay: today,
              firstDay: DateTime.utc(2023, 9, 01),
              lastDay: DateTime.utc(2023, 9, 30),
              onDaySelected: _onDaySelected,
              eventLoader: (date) {
                // Load events for the selected day from the events map
                return events[DateTime(date.year, date.month, date.day)] ?? [];
              },
            ),
          ),
          
          const SizedBox(height: 50.0,),
          Text("Reminding :  " + selectedEventMessage, style: TextStyle(fontSize: 30.0, fontWeight: FontWeight.bold, color: Colors.black54,)), // Event Message Display

        ],
      ),
    );
  }
}
