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
  //myservo.attach(8);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
      if(Serial.read()=="o"){
          open(0,myservo);
          Serial.println("open");
        }
      else if(Serial.read()=="c"){
          close(0,myservo);
          Serial.println("close");
        }
        else{Serial.println("something else");}
    }
    Serial.println("something error");
}
