int trig=9;
int echo=10;
int led1 =7;
int led2 =12;
int led3 =8;
int led4 =6;
int led5=5;
int led6 =4;
int led7=3;
int led8=2;
long distance;
long dur;
void setup(){
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  Serial.begin(9600); 
}
void loop(){
  digitalWrite(trig,LOW);
  delayMicroseconds(10);
  digitalWrite(trig,HIGH);
  delayMicroseconds(30);
  dur=pulseIn(echo,HIGH);
  distance=dur*0.034/2;
  Serial.print("ditance= ");
  Serial.println(distance);
  if(distance>=80)
  {
    digitalWrite(led8,HIGH);
  }
  else
  {
    digitalWrite(led8,LOW);
  }
    if(distance>=70)
  {
    digitalWrite(led7,HIGH);
  }
  else
  {
    digitalWrite(led7,LOW);
  }
    if(distance>=60)
  {
    digitalWrite(led6,HIGH);
  }
  else
  {
    digitalWrite(led6,LOW);
  }
    if(distance>=50)
  {
    digitalWrite(led5,HIGH);
  }
  else
  {
    digitalWrite(led5,LOW);
  } 
  if(distance>=40)
  {
    digitalWrite(led4,HIGH);
  }
  else
  {
    digitalWrite(led4,LOW);
  }
    if(distance>=30)
  {
    digitalWrite(led3,HIGH);
  }
  else
  {
    digitalWrite(led3,LOW);
  }  if(distance>=20)
  {
    digitalWrite(led2,HIGH);
  }
  else
  {
    digitalWrite(led2,LOW);
  }
    if(distance>=10)
  {
    digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
  }
}
