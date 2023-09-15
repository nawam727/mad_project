import 'package:flutter/material.dart';
import 'package:mad_project/components/back_dots.dart';

class TermsService extends StatefulWidget {
  const TermsService({super.key});

  @override
  State<TermsService> createState() => _TermsServiceState();
}

class _TermsServiceState extends State<TermsService> {
  @override
  Widget build(BuildContext context) {
    return  Scaffold(
      appBar: BackDots(title: "License",),
         body: Padding(
           padding: const EdgeInsets.all(15.0),
           child: SafeArea(
              child: ListView(
                  children: const[
                    Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      
                      children: [
                         Text("License and Agriment", 
                            style: TextStyle(fontSize: 20.0, fontWeight: FontWeight.bold),
                         ),
                         
                         SizedBox( height: 10.0,),
         

                          Text("Hi we are nsbm 21.1 batch in faculty of computing students. we are developed the N-SIDE app for our Mobile application development module as our final group project. so we hope to create our campus navigation system and lecture times and venues.",
                           style: TextStyle( fontSize: 15.0),),


                           SizedBox( height: 10.0,),
                
                          Text("Our Terms", 
                            style: TextStyle(fontSize: 20.0, fontWeight: FontWeight.bold),
                         ),
                         
                         SizedBox( height: 10.0,),
         

                          Text("hi we are nsbm 21.1 batch in faculty of computing students. we are developed the N-SIDE app for our Mobile application development module as our final group project. so we hope to create our campus navigation system and lecture times and venues.",
                           style: TextStyle( fontSize: 15.0),),


                           SizedBox( height: 10.0,),
                
                          Text("Our Services", 
                            style: TextStyle(fontSize: 20.0, fontWeight: FontWeight.bold),
                         ),
                         
                         SizedBox( height: 10.0,),
         

                          Text("hi we are nsbm 21.1 batch in faculty of computing students. we are developed the N-SIDE app for our Mobile application development module as our final group project. so we hope to create our campus navigation system and lecture times and venues.",
                           style: TextStyle( fontSize: 15.0),),
                      ],
                    )
                  ],
              ),
           
               ),
         ),
    );
  }
}