/*
  This Code is written by Rahul Sharma for Yolabs. 
IR sensors and its applications. 
Controls A microservo & Turns inbuild LED on and off using IR proximity sensor.
Note: IR senosr works on the principle that it will detect the light reflecting back. 
So any black surface  = Nothing in front of sensor (by default signal pin is high)
So any white surface  =  LIght is reflecting (signal pin is low)

 www.yolabs.in - 2020
  
*/

// the setup function runs once when you press reset or power the board
#include <Servo.h>


int foo=1;
Servo servo_3;

void setup()
{
  foo++;
  pinMode(6, INPUT);
  servo_3.attach(3, 500, 2500);
  Serial.begin(9600);
  pinMode(8, OUTPUT); // will use for sensor 5V supply
  digitalWrite(8,HIGH); //as Arduino has only one 5V pin we are using pin 8 for IR sensor

  pinMode(13, OUTPUT);
}

void loop()
{
  if (digitalRead(6) == 1) {
    //Serial.println("I am High");
    digitalWrite(13, LOW);
    servo_3.write(90);
    delay(10); // Wait for 1000 millisecond(s)
  } 
  if( digitalRead(6) == 0){
    digitalWrite(13, HIGH);
    //Serial.println("I am Low");
    servo_3.write(180);
    delay(6000);
  }
}






