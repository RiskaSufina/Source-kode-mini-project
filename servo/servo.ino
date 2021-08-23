
#include <Servo.h> 
// membuat nama objek servo untuk pengontrolan servo 

Servo servo0;
Servo servo1;
Servo servo2; 
Servo servo3;      
// variable untuk menyimpan posisi servo            
int i = 0;

void setup() {
  servo0.attach(2);
  servo1.attach(3); 
  servo2.attach(4); 
  servo3.attach(5); 
}

void loop() {
  for (i = 0; i < 180; i++) { 
    servo0.write(i);              
    servo1.write(i);     
    servo2.write(i);
    servo3.write(i);      
    delay(10);                      
  }
  for (i = 180; i > 0; i--) { 
    servo0.write(i);                
    servo1.write(i);     
    servo2.write(i);
    servo3.write(i);       
    delay(10);                      
  }

}
