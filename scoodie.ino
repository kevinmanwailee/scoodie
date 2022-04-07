#include <Servo.h>

Servo serv1;
int pos1 = 0;
int sensorPin = A0;
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  serv1.attach(9);
  serv1.write(pos1);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if(sensorValue > 200){
    pos1 = 180;
    serv1.write(pos1);

  } else{
    pos1 = 0;
    serv1.write(pos1);
    
  }
  
  delay(500);
}
