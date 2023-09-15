import 'package:flutter/material.dart';
import 'package:hexcolor/hexcolor.dart';
import 'package:mad_project/pages/navbar_pages/calendar_page.dart';
import 'package:mad_project/pages/navbar_pages/home_page.dart';
import 'package:mad_project/pages/navbar_pages/profile_page.dart';
import 'package:mad_project/pages/navbar_pages/service_page.dart';

class CustomIcon extends StatelessWidget {
  final String imagePath;
  final bool isSelected;
  final Function() onTap;
  final EdgeInsetsGeometry padding;

  CustomIcon({
    required this.imagePath,
    required this.isSelected,
    required this.onTap,
    this.padding = const EdgeInsets.symmetric(vertical: 4.0),
  });

  @override
  Widget build(BuildContext context) {
    Color iconColor = isSelected ? HexColor("#00B251") : Colors.black;

    return GestureDetector(
      onTap: onTap,
      child: Padding(
        padding: padding,
        child: ColorFiltered(
          colorFilter: ColorFilter.mode(iconColor, BlendMode.srcIn),
          child: Image.asset(
            imagePath,
            width: 30,
            height: 30,
          ),
        ),
      ),
    );
  }
}

class NavBar extends StatefulWidget {
  const NavBar({super.key});

  @override
  State<NavBar> createState() => _NavBarState();
}

class _NavBarState extends State<NavBar> {
  int _selectedIndex = 0;

  List<Widget> _widgetOptions = <Widget>[
    HomePage(),
    CalendarPage(),
    ServicePage(),
    ProfilePage()
  ];

  void onItemTap(int index) {
    setState(() {
      _selectedIndex = index;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: _widgetOptions.elementAt(_selectedIndex),
      ),
      bottomNavigationBar: Material(
        elevation: 6.0,
        child: BottomNavigationBar(
          //fixedColor: Colors.white,
          items: [
            BottomNavigationBarItem(
              icon: CustomIcon(
                imagePath: 'assets/icons/h.png',
                isSelected: _selectedIndex == 0,
                onTap: () => onItemTap(0),
                padding: EdgeInsets.only(top: 8.0),
              ),
              label: '',
            ),
            BottomNavigationBarItem(
              icon: CustomIcon(
                imagePath: 'assets/icons/t.png',
                isSelected: _selectedIndex == 1,
                onTap: () => onItemTap(1),
                padding: EdgeInsets.only(top: 8.0),
              ),
              label: '',
            ),
            BottomNavigationBarItem(
              icon: CustomIcon(
                imagePath: 'assets/icons/a.png',
                isSelected: _selectedIndex == 2,
                onTap: () => onItemTap(2),
                padding: EdgeInsets.only(top: 8.0),
              ),
              label: '',
            ),
            BottomNavigationBarItem(
              icon: CustomIcon(
                imagePath: 'assets/icons/u.png',
                isSelected: _selectedIndex == 3,
                onTap: () => onItemTap(3),
                padding: EdgeInsets.only(top: 8.0),
              ),
              label: '',
            ),
          ],
          currentIndex: _selectedIndex,
          onTap: onItemTap,
          type: BottomNavigationBarType.fixed,
          selectedFontSize: 10.0, // Adjust this value as needed
          unselectedFontSize: 10.0,
          //selectedItemColor: Colors.blue,
        ),
      ),
    );
  }
}
