
#include <Servo.h>

Servo myservo;

int pos = 0;    
void setup() {
  myservo.attach(9);
}

void loop() {
  for (pos = 0; pos <= 65; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
  delay(5000);
  for (pos = 65; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15); 
  }
  delay(5000);
}
