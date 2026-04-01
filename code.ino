#include <Servo.h>
#define TRIG_PIN 9
#define ECHO_PIN 10
#define SERVO_PIN 11
Servo myServo;
void setup() {
pinMode(TRIG_PIN, OUTPUT);
pinMode(ECHO_PIN, INPUT);
myServo.attach(SERVO_PIN);
Serial.begin(9600);
}
long getDistance() {
digitalWrite(TRIG_PIN, LOW);
delayMicroseconds(2);
digitalWrite(TRIG_PIN, HIGH);
delayMicroseconds(10);
digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2; // distance in cm
  return distance;
}
void loop() {
  long distance = getDistance();
Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");
  // Example action: move servo based on distance
  if (distance < 20) {
myServo.write(180);
  } else {
myServo.write(0);
  }
delay(500);
}