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
    Serial.begin(9600); // Starts the serial communication
}

void loop() {
  
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
