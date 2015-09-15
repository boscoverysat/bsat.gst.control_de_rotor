/*
  Motor Test.
  Author: @goyoregalado
  
*/
 
const char FWD = 'W';
const char BCK = 'S';
const int HALFDUTY = 127;

const int directionPin = 13;
const int enablePin = 12;
const int stepPin = 11;
const int stepConfPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(directionPin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(stepConfPin, OUTPUT);
  
  digitalWrite(enablePin, LOW);
  digitalWrite(directionPin, HIGH);
  digitalWrite(stepConfPin, LOW);
  
  Serial.println("You can interact with the controller using these keys: ");
  Serial.println("W-> Move forward");
  Serial.println("S-> Move backwards");
}

// the loop routine runs over and over again forever:
void loop() {
  if (Serial.available() > 0) {
    char c = Serial.read();
    if (c == FWD) {
      Serial.println("Moving forward");
      digitalWrite(directionPin, HIGH);
    }
    else if (c == BCK) {
      Serial.println("Moving backward");
      digitalWrite(directionPin, LOW);
    }
  }
  analogWrite(stepPin, HALFDUTY);
  delay(100);
}
