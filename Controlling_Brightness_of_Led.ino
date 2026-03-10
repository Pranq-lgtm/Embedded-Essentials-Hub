int led = 0;
int brightness = 0;
int increase = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);
  brightness = brightness + increase;

  if(brightness < 0 || brightness > 255)
  {increase = increase;}
  delay(100);

}
