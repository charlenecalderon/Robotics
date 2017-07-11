#include <Servo.h>
Servo servoRight;
Servo servoLeft;
//servos = 180

void setup() {
  pinMode(10, OUTPUT);
  pinMode(11,OUTPUT);
  
  servoLeft.attach(12);
  servoRight.attach(13);
  //servoLeft.writeMicroseconds(100);
  //servoRight.writeMicroseconds(100);
  
}

void loop() {

  digitalWrite(10, HIGH); 
  digitalWrite(10, LOW);
  servoLeft.write(0);
  digitalWrite(11, HIGH);
  digitalWrite(11, LOW);
  servoRight.write(180);
    
  delay(50);
  digitalWrite(11, HIGH);              
  delay(500); //forward 
  servoLeft.write(0);
  servoRight.write(180);
  digitalWrite(11, LOW);
  delay(50);  
  delay(500); //forward  
  servoLeft.write(180);
  servoRight.write(0); //reverse
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  servoLeft.write(180);
  servoRight.write(0); //reverse
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(500);
  servoLeft.write(180);
  servoRight.write(180); //right
  delay(500);

  
  
  
  
  
  
 } 

//  servoLeft.write(180);
//  servoRight.write(180); //right
//  delay(1000);
//
//  servoLeft.write(0);
//  servoRight.write(0); //left
//  delay(1000);
//  

//
//  
//  for(int pos=0; pos<=180; pos+=1){
//    servoLeft.write(pos);
//    delay(15);
//    servoRight.write(pos);
//  }
//  for(int pos=180;pos>=0; pos-=1){
//    servoLeft.write(pos);
//    delay(15);
//    servoRight.write(pos);
//
//  servoLeft.writeMicroseconds(1300);
//  servoRight.writeMicroseconds(1300);
//
//  
//
//    }  }
  


 

