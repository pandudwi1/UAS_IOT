char serialData;
int pinA = 10;
int pinB = 11;
int pinC = 12;
int pinD = 13;
int analogPin = A0;
int sensorVal;

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorVal = analogRead(analogPin);
  Serial.println(sensorVal);
  delay(1000);
  for(int i=0; i<4; i++)

    if(Serial.available() > 0) {
      serialData = Serial.read();
      if(serialData == 'A') digitalWrite(pinA, 1);
      if(serialData == 'B') digitalWrite(pinA, 0);
      
      if(serialData == 'C') digitalWrite(pinB, 1);
      if(serialData == 'D') digitalWrite(pinB, 0);
      
      if(serialData == 'E') digitalWrite(pinC, 1);
      if(serialData == 'F') digitalWrite(pinC, 0);
      
      if(serialData == 'G') digitalWrite(pinD, 1);
      if(serialData == 'H') digitalWrite(pinD, 0);
    }
}
