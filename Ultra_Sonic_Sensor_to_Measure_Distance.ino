#define echoPin 2 // attach echo pin of sensor of D2 of Arduino
#define trigPin 3 // attach trigger pin of sensor to D3 of Arduino

long duration; // variable to store the time taken for the pulse to reach receiver

int distance; // variable to store distance calculated using formula

void setup() {
  // put your setup code here, to run once:
  pinMode (trigPin, OUTPUT); // sets the trigPin as an OUTPUT
  pinMode (echoPin, INPUT); // sets the echoPin as an INPUT

  // Serial Communication is starting with a baud rate of 9600
  Serial.begin(9600);

  // The text to be printed in serial monitor
  Serial.println ("Distance measurement using Arduino Uno.");
  delay (500);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (trigPin, LOW);
  delayMicroseconds (2); // wait for 2 ms to avoid collison in serial monitor

  digitalWrite (trigPin, HIGH); // turn on the Trigger to generate pulse
  delayMicroseconds (10); // keep the Trigger "ON" for 10 ms to generate pulse for 10 ms.

  digitalWrite (trigPin, LOW); // Turn off the pulse trigger to stop pulse generation

  // If pulse reached the receiver echoPin become high then pulseIn () returns the time
  // taken by the pulse to reach the receiver

  duration = pulseIn (echoPin, HIGH);
  distance = duration * 0.0344 / 2; // calculate distance using time

  Serial.println ("Distance: ");
  Serial.print (distance); // Print the output in serial monitor
  Serial.println (" cm ");
  delay (100);
}
