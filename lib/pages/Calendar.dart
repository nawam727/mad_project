import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_dots.dart';
import 'package:table_calendar/table_calendar.dart';

class Calendar extends StatefulWidget {
  const Calendar({Key? key}) : super(key: key);

  @override
  State<Calendar> createState() => _CalendarState();
}

class _CalendarState extends State<Calendar> {
  DateTime today = DateTime.now();
  Map<DateTime, List<String>> events = {}; // Map to store events

  String selectedEventMessage = ""; // Event message for the selected day

  String a = "SE303.3 Mobile Application Development";     // Event name variables
  String b = "SE304.3 Software Quality Assurance";
  String c = "MA301.3 Advanced Mathematics for Computing";
  String d = "CS306.3 Information Assurance and Security";    
  String e = "SE303.3 Mobile Application Development";
  String f = "CS304.3 Advanced Database Management Systems";

  void _onDaySelected(DateTime day, DateTime focusedDay) {
    setState(() {
      today = day;
      selectedEventMessage = events[day]?.isNotEmpty == true ? events[day]![0] : "";
    });

    // Check if the selected date is 2023-09-18 
    if (day.year == 2023 && day.month == 9 && day.day == 15) {
      selectedEventMessage = a;
      //selectedEventMessage = b;
    }
    // Check if the selected date is 2023-09-26
    else if (day.year == 2023 && day.month == 9 && day.day == 18) {
      selectedEventMessage = b;
    }
    // Check if the selected date is 2023-09-28 
    else if (day.year == 2023 && day.month == 9 && day.day == 20) {
      selectedEventMessage = c;
    }
    // Check if the selected date is 2023-09-18
    if (day.year == 2023 && day.month == 9 && day.day == 22) {
      selectedEventMessage = d;
    }
    // Check if the selected date is 2023-09-26 
    else if (day.year == 2023 && day.month == 9 && day.day == 26) {
      selectedEventMessage = e;
    }
    // Check if the selected date is 2023-09-28 
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
      appBar: BackDots(title: "Calender"),
      body: ListView(
        children: [
          content(),
        ],
       )
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
              headerStyle: HeaderStyle(
                         formatButtonVisible: false,
                         titleCentered: true,    
                      ),
              availableGestures: AvailableGestures.all,
              selectedDayPredicate: (day) => isSameDay(day, today),
              focusedDay: today,
              firstDay: DateTime.utc(2023, 7, 01),
              lastDay: DateTime.utc(2023, 11, 30),
              onDaySelected: _onDaySelected,
              eventLoader: (date) {
                // Load events for the selected day from the events map
                return events[DateTime(date.year, date.month, date.day)] ?? [];
              },
            ),
          ),
          
          
          const SizedBox(height: 50.0,),

          Container(
           // ... Other container properties
          decoration: BoxDecoration(
             color:HexColor("#ccffdc"),
             borderRadius: BorderRadius.circular(20), // Rounded corners
             boxShadow: [
                  BoxShadow(
                     color: Colors.grey.withOpacity(0.3),
                     spreadRadius: 3,
                     blurRadius: 20,
                     offset: Offset(0, 3),
                  ),
              ],
          ),
          height: 120.0,
          width: 320.0,
             child: Padding(
               padding: const EdgeInsets.all(20.0),
                child: Semantics(
                    
                    child: Column(
                      children: [
                        Column(
                          children: [
                            Text("Time : 9.00 am - 12.00 pm  ", 
                            textAlign: TextAlign.center,
                            style: TextStyle(
                              fontSize: 18.0, 
                              fontWeight: FontWeight.bold, 
                              color: Color.fromARGB(255, 87, 86, 86),
                            )),

                            SizedBox(height: 10.0,),

                            Text(selectedEventMessage,
                            textAlign: TextAlign.center, 
                            style: TextStyle(
                              fontSize: 18.0, 
                              fontWeight: FontWeight.bold, 
                              color: Colors.black,
                            )
                            ),
                          ],
                        ),
                           
                        //SizedBox(height: 30.0,),

                        // Column(
                        //   children: [
                        //     Text("Time: 2.00 am - 5.00 pm  ",
                        //     textAlign: TextAlign.left,
                        //     style: TextStyle(
                        //       fontSize: 20.0, 
                        //       fontWeight: FontWeight.bold, 
                        //       color: Color.fromARGB(255, 87, 86, 86),
                        //     ) ),

                        //     SizedBox(height: 10.0,),

                        //     Text("Module:  " +selectedEventMessage,
                        //     textAlign: TextAlign.left, 
                        //     style: TextStyle(
                        //       fontSize: 20.0, 
                        //       fontWeight: FontWeight.bold, 
                        //       color: Colors.black,
                        //     )
                        //     ),
                        //   ],
                        // ),


                      ],
                    ),
                    
                ),
              ),


            ),
            
            
             // Event Message Display

               SizedBox(height: 20.0,),
             
              Container(
           // ... Other container properties
          decoration: BoxDecoration(
             color:HexColor('ccffdc'),
             borderRadius: BorderRadius.circular(20), // Rounded corners
             boxShadow: [
                  BoxShadow(
                     color: Colors.grey.withOpacity(0.3),
                     spreadRadius: 3,
                     blurRadius: 20,
                     offset: Offset(0, 3),
                  ),
              ],
          ),
          height: 120.0,
          width: 320.0,
             child: Padding(
               padding: const EdgeInsets.all(20.0),
                child: Semantics(
                    
                    child: Column(
                      children: [
                        // Column(
                        //   children: [
                        //     Text("Time : 9.00 am - 12.00 pm  ", 
                        //     textAlign: TextAlign.left,
                        //     style: TextStyle(
                        //       fontSize: 20.0, 
                        //       fontWeight: FontWeight.bold, 
                        //       color: Color.fromARGB(255, 87, 86, 86),
                        //     )),

                        //     SizedBox(height: 10.0,),

                        //     Text("Module:  " +selectedEventMessage,
                        //     textAlign: TextAlign.left, 
                        //     style: TextStyle(
                        //       fontSize: 20.0, 
                        //       fontWeight: FontWeight.bold, 
                        //       color: Colors.black,
                        //     )
                        //     ),
                        //   ],
                        // ),
                           
                        //SizedBox(height: 30.0,),

                        Column(
                          children: [
                            Text("Time: 2.00 am - 5.00 pm  ",
                            textAlign: TextAlign.center,
                            style: TextStyle(
                              fontSize: 18.0, 
                              fontWeight: FontWeight.bold, 
                              color: Color.fromARGB(255, 87, 86, 86),
                            ) ),

                            SizedBox(height: 10.0,),

                            Text(selectedEventMessage,
                            textAlign: TextAlign.center, 
                            style: TextStyle(
                              fontSize: 18.0, 
                              fontWeight: FontWeight.bold, 
                              color: Colors.black,
                            )
                            ),
                          ],
                        ),


                      ],
                    ),
                    
                ),
              ),


            
             ),

        ],
      ),
    );
  }
}
