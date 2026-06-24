#include <Arduino.h>
#include <Servo.h>

//my variables
int waitTime = 1500; //time to wait for servo to reach position
Servo servo1; //intializing servo object


void setup() {
  servo1.attach(10); //attaching servo to pin 10
}

void loop() {
  servo1.write(90); //move servo to 90 degrees
  delay(waitTime); //wait for servo to reach position
  servo1.write(0);
  delay(waitTime);
  servo1.write(180);
  delay(waitTime);
  servo1.write(90);
  delay(waitTime);
  servo1.write(0);
  delay(waitTime);
}
