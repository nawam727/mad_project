import 'package:firebase_messaging/firebase_messaging.dart';
import 'package:mad_project/main.dart';

class FirebaseApi {
  //firebase messaging instance
  final _firebaseMessaging = FirebaseMessaging.instance;

  //fuction to initialize notification
  Future<void> initNotification() async {
    await _firebaseMessaging.requestPermission();

    final fCMToken = await _firebaseMessaging.getToken();

    print("Token: $fCMToken");

    initPushNotifications();
  }

  //function to handle received notification
  void handleMessage(RemoteMessage? message) {
    if (message == null) return;

    navigatorKey.currentState?.pushNamed(
      '/notification_screen',
      arguments: message,
    );
  }

  //function to initialize background settings
  Future<void> initPushNotifications() async {
    FirebaseMessaging.instance.getInitialMessage().then(handleMessage);

    FirebaseMessaging.onMessageOpenedApp.listen(handleMessage);
  }
}
