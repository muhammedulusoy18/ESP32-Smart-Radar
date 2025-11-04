#include <ESP32Servo.h>
const int PIN_SERVO=13;
const int PIN_TRIG=12;
const int PIN_ECHO=14;
Servo myServo;
long duration;
int distance;
void setup(){
  Serial.begin(115200);
  myServo.attach(PIN_SERVO);
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  Serial.println("Akilli Radar Projesi Basladi.");
myServo.write(0);
}
void loop(){
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  duration = pulseIn(PIN_ECHO, HIGH);
  distance = duration * (0.034 / 2);
  Serial.print("Mesafe: ");
  Serial.print(distance);
  Serial.println(" cm");
  if (distance < 20) {
    Serial.println("ENGEL ALGILANDI! Kol hareket ediyor.");
    myServo.write(90); 
  } 
  else { 
    Serial.println("Alan temiz.");
    myServo.write(0);  
  }
  delay(500);
}