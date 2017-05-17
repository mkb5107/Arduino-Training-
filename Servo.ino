// Sweep
// by BARRAGAN <http://barraganstudio.com>
#include <Servo.h>
Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position


void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
void loop() {
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees
{
  myservo.write(pos);
  delay(15);
}
for(pos = 180; pos>=1; pos-=1)
{
  myservo.write(pos);
  delay(15);
    // in steps of 1 degree
// tell servo to go to position in variable 'pos'
// waits 15ms for the servo to reach the position
    // goes from 180 degrees to 0 degrees
// tell servo to go to position in variable 'pos'
// waits 15ms for the servo to reach the position
} }
