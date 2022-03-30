#include <Servo.h>          // Include servo library

Servo servo1;       
Servo servo2;


void setup()
{
  servo1.attach(9);
  servo2.attach(10);
}

void loop()
{
  for(;;){
    servo1.attach();
    servo2.attach();
    servo1.write(360);
    servo2.write(360);
    delay(60000);
    servo1.detach();
    servo2.detach();
  }
  

}
