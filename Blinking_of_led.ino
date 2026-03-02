const int ledPin = 3;
const int buttonPin = 7;
int blinkDelay = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); /* Instruction to Arduino to connect pin number 7 to an internal "Pull Up" resistor or to a logic HIGh Level*/
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == LOW) {
    blinkDelay = 200;
  } else {
    blinkDelay = 1000;
  }

  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);
  digitalWrite(ledPin, LOW);
  delay(blinkDelay);
}
