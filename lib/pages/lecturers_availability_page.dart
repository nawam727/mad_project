import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import '../components/menu_home.dart';

class LectureAvailabilityPage extends StatelessWidget {
  const LectureAvailabilityPage({super.key});

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    String name = "Name";
    String imageLink = "assets/images/Logo.png";
    String para =
        "Deserunt minim do consequat occaecat magna laborum proident enim in elit minim ad anim. Qui ut elit sit elit. Fugiat aliquip veniam cillum occaecat voluptate laboris ullamco ut aliqua deserunt. Pariatur nulla esse nulla veniam voluptate id proident excepteur aliqua pariatur quis. Eiusmod incididunt non sint voluptate mollit deserunt est do eu Lorem exercitation exercitation eu. Qui magna duis incididunt aute officia et elit cupidatat laborum.";
    String attendanceLetter = "A";
    String letter = "A";
    return Scaffold(
        appBar: MenuHome(
          username: "Hi GNYS Silva",
        ),
        body: SafeArea(
            child: ListView(children: [


          //lecture's attencance
          Padding(
            padding: const EdgeInsets.only(left: 16),
            child: Text(
              "Lecture's Attendance",
              style: TextStyle(
                fontSize: 20,
                fontWeight: FontWeight.w300,
                color: HexColor("#9B9C98"),
              ),
              textAlign: TextAlign.start,
            ),
          ),
          Padding(
            padding: EdgeInsets.all(size.width * 0.05),
            child: Container(
              color: HexColor("#F3FFF8"),
              height: size.height * (2.9 / 4),
              child: Padding(
                padding: EdgeInsets.only(
                    top: size.width * 0.014,
                    bottom: size.width * 0.014,
                    left: size.width * 0.03),
                child: SizedBox(
                  width: double.infinity,
                  child: Row(
                    children: [
                      Column(
                        mainAxisAlignment: MainAxisAlignment.start,

                        //size,context,letter dont edit
                        children: [
                          //lecturer card
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                        ],
                      ),
                      Column(
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          //lecturer card
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                        ],
                      ),
                      Column(
                        mainAxisAlignment: MainAxisAlignment.start,
                        children: [
                          //lecturer card
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                          lecturerCard(size, imageLink, name, attendanceLetter,
                              context, para, letter),
                        ],
                      ),
                    ],
                  ),
                ),
              ),
            ),
          ),
          SizedBox(
            child: Padding(
              padding: EdgeInsets.only(
                  left: size.width * 0.05,
                  right: size.width * 0.05,
                  bottom: size.width * 0.05),
              //lecturer cabin status
              child: Container(
                  height: size.height * 0.05,
                  color: Colors.white,
                  child: ElevatedButton(
                    onPressed: () {},
                    style: ButtonStyle(
                      shape: MaterialStateProperty.all(
                        RoundedRectangleBorder(
                            borderRadius: BorderRadius.circular(10)),
                      ),
                      backgroundColor:
                          MaterialStateProperty.all(HexColor("#F3FFF8")),
                    ),
                    child: Row(
                      children: [
                        const Expanded(
                          child: Text(
                            "Lecture's Cabin States......",
                            style: TextStyle(
                              fontSize: 20,
                              color: Colors.black,
                            ),
                          ),
                        ),
                        Icon(
                          Icons.library_books,
                          color: HexColor("#00B251"),
                          size: 35,
                        ),
                      ],
                    ),
                  )),
            ),
          ),
        ]))
        );
  }
   Container lecturerCard(
      Size size,
      String imageLink,
      String name,
      String attendanceLetter,
      BuildContext context,
      String para,
      String letter) {
    return Container(
      child: Padding(
        padding: EdgeInsets.all(size.width * 0.03),
        child: Container(
            width: size.width * (0.215),
            height: size.width * (0.325),
            decoration: BoxDecoration(
              color: const Color.fromARGB(255, 255, 255, 255),
              borderRadius: BorderRadius.circular(10),
            ),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: [
                Expanded(
                  flex: 4,
                  child: Padding(
                    padding: EdgeInsets.only(
                      top: size.width * 0.02,
                    ),
                    child: CircleAvatar(
                      radius: 45,
                      backgroundImage: AssetImage(imageLink),
                    ),
                  ),
                ),
                //name
                Expanded(
                  flex: 1,
                  child: Padding(
                    padding: EdgeInsets.only(top: size.width * 0.01),
                    child: Text(
                      name,
                      style: const TextStyle(
                        fontSize: 10,
                        fontWeight: FontWeight.bold,
                      ),
                      textAlign: TextAlign.center,
                    ),
                  ),
                ),
                Expanded(
                  flex: 3,
                  child: Padding(
                    padding: EdgeInsets.only(
                        top: size.width * 0.01,
                        left: size.width * 0.03,
                        right: size.width * 0.03),
                    //attendance
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Expanded(
                          flex: 1,
                          child: attendance("P", attendanceLetter),
                        ),
                        Expanded(
                          flex: 1,
                          child: attendance("A", attendanceLetter),
                        ),
                        Expanded(
                          flex: 1,
                          child: attendance("L", attendanceLetter),
                        ),
                      ],
                    ),
                  ),
                ),
                //view Details Button
                Expanded(
                  flex: 2,
                  child: SizedBox(
                    child: Padding(
                      padding: EdgeInsets.only(
                          bottom: size.width * 0.03,
                          left: size.width * 0.02,
                          right: size.width * 0.02),
                      child: ElevatedButton(
                        onPressed: () {
                          showModalBottomSheet(
                            enableDrag: false,
                            isScrollControlled: true,
                            backgroundColor: Colors.transparent,
                            context: context,
                            shape: const RoundedRectangleBorder(
                                borderRadius: BorderRadius.vertical(
                              top: Radius.circular(20),
                            )),
                            builder: (BuildContext context) => buildSheet(name,
                                imageLink, para, attendanceLetter, letter),
                          );
                        },
                        style: ButtonStyle(
                          backgroundColor:MaterialStateProperty.all(HexColor("#00B251")),
                          alignment: Alignment.center,
                          shape: MaterialStateProperty.all(
                            RoundedRectangleBorder(
                              borderRadius: BorderRadius.circular(10),
                            ),
                          ),
                        ),
                        child: const Text(
                          "View Details",
                          style: TextStyle(
                            fontSize: 6,
                            fontWeight: FontWeight.bold,
                          ),
                        ),
                      ),
                    ),
                  ),
                ),
              ],
            )),
      ),
    );
  }

  //popup sheet
  Widget buildSheet(String name, String imageLink, String para,
          String attendanceLetter, String letter) =>
      DraggableScrollableSheet(
        initialChildSize: 0.5,
        minChildSize: 0.3,
        maxChildSize: 0.7,
        builder: (_, controller) => Container(
          decoration: const BoxDecoration(
              color: Colors.white,
              borderRadius: BorderRadius.vertical(
                top: Radius.circular(20),
              )),
          padding: const EdgeInsets.all(16),
          child: ListView(
            controller: controller,
            children: [
              Center(
                child: SizedBox(
                    child: Image.asset(
                  imageLink,
                  width: 150,
                  height: 150,
                )),
              ),
              const SizedBox(
                height: 15,
              ),
              //name of the lecturer
              Text(
                name,
                style: const TextStyle(
                  fontSize: 17,
                ),
                textAlign: TextAlign.center,
              ),
              const SizedBox(
                height: 15,
              ),
              //paragraph about lecturer
              Text(
                para,
                style: const TextStyle(
                  fontSize: 15,
                ),
              ),
              const SizedBox(
                height: 15,
              ),
              //attendance of the today
              const Text(
                "Today's Attendance",
                style: TextStyle(
                  fontSize: 15,
                ),
              ),
              SizedBox(
                height: 30,
                child: Row(
                  children: [
                    Expanded(
                      flex: 1,
                      child: attendance("P", attendanceLetter),
                    ),
                    Expanded(
                      flex: 1,
                      child: attendance("A", attendanceLetter),
                    ),
                    Expanded(
                      flex: 1,
                      child: attendance("L", attendanceLetter),
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      );

  //attendance circle
  //first letter is shown in the circle attendanceLetter mean presant of the lecturer
  Center attendance(String letter, String attendanceLetter) {
    if (attendanceLetter == letter) {
      return Center(
        child: Container(
          decoration:
              BoxDecoration(shape: BoxShape.circle, color: HexColor("#3EC37A")),
          child: Center(
            child: Text(
              letter,
              style: const TextStyle(
                color: Colors.white,
              ),
            ),
          ),
        ),
      );
    } else {
      return Center(
        child: Container(
          decoration:
              BoxDecoration(shape: BoxShape.circle, color: HexColor("#959CA3")),
          child: Center(
            child: Text(
              letter,
              style: const TextStyle(
                color: Colors.white,
              ),
            ),
          ),
        ),
      );
    }
  }
}
