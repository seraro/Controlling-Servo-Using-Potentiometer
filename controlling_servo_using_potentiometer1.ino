#include<Servo.h>
Servo myServo;
int potPin = 0; //Set a variable named potPin as A0
void setup()
{
  myServo.attach(9);
}
void loop()
{
  int val = analogRead(potPin); // read the pot value,save it in val
  val = map(val, 0, 1023, 0, 180); //scale the pot readings to 0-180
  myServo.write(val); //set the servo position according to val
  delay(50); //50ms delay
}