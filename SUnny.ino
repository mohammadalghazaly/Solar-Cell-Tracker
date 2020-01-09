
#include <Servo.h>

Servo servoY; 
Servo servoX;
int uper=A0;
int dwon=A1;
int rith=A2;
int left=A3;
int Y=90;
int X=90;
void setup() {
  Serial.begin(9600);
  servoY.attach(9); 
  servoX.attach(10); 
  pinMode(uper,INPUT);
  pinMode(dwon,INPUT);
  pinMode(rith,INPUT);
  pinMode(left,INPUT);
}

void loop() {
    int U=analogRead(uper)/10;
    int D=analogRead(dwon)/10;
    int R=analogRead(rith)/10;
    int L=analogRead(left)/10;
    if((U<D+5)&&(Y<180)){
      Y++;
      servoY.write(Y); 
      }
      if((D<U+5)&&(Y>0)){
         Y--;
      servoY.write(Y); 
        }
        
        if((R<L+5)&&(X<180)){
      X++;
      servoX.write(X); 
      }
      if((L<R+5)&&(X>0)){
         X--;
      servoX.write(X); 
        }else{};
  
  Serial.print("U=");
   Serial.print(U);
    Serial.print("  D=");
   Serial.print(D);
  Serial.print("  R=");
   Serial.print(R);
   Serial.print("  L=");
   Serial.print(L);
   Serial.print("  Y=");
   Serial.print(Y);
    Serial.println(" ");
    delay(10);
}
