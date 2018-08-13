#include<Wire.h>
int r1=2,r2=3,r3=4,r4=5,r5=6;
int c1=7,c2=8,c3=9,c4=10,c5=11;
int e=12;
int i;
void setup() {
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(r5,OUTPUT);
  pinMode(c1,INPUT_PULLUP);
  pinMode(c2,INPUT_PULLUP);
  pinMode(c3,INPUT_PULLUP);
  pinMode(c4,INPUT_PULLUP);
  pinMode(c5,INPUT_PULLUP);
  pinMode(e,INPUT_PULLUP);
    Wire.begin(); 
  Serial.begin(9600);
}

void pass(int a)
{
 Wire.beginTransmission(9); 
  Wire.write(a);             
  Wire.endTransmission(); 
}

void loop() {
 digitalWrite(r1,LOW);
  {
               if(digitalRead(c1)==0)
               {
                        
                pass(1);
                Serial.println("Switch 1 is pressed");
               }
               else if(digitalRead(c2)==0)
               {
                 pass(2);
                 Serial.println("Switch 2 is pressed");
               }
                else if(digitalRead(c3)==0)
               {
                  pass(3);
                   Serial.println("Switch 3 is pressed");
               }
                else if(digitalRead(c4)==0)
               {
                 pass(4);
                 Serial.println("Switch 4 is pressed");
               }
                else if(digitalRead(c5)==0)
               {
                 pass(5); 
                   Serial.println("Switch 5 is pressed");
               }
  }
    digitalWrite(r1,HIGH);
    

  digitalWrite(r2,LOW);
  {
               if(digitalRead(c1)==0)
               {
                       
                pass(6);
                 Serial.println("Switch 6 is pressed");
                
               }
               else if(digitalRead(c2)==0)
               {
                 pass(7);
                Serial.println("Switch 7 is pressed");
                 
               }
                else if(digitalRead(c3)==0)
               {
                  pass(8);
                  Serial.println("Switch 8 is pressed");   
               }
                else if(digitalRead(c4)==0)
               {
                  pass(9);
                   Serial.println("Switch 9 is pressed");
               }
                else if(digitalRead(c5)==0)
               {
                   pass(10);
                   Serial.println("Switch 10 is pressed");
               }
  }
    digitalWrite(r2,HIGH);

    digitalWrite(r3,LOW);
  {
               if(digitalRead(c1)==0)
               {
                  pass(11);  
                  Serial.println("Switch 11 is pressed");    
               
               }
               else if(digitalRead(c2)==0)
               {
                   pass(12);
                Serial.println("Switch 12 is pressed");   
               }
                else if(digitalRead(c3)==0)
               {
                 pass(13);
                 Serial.println("Switch 13 is pressed");
               }
                else if(digitalRead(c4)==0)
               {
                   pass(14);
                  Serial.println("Switch 14 is pressed"); 
               }
                else if(digitalRead(c5)==0)
               {
                  pass(15);
                  Serial.println("Switch 15 is pressed");
               }
  }
    digitalWrite(r3,HIGH);

    digitalWrite(r4,LOW);
  {
               if(digitalRead(c1)==0)
               {
                       
              pass(16);
              Serial.println("Switch 16 is pressed");
               }
               else if(digitalRead(c2)==0)
               {
                  pass(17);
                  Serial.println("Switch 17 is pressed");
               }
                else if(digitalRead(c3)==0)
               {
                 pass(18);
                 Serial.println("Switch 18 is pressed");
               }
                else if(digitalRead(c4)==0)
               {
                  pass(19);
                  Serial.println("Switch 19 is pressed");
               }
                else if(digitalRead(c5)==0)
               {
                pass(20);
                Serial.println("Switch 20 is pressed");
               }
  }
    digitalWrite(r4,HIGH);

    digitalWrite(r5,LOW);
  {
               if(digitalRead(c1)==0)
               {
                 pass(21);
                 Serial.println("Switch 21 is pressed");      
               
               }
               else if(digitalRead(c2)==0)
               {
                pass(22);
                Serial.println("Switch 22 is pressed");
               }
                else if(digitalRead(c3)==0)
               {
               pass(23);
               Serial.println("Switch 23 is pressed");
               }
                else if(digitalRead(c4)==0)
               {
                 pass(24);
                 Serial.println("Switch 24 is pressed");
               }
                else if(digitalRead(c5)==0)
               {
               pass(25);
               Serial.println("Switch 25 is pressed");
               }
  }
    digitalWrite(r5,HIGH);
    i=digitalRead(e);
    if(i==0)
    {
      pass(26);
      Serial.println("Switch 26 is pressed");
    }
}
