import 'package:flutter/material.dart';

class BackSearch extends StatelessWidget implements PreferredSizeWidget {
  final String title;

  BackSearch({
    required this.title,
  });

  @override
  Size get preferredSize =>
      Size.fromHeight(55);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Material(
          elevation: 2.0,
          child: Container(
            height: preferredSize.height,
            color: Colors.white,
            child: Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              children: [
                //Menu Icon
                IconButton(
                    icon: Image.asset(
                      'assets/icons/back.png',
                      color: Colors.black,
                      width: 32,
                      height: 32,
                    ),
                    onPressed: () {
                      Navigator.pop(context);
                    } //onMenuPressed,
                    ),
        
                //Centered text
                Text(
                  title,
                  style: TextStyle(color: Colors.black, fontSize: 17),
                ),
        
                //Search icon
                IconButton(
                  icon: Image.asset(
                    'assets/icons/search.png',
                    width: 21,
                    height: 21,
                  ),
                  onPressed: () {
                    showSearch(
                        context: context, delegate: CustomSearchDelegate());
                  },
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}

//search bar
class CustomSearchDelegate extends SearchDelegate {
  List<String> searchTerms = [
    "Rasika Ranaweera",
    "Pavithra Subashini",
    "Canteen",
    "Auditoriam",
  ];

  @override
  List<Widget>? buildActions(BuildContext context) {
    return [
      Padding(
        padding: const EdgeInsets.only(right: 8.0),
        child: IconButton(
          onPressed: () {
            query = '';
          },
          icon: Image.asset(
            'assets/icons/close.png',
            color: Colors.black,
            width: 17,
            height: 17,
          ),
        ),
      ),
    ];
  }

  @override
  Widget? buildLeading(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(right: 8.0),
      child: IconButton(
        onPressed: () {
          close(context, null);
        },
        icon: Image.asset(
          'assets/icons/back.png',
          color: Colors.black,
          width: 32,
          height: 32,
        ),
      ),
    );
  }

  @override
  Widget buildResults(BuildContext context) {
    List<String> matchQuery = [];
    for (var word in searchTerms) {
      if (word.toLowerCase().contains(query.toLowerCase())) {
        matchQuery.add(word);
      }
    }
    return ListView.builder(
      itemCount: matchQuery.length,
      itemBuilder: (context, index) {
        var result = matchQuery[index];
        return ListTile(
          title: Text(result),
        );
      },
    );
  }

  @override
  Widget buildSuggestions(BuildContext context) {
    List<String> matchQuery = [];
    for (var word in searchTerms) {
      if (word.toLowerCase().contains(query.toLowerCase())) {
        matchQuery.add(word);
      }
    }
    return ListView.builder(
      itemCount: matchQuery.length,
      itemBuilder: (context, index) {
        var result = matchQuery[index];
        return ListTile(
          title: Text(result),
        );
      },
    );
  }
}
