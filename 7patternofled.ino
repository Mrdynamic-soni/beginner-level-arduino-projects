int t1=30;
int t2=80;
int t3=150;
void setup() {
 for(int i=2;i<=12;i++){
  pinMode(i,OUTPUT);
 }
}

void loop() {
  effect_1();
  effect_2();
  effect_3();
  effect_4();
  effect_5();
 
}
void effect_1(){
  for(int i=0;i<=12;i++){
    digitalWrite(i,HIGH);
    delay(t1);
     digitalWrite(i+1,HIGH);
    delay(t1);
     digitalWrite(i+2,HIGH);
    delay(t1);
    digitalWrite(i,LOW);
    delay(t1);
     digitalWrite(i+1,LOW);
    delay(t1);
  }
  for(int i=13;i>1;i--)
  {
    digitalWrite(i,HIGH);
    delay(t2);
     digitalWrite(i-1,HIGH);
    delay(t1);
     digitalWrite(i-2,HIGH);
    delay(t1);
    digitalWrite(i,LOW);
    delay(t2);
     digitalWrite(i-1,LOW);
    delay(t1);
  }
}
void effect_2()
{
  int c=13;
  for(int i=2;i<=12;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(c,HIGH);
    c--;
    if(c!=7)
    delay(t2);
  }
  for(int i=13;i>1;i--)
  {
    digitalWrite(i,HIGH);
    digitalWrite(c,HIGH);
    c++;
    if(c!=8)
    delay(t2);
  }
}
void effect_3(){
  for(int i=2;i<=12;i++)
  {
    digitalWrite(i,HIGH);
    delay(t3);
    digitalWrite(i,LOW);
    delay(t3);
  }
  for(int i=12;i>1;i--)
  {
    digitalWrite(i,HIGH);
    delay(t3);
    digitalWrite(i,LOW);
    delay(t3);
  }
}
void effect_4(){
  for(int j=2;j<=12;j++){
    digitalWrite(j,HIGH);
    delay(t2);
    j=j+1;
    digitalWrite(j,LOW);
    delay(t2);
  }
  for(int i=12;i>1;i--)
 {
  digitalWrite(i,HIGH);
  delay(t2);
  i=i-1;
  digitalWrite(i,LOW);
    delay(t2);
 }
}
void effect_5(){
  for(int x=13;x>1;x--)
  {
    digitalWrite(x,HIGH);
    delay(t1+t2);
    digitalWrite(x+1,LOW);
    delay(t1+t2);
    digitalWrite(x+2,HIGH);
    delay(t1+t2);
    digitalWrite(x+3,LOW);
    delay(t1+t2);
  }
  for(int x=13;x>1;x--)
  {
    digitalWrite(x+4,HIGH);
    delay(t1+t2);
    digitalWrite(x+5,LOW);
    delay(t1+t2);
    digitalWrite(x+6,HIGH);
    delay(t1+t2);
    digitalWrite(x+7,LOW);
    delay(t1+t2);
  }
  for(int x=13;x>1;x--)
  {
    digitalWrite(x+8,HIGH);
    delay(t1+t2);
    digitalWrite(x+9,LOW);
    delay(t1+t2);
    digitalWrite(x+10,HIGH);
    delay(t1+t2);
    digitalWrite(x+11,LOW);
    delay(t1+t2);
}
}
