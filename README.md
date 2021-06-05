
#### `Testing of Arduino`

* Test the Arduino Board by using blinking an In-Built LED (Below code) 

```C++
/*
  This Code is written by Rahul Sharma for Yolabs. 
This is the  simplest code possible to blink in build LED  
Turns inbuild LED on and off at diff frequency to chk your arduino IDE, Arduino and cable is working
Note: please check the port in case you have error while uploadig 
 www.yolabs.in - 2020
  
*/

// the setup function runs once when you press reset or power the board

void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    digitalWrite(13, HIGH);
    
    Serial.println("I am High");
    delay(3000); // Wait for 1000 millisecond(s)
    digitalWrite(13, LOW);
    Serial.println("I am Low");
    delay(3000);
 
}


```


####  `IR Sensor Testing Code`

* Then check the ir sensor by using this below code.

```C++
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


```
####  `Boom Barrier Code`

* Assemble the parts 
* copy & paste this code in Arduino IDE.

```C++


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


```
