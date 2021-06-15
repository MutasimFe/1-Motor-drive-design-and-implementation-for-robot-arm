#include<Servo.h>



Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int pos=0;

int pot1=A0;
int pot2=A1;
int pot3=A2;
int pot4=A3;
int pot5=A4;

int tra=11;

int val1;
int val2;
int val3;
int val4;
int val5;

void setup() 
  
{
  
  pinMode(tra, HIGH);
  
  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(0);
  myservo4.write(0);
  myservo5.write(0);
  
  myservo1.attach(3);
  myservo2.attach(5);
  myservo3.attach(6);
  myservo4.attach(9);
  myservo5.attach(10);
  
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
  pinMode(pot4, INPUT);
  pinMode(pot5, INPUT);
  
  pinMode(pot1, INPUT);
  pinMode(pot1, INPUT); 
  pinMode(pot1, INPUT);
  pinMode(pot1, INPUT);
  pinMode(pot1, INPUT);
  
 
}



void loop()
{
  
  val1= analogRead(pot1);
  val2= analogRead(pot2);
  val3= analogRead(pot3);
  val4= analogRead(pot4);
  val5= analogRead(pot5);
  
  val1=map(val1,0 ,1023, 0, 90);
  val2=map(val2,0 ,1023, 0, 90);
  val3=map(val3,0 ,1023, 0, 90);
  val4=map(val4,0 ,1023, 0, 90);
  val5=map(val5,0 ,1023, 0, 90);
  
  myservo1.write(val1);
  myservo2.write(val2);
  myservo3.write(val3);
  myservo4.write(val4);
  myservo5.write(val5);
  
  
}
 
 
  