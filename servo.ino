
#include <Servo.h>
Servo myservo;

void open(int pos ,Servo myservo){
      for (pos = 0; pos <= 180; pos += 5) { 
         myservo.write(pos);              
         delay(15);                       
     }
  }

void close(int pos , Servo myservo){
      for (pos = 0; pos <= 180; pos += 5) { 
         myservo.write(pos);              
         delay(15);                       
       }
    }

int pos1 = 0; 
int pos2 = 0;

void setup() {
  myservo.attach(9);
  myservo.attach(8);
}

void loop() {}

