int notes[] = {262, 294, 330, 440};
int buzzer = 10;
int bulb = 11;

const int keyA = 9;
const int keyB = 8;
const int keyC = 7;
const int keyD = 6;


void setup() {
  // put your setup code here, to run once:
pinMode(keyA, INPUT_PULLUP);
pinMode(keyB, INPUT_PULLUP);
pinMode(keyC, INPUT_PULLUP);
pinMode(keyD, INPUT_PULLUP);
pinMode(1, OUTPUT);
pinMode(bulb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(1, LOW);
  while(digitalRead(keyA) == LOW){
    {tone (buzzer, notes[0]);
      digitalWrite(1, HIGH);
      delay(500);
      digitalWrite(1, LOW);}
    digitalWrite(bulb, HIGH);
  }

  while(digitalRead(keyB) == LOW){
    {tone (buzzer, notes[1]);}
    digitalWrite(bulb, HIGH);
  }

  while(digitalRead(keyC) == LOW){
    {tone (buzzer, notes[2]);}
    digitalWrite(bulb, HIGH);
  }

  while(digitalRead(keyD) == LOW){
    {tone (buzzer, notes[3]);}
    digitalWrite(bulb, HIGH);
  }
    
    noTone(buzzer);
    digitalWrite(bulb, HIGH);
}
    
