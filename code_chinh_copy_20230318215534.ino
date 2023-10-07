#include<Servo.h>
int s1 = 8;
int s2 = 11;
int s3 = 9;
const int echo = 4;
const int trig = 7;
int vitri = 0;
int goc;
unsigned long time;
int khoangcach;

Servo sv;
Servo csv;
Servo sv3;

void setup(){
  sv.attach(s1);
  csv.attach(s2);
  sv3.attach(s3);
  pinMode(trig, OUTPUT);//phát xung
  pinMode(echo, INPUT);//nhận th

}
void loop(){

  digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  time = pulseIn(echo,HIGH);
  khoangcach = int(time/2/29.412);

  if(khoangcach <= 20){
    sv.write(50);
       delay(4000);
       for(vitri=50;vitri>0;vitri--){
    sv.write(vitri);
    delay(10);
  }
  delay(1000);

  for(vitri=0;vitri<100;vitri++){
    sv.write(vitri);
    delay(10);
  }
  delay(1000);

  for(vitri=100;vitri>50;vitri--){
    sv.write(vitri);
    delay(10);
  }delay(1000);
  /////////////////////////////ngẩng đầu lần 1
for(vitri=110;vitri<120;vitri++){
    csv.write(vitri);
    delay(15);
  }
  delay(2000);
  for(vitri=120;vitri>20;vitri--){
    csv.write(vitri);
    delay(10);
  }
  delay(1500);
  for(vitri=20;vitri<90;vitri++){
    csv.write(vitri);
    delay(10);
  }
  delay(1000);
  ////////
  for(vitri=135;vitri<160;vitri++){
    sv3.write(vitri);
    delay(15);
  }
  delay(1500);
  for(vitri=160;vitri>105;vitri--){
    sv3.write(vitri);
    delay(10);
  }
    delay(2000);
    for(vitri=105;vitri<135;vitri++){
    sv3.write(vitri);
    delay(15);
  }
  delay(1500);
  ////////
////////////////////////////////đóng ngẩng đầu lần 1//////////////////////
for(vitri=50;vitri<100;vitri++){
    sv.write(vitri);
    delay(10);
  }
  delay(1500);
//
for(vitri=135;vitri>105;vitri--){
    sv3.write(vitri);
    delay(15);
  }
    delay(2500);

//
for(vitri=100;vitri>50;vitri--){
    sv.write(vitri);
    delay(10);
  }
    delay(2000);

for(vitri=50;vitri>0;vitri--){
    sv.write(vitri);
    delay(10);
  }
  delay(1500);
/////////////////////////////////////////////////////////////////////////////
for(vitri=105;vitri<160;vitri++){
    sv3.write(vitri);
    delay(15);
  }
  delay(1500);

/////////////////////////////////ngẩng đầu lần 2
for(vitri=90;vitri>70;vitri--){
    csv.write(vitri);
    delay(10);
  }
  delay(2000);
 for(vitri=70;vitri<135;vitri++){
     csv.write(vitri);
     delay(10);
   }
   delay(2000);

for(vitri=0;vitri<100;vitri++){
    sv.write(vitri);
    delay(10);
  }
    delay(1500);
///
for(vitri=160;vitri>125;vitri--){
    sv3.write(vitri);
    delay(10);
  }
    delay(1500);
///

////////////////////////////////đóng ngẩng đầu lần 2/////////////////////////
for(vitri=100;vitri>0;vitri--){
    sv.write(vitri);
    delay(10);
  }  
delay(1500);
for(vitri=0;vitri<50;vitri++){
    sv.write(vitri);
    delay(10);
  }
  delay(1500);
  /////////////////////////////////ngẩng đầu lần 3
  for(vitri=135;vitri>20;vitri--){
     csv.write(vitri);
    delay(10);
   }
   delay(1500);
 for(vitri=20;vitri<110;vitri++){
     csv.write(vitri);
    delay(10);
   }
   delay(2000);
////////////////////////////////đóng ngẩng đầu lần 3//////////////////////////

 for(vitri=50;vitri>0;vitri--){
     sv.write(vitri);
     delay(10);
  }
delay(1800);
////
for(vitri=125;vitri<160;vitri++){
    sv3.write(vitri);
    delay(15);
  }
  delay(1500);
////

///////////////////////////////////ngẩng đầu lần 4
 for(vitri=110;vitri>50;vitri--){
     csv.write(vitri);
    delay(10);
   }
   delay(2000);
   //////
   for(vitri=160;vitri>105;vitri--){
    sv3.write(vitri);
    delay(10);
  }
    delay(1000);
    for(vitri=0;vitri<50;vitri++){
    sv.write(vitri);
    delay(10);
  }
  delay(1000);
   //////
   for(vitri=50;vitri<135;vitri++){
     csv.write(vitri);
    delay(10);
   }
   delay(1700);
   for(vitri=50;vitri>0;vitri--){
     sv.write(vitri);
     delay(10);
  }
delay(1500);
   ///////
   for(vitri=105;vitri<135;vitri++){
    sv3.write(vitri);
    delay(15);
  }
  delay(1000);
  for(vitri=0;vitri<50;vitri++){
    sv.write(vitri);
    delay(10);
  }
  delay(1000);
  ////////////////////
   for(vitri=135;vitri>110;vitri--){
     csv.write(vitri);
    delay(10);
   }
   delay(1500);
  }
  else{
     csv.write(110);
     sv.write(50);
     sv3.write(135);
  }
}
