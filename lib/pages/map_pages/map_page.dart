import 'dart:math';

import 'package:flutter/material.dart';
import 'package:google_maps_flutter/google_maps_flutter.dart';

class MapScreen extends StatefulWidget {
  final String x1;
  final String y1;
  final String x2;
  final String y2;

  MapScreen({required this.x1, required this.y1, required this.x2, required this.y2});

  @override
  _MapScreenState createState() => _MapScreenState(x1, y1, x2, y2);
}

class _MapScreenState extends State<MapScreen> {
  late GoogleMapController _googleMapController;
  Marker _origin;
  Marker _destination;
  String x1;
  String y1;
  String x2;
  String y2;
  Set<Polyline> _polylines = {};

  _MapScreenState(String this.x1, String this.y1,String this.x2, String this.y2)

      : _origin = Marker(
    markerId: MarkerId('origin'),
    position: LatLng(double.parse(x1), double.parse(y1)),


  ),
        _destination = Marker(
          markerId: MarkerId('destination'),
          position: LatLng(double.parse(x2), double.parse(y2)),
  );



  static const _initialCameraPosition = CameraPosition(
    target: LatLng(6.821132058916255, 80.04029152192247),
    zoom: 17.5,
    tilt: 50,
  );

  @override
  void initState() {
    super.initState();
    // Initialize markers
    _origin = Marker(
      markerId: MarkerId('origin'),
      position: LatLng(double.parse(x1), double.parse(y1)),
    );

    _destination = Marker(
      markerId: MarkerId('destination'),
      position: LatLng(double.parse(x2), double.parse(y2)),
    );

    // Add the polyline
    _addPolyline();
  }

  @override
  void dispose() {
    _googleMapController.dispose();
    super.dispose();
  }

  //forcus to maiun location and show both locations
  void onMapCreated(GoogleMapController controller) {
    _googleMapController = controller;

    double minLat = min(_origin.position.latitude, _destination.position.latitude);
    double minLng = min(_origin.position.longitude, _destination.position.longitude);
    double maxLat = max(_origin.position.latitude, _destination.position.latitude);
    double maxLng = max(_origin.position.longitude, _destination.position.longitude);

    LatLngBounds bounds = LatLngBounds(
      southwest: LatLng(minLat, minLng),
      northeast: LatLng(maxLat, maxLng),
    );

    _googleMapController.animateCamera(
      CameraUpdate.newLatLngBounds(
        bounds,
        50, // Padding in pixels, adjust as needed

      ),
    );
  }


  void _addPolyline() {
    PolylineId id = PolylineId('polyline');
    List<LatLng> points = [
      _origin.position,
      _destination.position,
    ];

    Polyline polyline = Polyline(
      polylineId: id,
      color: Colors.blue, // Color of the polyline
      points: points,
      width: 5, // Width of the polyline
    );

    setState(() {
      _polylines.add(polyline);
    });
  }


  void toggleCoordinates(bool newValue) {
    setState(() {
      if (newValue) {
        // Use the provided coordinates
        _origin = Marker(
          markerId: MarkerId('origin'),
          position: LatLng(double.parse(x1), double.parse(y1)),
        );
      } else {
        // Use the default coordinates
        _origin = Marker(
          markerId: MarkerId('origin'),
          position: LatLng(double.parse(x2), double.parse(y2)),
        );
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Stack(
        children: [
          GoogleMap(
            myLocationEnabled: false,
            zoomControlsEnabled: true,
            initialCameraPosition: _initialCameraPosition,
            onMapCreated: onMapCreated,
            markers: {
              if (_origin != null) _origin,
              if (_destination != null) _destination,
            },
            polylines: _polylines,
          ),

        ],
      ),
    );
  }
}
