import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/components/back_search.dart';
import 'package:mad_project/pages/lecture_cabin_state_page.dart';

class LecturerAvailabilityPage extends StatelessWidget {
  const LecturerAvailabilityPage({super.key});

  @override
  Widget build(BuildContext context) {
    Size size = MediaQuery.of(context).size;
    String attendanceLetter = "A";
    String letter = "A";
    return Scaffold(
        appBar: BackSearch(
          title: "Lecturers Availability",
        ),
        body: SafeArea(
            child: ListView(children: [

      //light green background 
      Padding(
        padding: EdgeInsets.all(size.width * 0.05),
        child: Container(
          decoration: BoxDecoration(
              color: HexColor("#E6FFF1"),
              borderRadius: BorderRadius.circular(10),
              border: Border.all(
                color: HexColor("#00B251"), // Set your desired border color here
                width: 0.1,
              ),
            ),
          height: size.height * 0.85,
          child: Padding(
            padding: EdgeInsets.only(
                top: size.width * 0.023, left: size.width * 0.025),
            child: SizedBox(
              width: double.infinity,
              child: Row(
                children: [
                  Column(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      //lecturer card
                      lecturerCard(size, "assets/images/rasika.png", "Dr.Rasika \n Ranaweera",
                          attendanceLetter, context, "Dr. Rasika Ranaweera received his bachelor’s degree (B.Sc in Information Technology) from University of Moratuwa, Katubedda, Sri Lanka in 2006. Upon completion of his first degree, he joined Redgecrest Financial Inc. Colombo, Sri Lanka as a Software Engineer for two years, before moving to Japan in 2008.\nWhile enrolled in both masters and doctoral programs at the University of Aizu, Japan, he worked at NST Laboratory, Japan, as a Research Assistant and a Part-time Programmer. He later joined Aizu Laboratory Inc. (former NST Laboratory) as a full-time Engineer. During his tenure as a Programmer/Engineer he has involved in various R&D projects that ranges from image processing, 3D printing, web security, and syntax analysis. Dr. Ranaweera has over twenty publications in various competitive journals such as MIT Presence and reputed international conferences such as CYBERWORLDS, CASA, and AES and many others.\nDr. Ranaweera’s research interests include narrowcasting, multipresence, multimodal interfaces, gestural interfaces, immersive virtual environments, and abstract syntax trees. He has received SAISUA Scholarship (Support Association for International Students of the University of Aizu) in 2008, Rotary Scholarship in 2009, JASSO (Japan Student Services Organization) in 2010, 2011, & 2012, and he was also selected as a Research Assistant to have preferential treatment by the University of Aizu in 2012. During leisure time he enjoys cycling, movies, and music.", letter),

                      lecturerCard(size, "assets/images/dul.png", "Mrs.Hirushi \n Dilpriya", attendanceLetter,
                          context, "Ms. Hirushi Dilpriya Thilakarathna received a Bachelor of Science (Hons.) Degree in Mathematics with the first class from the University of Sri Jayewardenepura, Sri Lanka. She was the gold medalist from the Department of Mathematics in 2020: A Department Award Dr. Sunethra Weerakoon Memorial Gold Medal; and Dr. Srimathi Wewala Gold Medal for the best performance in Mathematics. Upon completing her first degree, currently, she is reading for her Master of Philosophy (MPhil) at the University of Sri Jayewardenepura. It is related to subject areas in Business Statistics, Actuarial Science, and Data Science. She started her career as a teaching instructor andbecame a temporary lecturer at her University. Currently, she works in the school of computing of NSBM and delivers lectures in Advanced Mathematics, Probability, Inference, Descriptive Statistics, and computational thinking development.", letter),
                      lecturerCard(size, "assets/images/chala.png", "Mrs.Chalani \n Oruthotaarachchi", attendanceLetter,
                          context, "Ms. Chalani Oruthotaarachchi graduated from University of Colombo School of Computing with a Frist Class (Honours) degree in Bachelor of Science in Information and Communication Technology. She is a Sun Certified Java Programmer and has completed the diploma level in British Computer Society. Prior to joining School of Computing at NSBM she worked as an Instructor and an Assistant Lecturer at University of Colombo School of Computing. Her teaching interests are in Business Information Systems, Systems Analysis and Design, Business Process Management, and IT Project Management. Her research interests are on trends in business and information systems and IT for Development.", letter),
                      lecturerCard(size, "assets/images/bata.png","Mr.Dilhara\n Batanarachchi", attendanceLetter,
                          context, "Mr. Dilhara Batan Arachchige is attached to the Department of Network & Security of Faculty of Computing of NSBM Green University. He completed his Bachelor of Science degree with a First Class Honours from University of Kelaniya and reading for his masters in the field of Cybersecurity. He selected for the Dean’s Award list (Academic year 2016/2017) of University of Kelaniya for his academic excellence. After graduation, he joined NSBM Green University as an instructor and thereafter worked as a Teaching Assistant. Currently, he is working as a Lecturer attached to the Faculty of Computing. His research interests lie in the fields of digital forensics and machine learning applications in cybersecurity domain.", letter),
                    ],
                  ),
                  Column(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      //lecturer card
                      lecturerCard(size, "assets/images/pavi.png", "Mrs.Pavithra \n Subashini", attendanceLetter,
                          context, "Ms. Pavithra Subashini is a graduate from the University of Ruhuna with a Bachelor of Science special degree. She completed her MBA in IT from the University of Moratuwa. Currently, she is following her PhD in Computer Science and Engineering at the University of Moratuwa. She possesses 13 years of global IT Industry experience at Virtusa, including experience in project supervision and lecturing. Further, she has Industry experience in software project management, quality assurance, training, and hiring. Via working for a global company like Virtusa she gained excellent experience with multinational clients with the latest technology and multidiscipline culture with a strong process orientation.\n Currently, she delivers lectures in Software Engineering, Human Computer Interactions, Software Project Management, Research Methodology, Professional Development and Entrepreneurship. She provides her service as an Industry-University representative. She is also the Course Director for Post Graduate Studies at the Faculty of Computing. \n Her current research interests include Software Process Improvement, Agile Software development, Cyber security, Entrepreneurship, Project management, IoT, Big data, Agriculture, Quality Assurance, Human Computer Interactions.\n She has exposed to various training programmes during her tenure in the Industry and academic life. She has done several publications and received appreciation as a journal reviewer.", letter),
                      lecturerCard(size, "assets/images/safa.png", "Mr.Mohamed \n Shafraz", attendanceLetter,
                          context, "Mohamed Shafraz is a Senior Lecturer of School of Computing at NSBM and he has joined NSBM after 8 years of service at NIBM. He started his career at NIBM as a Consultant / Lecturer and later, was promoted as Acting Head – NIBM Kurunegala. During his service he was actively involved in administrative, marketing, advertising and event management activities and led the NIBM Kurunegala team in addition to his main responsibility – lecturing. Prior to that he had been employed at one of the leading private higher educational institutes as an IT Lecturer and his position had been raised to the designation of Assistant Branch Manager by the time he left the institution. He further has obtained industrial exposure from Ernst & Young, Sri Lanka as Technology Advisory Lead and for Millennium IT as an Associate Software Support Engineer.\nHis interest in teaching is focused on the area of Software Engineering / Programming. Specially he is interested in teaching the programming languages and areas such as C, C++, Core of Java , Data Structures & Algorithms , System Analysis Design and Information Systems . He has obtained his basic degree , Bachelor of Information Technology from University of Colombo School of Computing. Then he has completed Masters in Information Technology (MSc in IT) with the research titled “Job propensity of IT graduates in public & private Universities”. Due to his interest in management studies he has completed Master of Business Administration (MBA) at University of Colombo, Faculty of Management Finance. In addition to the above mentioned degrees and postgraduate programs he has obtained some other professional IT qualifications such as Australian Computer Society (ACS) examinations in IT and International Computer Driving License (ICDL) examinations.\nHe represented NIBM and has travelled overseas such as Peru, Lima for an international conference organized by Information Access Agency, Korea and AIT, Thailand for a workshop on advanced training of management.", letter),
                      lecturerCard(size, "assets/images/chama.png", "Mr.Chamara \n Dissanayake", attendanceLetter,
                          context, "Mr. Chamara Disanayake graduated from the Department of Computer Science & Engineering, University of Moratuwa in 2002 and completed his Master’s (Research) Degree in computer science in 2005 from the same university. He obtained his second masters in Master of Business Studies in 2015 from the faculty of post graduate studies, University of Colombo.\nChamara started his professional career as a systems engineer in 2005 and continued his career in computer systems and networking industry for over 15 years. He became the head of IT at LK Domain Registry which manages the country code top level domain lk domain for Sri Lanka. While serving the IT industry, Chamara started his academic career in 2007 as a visiting lecturer attached to the Computer Science and Engineering Department, University of Moratuwa. He has over 13 years of teaching experience in undergraduate and post graduate academic programs at the main technical universities in Sri Lanka in Network and Systems engineering curriculums. Being an IT professional Chamara has contributed many International and local conferences in the capacity of a speaker and a lecturer.\nChamara joined the academic staff of the faculty of Computing of NSBM Green University in 2021 as a senior lecturer attached to the department of Network and Security.", letter),
                      lecturerCard(size, "assets/images/naji.png", "Mr.Naji \n Saravanabavan", attendanceLetter,
                          context, "Saravanapavan Nasiketha is a Senior Lecturer of School of Computing at NSBM and he has joined NSBM after 7 years of service at NIBM. He started his career at NIBM as a Consultant / Lecturer and worked in several Regional centers like Jaffna, Kurunegala and Kandy. During his service he was actively involved in marketing project Supervisions and some special event coordinating in addition to his main responsibility – lecturing. Prior to that he had been employed at University of Jaffna (Vavuniya campus) as instructor/Demonstrator.\nHis interest in teaching is focused on the area of Database Systems & web development. Specially he is interested in teaching Database Management systems, Data warehouse and data Mining, Web Application development. He has obtained his basic degree, Bachelor of computer science from Bharathidasan university, India. Then he has completed Master of computer application from Anna university, Chennai, India during the period he has done the final year project with compact vehicle research and development establishment (CVRDE-Avadi), India. Due to his interest in management studies he has completed Master of Business Administration (MBA) at University of Colombo, Faculty of Management Finance.", letter),
                    ],
                  ),
                  Column(
                    mainAxisAlignment: MainAxisAlignment.start,
                    children: [
                      //lecturer card
                      lecturerCard(size, "assets/images/gayan.png","Mr.Gayan \n Perera", attendanceLetter,
                          context, "Mr. Gayan Rukshantha is a graduate of NSBM Green University with a first-class (Hons) degree in Bachelor of Science in Management Information Systems (special). Currently, he is reading for his Master’s in Business Analytics and Data Science at the University of Colombo, School of Computing.\nBefore joining academia, he was an Industrial Engineer at MAS Slimline Pannala, after his graduation, he joined NSBM Green University as a Teaching Assistant and currently working as a Lecturer attached to the Faculty of Computing. He delivers modules such as Operating Systems, Data Structures and Algorithms, Fundamentals of Mathematics, Computational Thinking, and Computer Architecture. His research interests are in the fields of Data Programming, Machine Learning, and Applied Statistics", letter),
                      lecturerCard(size, "assets/images/isu.png", "Mr.Isuru Sri \n Bandara", attendanceLetter,
                          context, "Mr. Isuru Sri Bandara Nishshanka is a graduate of Plymouth University, UK with first-class (Hons) in Bachelor of Science in Computer Networks and reading for his masters in the field of Cyber Security and Forensic. He achieved the Best Performer Award of Computer Network batch of 2019. Before he joins academia, he was a Network and System Administrator at IT division of NSBM Green University, after his graduation, he joined NSBM Green University as a Teaching Assistant and currently working as a Temporary Lecturer attached to the Faculty of Computing. His research interests lie in the fields of digital forensics and IOT security domain and has published two research articles in the field of IOT Security and Cyber law.", letter),
                      lecturerCard(size, "assets/images/aththa.png", "Mr.Chamindra \n Aththanayake", attendanceLetter,
                          context, "Ongoing Research\nSolar power management and monitoring system (Initiated with NSBM Dialog 5G Innovation Center)\nRemote patient monitoring system (Initiated with NSBM Dialog 5G Innovation Center)\nUrban Precision agriculture automation", letter),
                      lecturerCard(size, "assets/images/nethmi.png", "Mrs.Nethmi \n Weerasinghe", attendanceLetter,
                          context, "Ms. Nethmi Weerasingha is a graduate from the NSBM Green University with a first class (GPA – 3.89) in Bachelor of Science in Management Information System(special). At present, she is reading for her MSc in Data Science at Postgraduate Institute of Science, University of Peradeniya. Furthermore, she is also a passed finalist of the Chartered Institute of Management Accountants (CIMA), United Kingdom. She commenced her academic career at NSBM Green University as a Lab Instructor, then got promoted as a Teaching Assistant in the same university and currently employed as a Lecturer attached to the Department of Data Science at Faculty of Computing in NSBM Green University.\nAlso, she pursued her corporate career as an In-plant Trainee in Industrial Engineering at MAS Active (Pvt) Ltd – Linea Intimo. Beyond being an academic, she is the course director of Computing Foundation and Advanced Certificate Programs and the Mistress-in-charge of the Music club of NSBM. Being an academic, her research interests are in the field of Databases and Data Science including Image Processing, Machine learning, Data Analysis & Models and Data Visualization using Python programming and R programming etc.", letter),
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
                onPressed: () {
                 Navigator.pushReplacement(context, MaterialPageRoute(builder: (context)=> const CabinState()));
                },
                style: ButtonStyle(
                  shape: MaterialStateProperty.all(
                    RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(10)),
                  ),
                  backgroundColor:
                      MaterialStateProperty.all(HexColor("#E6FFF1")),
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
                      Icons.navigate_next,
                      color: HexColor("#00B251"),
                      size: 35,
                    ),
                  ],
                ),
              )),
        ),
      ),
    ])));
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
        padding: EdgeInsets.only(left:size.width * 0.009,top:size.width * 0.015,bottom: size.width * 0.015,right: size.width * 0.015),
        child: Container(
            width: size.width * (0.26),
            height: size.width * (0.39),
            decoration: BoxDecoration(
              color: const Color.fromARGB(255, 255, 255, 255),
              borderRadius: BorderRadius.circular(7),
              border: Border.all(
                color: HexColor("#00B251"), // Set your desired border color here
                width: 0.1,
              ),
            ),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: [
                Expanded(

                  //image of the lecture's card
                  flex: 2,
                  child: Padding(
                    padding: EdgeInsets.only(
                      top: size.width * 0.01,
                    ),
                    child: CircleAvatar(
                      radius: 29,
                      backgroundImage: AssetImage(imageLink),
                    ),
                  ),
                ),
                //name of the lecture's card
                Expanded(
                  flex: 1,
                  child: Padding(
                    padding: EdgeInsets.only(top: size.width * 0.01,bottom: size.width*0.002),
                    child: Text(
                      name,
                      style: const TextStyle(
                        fontSize: 12,
                        fontWeight: FontWeight.bold,
                      ),
                      textAlign: TextAlign.center,
                    ),
                  ),
                ),
                Expanded(
                  flex: 1,
                  child: Padding(
                    padding: EdgeInsets.only(
                        top: size.width * 0.004,
                        left: size.width * 0.03,
                        right: size.width * 0.03,
                        bottom: size.width*0.001),
                    //attendance
                    child: Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        Expanded(
                          flex: 1,
                          child: attendance("P", attendanceLetter),
                        ),
                        SizedBox(
                          width: size.width * 0.008,
                        ),
                        Expanded(
                          flex: 1,
                          child: attendance("A", attendanceLetter),
                        ),
                        SizedBox(
                          width: size.width * 0.008,
                        ),
                        Expanded(
                          flex: 1,
                          child: attendance("L", attendanceLetter),
                        ),
                      ],
                    ),
                  ),
                ),
                SizedBox(
                  height: size.width * 0.01,
                ),
                //view Details Button
                Expanded(
                  flex: 1,
                  child: SizedBox(
                    child: Padding(
                      padding: EdgeInsets.only(
                          bottom: size.width * 0.01,
                          left: size.width * 0.02,
                          right: size.width * 0.02,
                          top:size.width * 0.005,
                          ),
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
                          backgroundColor:
                              MaterialStateProperty.all(HexColor("#00B251")),
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
                            fontSize: 8,
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
                  width: 90,
                  height: 90,
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
              BoxDecoration(shape: BoxShape.circle, color: HexColor("#00B251")),
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
