#include <Servo.h>
#include <math.h>
int angle = 0;
Servo myServo;
int pos =0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600); 
  myServo.attach(9);
}

void loop()
{
  float d1 = 0.01723 * readUltrasonicDistance(8, 8);
  float d2 = 0.01723 * readUltrasonicDistance(7, 7);

// 2. Calculate the raw ratio (Opposite / Adjacent)
  float ratio = abs(d1 - d2) / 4.5;

// 3. Get the angle in radians, then convert directly to degrees
  float angleRad = atan(ratio);
  angle = angleRad * (180.0 / M_PI); 
  Serial.println(angle);
  if (pos > angle) {
    for ( ; pos >= angle; pos -= 1) {
      myServo.write(pos);
      delay(15);
    }
  }
  else if (pos < angle) {
    for ( ; pos <= angle; pos += 1) {
      myServo.write(pos);
      delay(15);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}
