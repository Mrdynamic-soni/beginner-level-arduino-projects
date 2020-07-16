#include<Servo.h>
Servo sv;
const int led=7;
const int trig=9;
const int echo=10;
long distance;
long dur;
void setup() {
  pinMode(trig,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(echo,INPUT);
  sv.attach(3);
  Serial.begin(9600);

}
void loop() {
   digitalWrite(trig,LOW);
   delayMicroseconds(10);
   digitalWrite(trig,HIGH);
   delayMicroseconds(30);
   digitalWrite(trig,LOW);
   dur =pulseIn(echo,HIGH);
   distance = (dur*0.034)/2;
   if(distance<=10)
   {
    digitalWrite(led,HIGH);
    sv.write(180);
   }
   else{
    digitalWrite(led,LOW);
    sv.write(0);
   }
   Serial.print("distance=");
   Serial.println(distance);
}
