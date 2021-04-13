/*
  This Code is written by Rahul Sharma for Yolabs. 
IR sensors and its applications. 
Turns inbuild LED on and off using IR proximity sensor.
Note: IR senosr works on the principle that it will detect the light reflecting back. 
So any black surface  = Nothing in front of sensor (by default signal pin is high)
So any white surface  =  LIght is reflecting (signal pin is low)

 www.yolabs.in - 2020
  
*/

// the setup function runs once when you press reset or power the board

void setup()
{
  pinMode(6, INPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
}

void loop()
{
  if (digitalRead(6) == 1) {
    Serial.println("I am High");
    digitalWrite(13, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(13, HIGH);
    Serial.println("I am Low");
  }
}
