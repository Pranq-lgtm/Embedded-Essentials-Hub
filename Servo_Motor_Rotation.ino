#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9); // attach servo to pin 9
}

void loop() {
  myservo.write(45); // move servo to 45 degrees
  delay(1000);

  myservo.write(90); // move servo to 90 degrees
  delay(1000);

  myservo.write(180); // move servo to 180 degrees
  delay(1000);

  myservo.write(0); // move servo back to 0 degrees
  delay(1000);
}
