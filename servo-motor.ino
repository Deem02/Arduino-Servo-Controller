#include <Servo.h>

Servo servo1;  // create servo object to control a servo
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int potpin1 = A5;  
int potpin2 = A4;  
int potpin3 = A3;  
int potpin4 = A2; 
int potpin5 = A1;  
int potpin6 = A0;  

int val1, val2, val3, val4, val5, val6;    // variables to read the values from the analog pins

void setup() {
  servo1.attach(11);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(3);
  servo5.attach(10);
  servo6.attach(9); 
}


  
  void loop() {
   val1 = analogRead(potpin1);
   val1 = map(val1, 0, 1023, 0, 180);
   servo1.write(val1);

   val2 = analogRead(potpin2);
   val2 = map(val2, 0, 1023, 0, 180);
   servo2.write(val2);

   val3 = analogRead(potpin3);
   val3 = map(val3, 0, 1023, 0, 180);
   servo3.write(val3);

   val4 = analogRead(potpin4);
   val4 = map(val4, 0, 1023, 0, 180);
   servo4.write(val4);
    
   val5 = analogRead(potpin5);
   val5 = map(val5, 0, 1023, 0, 180);
   servo5.write(val5);
    
   val6 = analogRead(potpin6);
   val6 = map(val6, 0, 1023, 0, 180);
   servo6.write(val6);
    
    delay(15);
}

   

    
  
  
  
   
