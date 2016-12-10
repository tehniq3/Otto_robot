/*
base info from https://www.arduino.cc/en/Reference/Servo
test sketch made by Nicu FLORICA (niq_ro) for verify position for Otto legs  
*/
#include <Servo.h>

Servo myservo1;  // create servo object to control a servo 1
Servo myservo2;  // create servo object to control a servo 2
Servo myservo3;  // create servo object to control a servo 3
Servo myservo4;  // create servo object to control a servo 4

int minim = 10;
int maxim = 170;

void setup() {
  myservo1.attach(2);  // attaches the servo on pin 2 to the servo object 1
  myservo2.attach(3);  // attaches the servo on pin 3 to the servo object 2 
  myservo3.attach(4);  // attaches the servo on pin 4 to the servo object 3
  myservo4.attach(5);  // attaches the servo on pin 5 to the servo object 4 

  myservo1.write(minim);                  // sets the servo 1 position 
  myservo2.write(minim);                  // sets the servo 2 position
  myservo3.write(minim);                  // sets the servo 3 position 
  myservo4.write(minim);                  // sets the servo 4 position
delay(3000);
  myservo1.write(maxim);                  // sets the servo 1 position 
  myservo2.write(maxim);                  // sets the servo 2 position
  myservo3.write(maxim);                  // sets the servo 3 position 
  myservo4.write(maxim);                  // sets the servo 4 position
delay(3000);
}

void loop() {

  myservo1.write(90);                  // sets the servo 1 position 
  myservo2.write(90);                  // sets the servo 2 position
  myservo3.write(90);                  // sets the servo 3 position 
  myservo4.write(90);                  // sets the servo 4 position

  }
