#include <Servo.h>

Servo motor1;

int potpin = A0;
int val = 0;

void setup()
{
motor1.attach(9);
}

void loop()
{
val = analogRead(potpin);
val = map(val, 0, 1023, 0, 180);
motor1.write(val);
delay(15);
}