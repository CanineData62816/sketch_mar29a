#include <Servo.h>          // Include servo library

Servo servo1;       
Servo servo2;


void setup()
{
  int pos = 0;
  servo1.attach(9);
  servo2.attach(10);
}

void loop()
{
  for (int i = 0; i < 360; i++) {
    servo1.write(i);
    servo2.write(i);
    delay(37);
  }
}
