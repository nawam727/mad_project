import 'package:flutter/material.dart';
import 'package:mad_project/components/menu_setting.dart';
import 'package:mad_project/pages/drawer_screen.dart';


String name="Amal";
String email="amal7788@gmail.com";
String batch="21.1";
String degree="Software Engineering";
String index="44551";
String address="Pitipana, Homagama";

class ProfilePage extends StatelessWidget {
  const ProfilePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      drawer: DrawerScreen(),
      appBar: MenuSetting(
        title: "My Profile",
      ),
      body: ListView(
        children: [
          Padding(
                 padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 40),
                     child: Column(
               
                                 // profile picture  Section
      
                           children: [          
                              const Column(   
                                  children: [
                                    SizedBox(
                                       width: 160,
                                       height: 160,
                                        child: CircleAvatar(
                                        backgroundImage: AssetImage("assets/Profile.png"),
                                        child: Padding(
                                          padding:  EdgeInsets.symmetric(horizontal: 20,),
                                          child: Column(
                                            mainAxisAlignment: MainAxisAlignment.end,
                                            crossAxisAlignment: CrossAxisAlignment.end,
                                              
                                              children: [
                                                 Icon(Icons.camera,size: 50,
                                                 color: Colors.black,
                                              
                                                 ),
                                              ],
                                         
                                                 
                                                
                                        
                                          ),
                                        ),
                                        
                                        ),
                                    ),
                                  ],    
                                ),    
      
                           
                                const SizedBox(height: 40),
      
                                  // Name  Section
      
                            Container(                          
                               alignment: Alignment.center,
                               margin: const EdgeInsets.symmetric(horizontal: 30, vertical: 10),
                               height: 50,
                               width:double.infinity,
                               decoration: BoxDecoration(
                                 color: const Color.fromARGB(255, 175, 255, 178),
                                  borderRadius: BorderRadius.circular(10), //border corner radius
                                  boxShadow:[ 
                                    BoxShadow(
                                       color: Colors.grey.withOpacity(0.5), //color of shadow
                                       spreadRadius: 5, //spread radius
                                       blurRadius: 7, // blur radius
                                       offset: const Offset(0, 2), // changes position of shadow
                                       //first paramerter of offset is left-right
                                       //second parameter is top to down
                                    ),
                                    //you can set more BoxShadow() here
                                   ],
                               ),
                               child: Text('Name : $name', style: const TextStyle(
                                 fontSize:20,
                               ),),
                            ),  
      
                                //Email Section
                             
                             Container(
                               alignment: Alignment.center,
                               margin: const EdgeInsets.symmetric(horizontal: 30, vertical: 10),
                               height: 50,
                               width:double.infinity,
                               decoration: BoxDecoration(
                                 color:const Color.fromARGB(255, 175, 255, 178),
                                  borderRadius: BorderRadius.circular(10), //border corner radius
                                  boxShadow:[ 
                                    BoxShadow(
                                       color: Colors.grey.withOpacity(0.5), //color of shadow
                                       spreadRadius: 5, //spread radius
                                       blurRadius: 7, // blur radius
                                       offset: const Offset(0, 2), // changes position of shadow
                                       //first paramerter of offset is left-right
                                       //second parameter is top to down
                                    ),
                                    //you can set more BoxShadow() here
                                   ],
                               ),
                               child: Text("Email : $email", style: const TextStyle(
                                 fontSize:20,
                               ),),
                            ),  
      
      
                                   // Batch Section
      
                            Container(
                               alignment: Alignment.center,
                               margin: const EdgeInsets.symmetric(horizontal: 30, vertical: 10),
                               height: 50,
                               width:double.infinity,
                               decoration: BoxDecoration(
                                 color: const Color.fromARGB(255, 175, 255, 178),
                                  borderRadius: BorderRadius.circular(10), //border corner radius
                                  boxShadow:[ 
                                    BoxShadow(
                                       color: Colors.grey.withOpacity(0.5), //color of shadow
                                       spreadRadius: 5, //spread radius
                                       blurRadius: 7, // blur radius
                                       offset: const Offset(0, 2), // changes position of shadow
                                       //first paramerter of offset is left-right
                                       //second parameter is top to down
                                    ),
                                    //you can set more BoxShadow() here
                                   ],
                               ),
                               child: Text("Batch : $batch", style: const TextStyle(
                                 fontSize:20,
                               ),),
                            ),  
      
      
                                    // Degree Section 
      
                            Container(
                               alignment: Alignment.center,
                               margin:const EdgeInsets.symmetric(horizontal: 30, vertical: 10),
                               height: 50,
                               width:double.infinity,
                               decoration: BoxDecoration(
                                 color: const Color.fromARGB(255, 175, 255, 178),
                                  borderRadius: BorderRadius.circular(10), //border corner radius
                                  boxShadow:[ 
                                    BoxShadow(
                                       color: Colors.grey.withOpacity(0.5), //color of shadow
                                       spreadRadius: 5, //spread radius
                                       blurRadius: 7, // blur radius
                                       offset: const Offset(0, 2), // changes position of shadow
                                       //first paramerter of offset is left-right
                                       //second parameter is top to down
                                    ),
                                    //you can set more BoxShadow() here
                                   ],
                               ),
                               child: Text("Degree : $degree", style: const TextStyle(
                                 fontSize:20,
                               ),),
                            ),  
      
      
                                    // Index Number Section
      
      
                            Container(
                               alignment: Alignment.center,
                               margin:const EdgeInsets.symmetric(horizontal: 30, vertical: 10),
                               height: 50,
                               width:double.infinity,
                               decoration: BoxDecoration(
                                 color:const Color.fromARGB(255, 175, 255, 178),
                                  borderRadius: BorderRadius.circular(10), //border corner radius
                                  boxShadow:[ 
                                    BoxShadow(
                                       color: Colors.grey.withOpacity(0.5), //color of shadow
                                       spreadRadius: 5, //spread radius
                                       blurRadius: 7, // blur radius
                                       offset: const Offset(0, 2), // changes position of shadow
                                       //first paramerter of offset is left-right
                                       //second parameter is top to down
                                    ),
                                    //you can set more BoxShadow() here
                                   ],
                               ),
                               child: Text("Index No : $index", style: const TextStyle(
                                 fontSize:20,
                               ),),
                            ),  
      
      
                                  //Address  section  
      
                            Container(
                               alignment: Alignment.center,
                               margin: const EdgeInsets.symmetric(horizontal: 30, vertical: 10),
                               height: 50,
                               width:double.infinity,
                               decoration: BoxDecoration(
                                 color:const Color.fromARGB(255, 175, 255, 178),
                                  borderRadius: BorderRadius.circular(10), //border corner radius
                                  boxShadow:[ 
                                    BoxShadow(
                                       color: Colors.grey.withOpacity(0.5), //color of shadow
                                       spreadRadius: 5, //spread radius
                                       blurRadius: 7, // blur radius
                                       offset: const Offset(0, 2), // changes position of shadow
                                       //first paramerter of offset is left-right
                                       //second parameter is top to down
                                    ),
                                    //you can set more BoxShadow() here
                                   ],
                               ),
                               child: Text("Address: $address", style: const TextStyle(
                                 fontSize:20,
                               ),),
                            ),  
                       ],  
          ), 
              ),
        ],
      ),
       
    );
  }
}
