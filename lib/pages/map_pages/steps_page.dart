import 'package:flutter/material.dart';
import '../../Service/steps_service.dart';

class StepsPage extends StatefulWidget {
  const StepsPage({Key? key}) : super(key: key);

  @override
  State<StepsPage> createState() => _StepsPageState();
}

class _StepsPageState extends State<StepsPage> {
  List<PathModel> paths = [];
  int selectedPathIndex = 0;

  @override
  void initState() {
    super.initState();
    loadPaths();
  }

  void loadPaths() async {
    final List<PathModel> loadedPaths = await StepsService.loadPaths();
    setState(() {
      paths = loadedPaths;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          Container(
            decoration: BoxDecoration(
              border: Border.all(color: Colors.grey),
              borderRadius: BorderRadius.circular(8.0),
            ),
            padding: EdgeInsets.symmetric(horizontal: 16.0),
            child: Center(
              child: DropdownButton<int>(
                value: selectedPathIndex,
                items: paths.map((path) {
                  return DropdownMenuItem<int>(
                    value: paths.indexOf(path),
                    child: Text(path.name),
                  );
                }).toList(),
                onChanged: (int? newIndex) {
                  setState(() {
                    selectedPathIndex = newIndex ?? 0;
                  });
                },
              ),
            ),
          ),


          Expanded(
            child: ListView.builder(
              itemCount: paths[selectedPathIndex].steps.length,
              itemBuilder: (BuildContext context, int index) {
                return ListTile(
                  leading: CircleAvatar(
                    child: Text((index + 1).toString()), // Step number
                  ),
                  title: Text(paths[selectedPathIndex].steps[index]),
                );
              },
            ),
          ),
        ],
      ),
    );
  }
}
