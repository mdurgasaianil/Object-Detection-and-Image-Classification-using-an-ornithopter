#include<Servo.h> //using servo library to control esc

Servo ESC; //crating a servo class with name as esc

void setup() 
{
  ESC.attach(8);// specify esc signal pin here as D8(digital 8th pin)
  ESC.writeMicroseconds(1000); // initialize the signal to 1000
  Serial.begin(9600); // starting the comunication between potentiometer and aurdino 
}
void loop() 
{
  int val; // initializing the variable name val
  val=analogRead(A0); // read input from analog pin A0(coming from potentio meter)
  val=map(val, 0, 1023, 1000, 2000);// maping the val to minimum and maximum input
  ESC.writeMicroseconds(val); // using val as the signal to esc
}
