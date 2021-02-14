#include <Servo.h>  // add servo library
 
Servo myservo;  // create servo object to control a servo
 
int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
 
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
 
void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 50, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(50);                           // waits for the servo to get there
}

/***************************************************************************************
*    Title: Servo Motor Control with Potentiometer
*    Author: SmartTronics
*    Date: September 8, 2019
*    Code version: Apache 2.0(? I'm not too sure if this is the code version or not)
*    Availability: Arduino Project Hub
*
***************************************************************************************/
