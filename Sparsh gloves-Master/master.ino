#include <Wire.h>
int r1=2,r2=3,r3=4,r4=5,r5=6;
int c1=7,c2=8,c3=9,c4=10,c5=11;
int e=12;
char a;
void setup() {
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(r5,OUTPUT);
  pinMode(c1,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(c3,OUTPUT);
  pinMode(c4,OUTPUT);
  pinMode(c5,OUTPUT);
  pinMode(e,OUTPUT);
   Wire.begin(9);
    Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}
void receiveEvent(int bytes) {
  a = Wire.read();
  a=bytes;
}

void led_A()
{
  digitalWrite(r1,HIGH);
  digitalWrite(c1,LOW);
  delay(100);
  digitalWrite(r1,LOW);
  digitalWrite(c1,HIGH);
}

void led_B()
{
  digitalWrite(r1,HIGH);
  digitalWrite(c2,LOW);
  delay(100);
  digitalWrite(r1,LOW);
  digitalWrite(c2,HIGH);
}


void led_C()
{
  digitalWrite(r1,HIGH);
  digitalWrite(c3,LOW);
  delay(100);
  digitalWrite(r1,LOW);
  digitalWrite(c3,HIGH);
}

void led_D()
{
  digitalWrite(r1,HIGH);
  digitalWrite(c4,LOW);
  delay(100);
  digitalWrite(r1,LOW);
  digitalWrite(c4,HIGH);
}

void led_E()
{
  digitalWrite(r1,HIGH);
  digitalWrite(c5,LOW);
  delay(100);
  digitalWrite(r1,LOW);
  digitalWrite(c5,HIGH);
}

void led_F()
{
  digitalWrite(r2,HIGH);
  digitalWrite(c1,LOW);
  delay(100);
  digitalWrite(r2,LOW);
  digitalWrite(c1,HIGH);
}

void led_G()
{
  digitalWrite(r2,HIGH);
  digitalWrite(c2,LOW);
  delay(100);
  digitalWrite(r2,LOW);
  digitalWrite(c2,HIGH);
}


void led_H()
{
  digitalWrite(r2,HIGH);
  digitalWrite(c3,LOW);
  delay(100);
  digitalWrite(r2,LOW);
  digitalWrite(c3,HIGH);
}

void led_I()
{
  digitalWrite(r2,HIGH);
  digitalWrite(c4,LOW);
  delay(100);
  digitalWrite(r2,LOW);
  digitalWrite(c4,HIGH);
}

void led_J()
{
  digitalWrite(r2,HIGH);
  digitalWrite(c5,LOW);
  delay(100);
  digitalWrite(r2,LOW);
  digitalWrite(c5,HIGH);
}

void led_K()
{
  digitalWrite(r3,HIGH);
  digitalWrite(c1,LOW);
  delay(100);
  digitalWrite(r3,LOW);
  digitalWrite(c1,HIGH);
}

void led_L()
{
  digitalWrite(r3,HIGH);
  digitalWrite(c2,LOW);
  delay(100);
  digitalWrite(r3,LOW);
  digitalWrite(c2,HIGH);
}


void led_M()
{
  digitalWrite(r3,HIGH);
  digitalWrite(c3,LOW);
  delay(100);
  digitalWrite(r3,LOW);
  digitalWrite(c3,HIGH);
}

void led_N()
{
  digitalWrite(r3,HIGH);
  digitalWrite(c4,LOW);
  delay(100);
  digitalWrite(r3,LOW);
  digitalWrite(c4,HIGH);
}

void led_O()
{
  digitalWrite(r3,HIGH);
  digitalWrite(c5,LOW);
  delay(100);
  digitalWrite(r3,LOW);
  digitalWrite(c5,HIGH);
}

void led_P()
{
  digitalWrite(r4,HIGH);
  digitalWrite(c1,LOW);
  delay(100);
  digitalWrite(r4,LOW);
  digitalWrite(c1,HIGH);
}

void led_Q()
{
  digitalWrite(r4,HIGH);
  digitalWrite(c2,LOW);
  delay(100);
  digitalWrite(r4,LOW);
  digitalWrite(c2,HIGH);
}


void led_R()
{
  digitalWrite(r4,HIGH);
  digitalWrite(c3,LOW);
  delay(100);
  digitalWrite(r4,LOW);
  digitalWrite(c3,HIGH);
}

void led_S()
{
  digitalWrite(r4,HIGH);
  digitalWrite(c4,LOW);
  delay(100);
  digitalWrite(r4,LOW);
  digitalWrite(c4,HIGH);
}

void led_T()
{
  digitalWrite(r4,HIGH);
  digitalWrite(c5,LOW);
  delay(100);
  digitalWrite(r4,LOW);
  digitalWrite(c5,HIGH);
}

void led_U()
{
  digitalWrite(r5,HIGH);
  digitalWrite(c1,LOW);
  delay(100);
  digitalWrite(r5,LOW);
  digitalWrite(c1,HIGH);
}

void led_V()
{
  digitalWrite(r5,HIGH);
  digitalWrite(c2,LOW);
  delay(100);
  digitalWrite(r5,LOW);
  digitalWrite(c2,HIGH);
}


void led_W()
{
  digitalWrite(r5,HIGH);
  digitalWrite(c3,LOW);
  delay(100);
  digitalWrite(r5,LOW);
  digitalWrite(c3,HIGH);
}

void led_X()
{
  digitalWrite(r5,HIGH);
  digitalWrite(c4,LOW);
  delay(100);
  digitalWrite(r5,LOW);
  digitalWrite(c4,HIGH);
}

void led_Y()
{
  digitalWrite(r5,HIGH);
  digitalWrite(c5,LOW);
  delay(100);
  digitalWrite(r5,LOW);
  digitalWrite(c5,HIGH);
}

void led_Z()
{
  digitalWrite(e,HIGH);
  
  delay(100);
  digitalWrite(e,LOW);
  
}

void loop() {
 
switch (a)
 {
      case 'a':
      {
      led_A();
      break;
     }
case 'b':
 {
  led_B();
  break;
 }
 case 'c':
 {
  led_C();
  break;
 }
 case 'd':
 {
  led_D();
   break;
 }
 case 'e':
 {
  led_E();
   break;
 }
 case 'f':
 {
  led_F();
   break;
 }
 case 'g':
 {
  led_G();
   break;
 }
case 'h':
 {
  led_H();
   break;
 }
 case 'i':
 {
  led_I();
   break;
 }
 case 'j':
 {
  led_J();
 break;
 }
 case 'k':
 {
  led_K();
  break;
 }
 case 'l':
 {
  led_L();
   break;
 }
 case 'm':
 {
  led_M();
   break;
 }
case 'n':
 {
  led_N();
   break;
 }
  case 'o':
 {
  led_O();
   break;
 }
 case 'p':
 {
  led_P();
   break;
 }
 case 'q':
 {
  led_Q();
   break;
 }
case 'r':
 {
  led_R();
   break;
 }
case 's':
 {
  led_S();
   break;
 }
 case 't':
 {
  led_T();
   break;
 }
 case 'u':
 {
  led_U();
   break;
 }
 case 'v':
 {
  led_V();
   break;
 }
case 'w':
 {
  led_W();
   break;
 }
 case 'x':
 {
  led_X();
   break;
 }
 case 'y':
 {
  led_Y();
   break;
 }
 case 'z':
 {
  led_Z();
   break;
 }
 }
 a=0;
 
}
