#include <Servo.h>
Servo myservo;
int pos = 0;

void right();
void foreward();
void backward();
void left();

int motorpin1=2;
int motorpin2=3;
int motorpin3=4;
int motorpin4=5;

void setup() {
    pinMode(motorpin1, OUTPUT);
    pinMode(motorpin2, OUTPUT); 
    pinMode(motorpin3, OUTPUT);
    pinMode(motorpin4, OUTPUT);
    Serial.begin(9600);
    myservo.attach(9);
}

void loop() {
    for (pos = 0; pos <= 180; pos += 1) { 
      myservo.write(pos);              
      delay(15);                      
    }
    for (pos = 180; pos >= 0; pos -= 1) { 
      myservo.write(pos);           
      delay(15);                     
    }
}

void right()
{ 
  digitalWrite(motorpin1, HIGH);
  digitalWrite(motorpin2, LOW);
  digitalWrite(motorpin3, LOW);
  digitalWrite(motorpin4, HIGH);
}

void foreward()
{
  digitalWrite(motorpin1, HIGH);
  digitalWrite(motorpin2, LOW);
  digitalWrite(motorpin3, HIGH);
  digitalWrite(motorpin4, LOW);
}

void left()
{ 
  digitalWrite(motorpin1, LOW);
  digitalWrite(motorpin2, HIGH);
  digitalWrite(motorpin3, HIGH);
  digitalWrite(motorpin4, LOW);
}

void backward()
{
  digitalWrite(motorpin1, LOW);
  digitalWrite(motorpin2, HIGH);
  digitalWrite(motorpin3, LOW);
  digitalWrite(motorpin4, HIGH);
}
