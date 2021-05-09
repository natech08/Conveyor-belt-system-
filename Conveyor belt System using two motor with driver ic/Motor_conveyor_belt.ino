//MOTOR1
#define MotorPin1 5
#define MotorPin2 6
//MOTOR2
#define MotorPin3 9
#define MotorPin4 10
//button 
#define buttonPin1 12 
#define buttonPin2 13



void setup() {
pinMode(MotorPin1,OUTPUT);
pinMode(MotorPin2,OUTPUT);
pinMode(MotorPin3,OUTPUT);
pinMode(MotorPin4,OUTPUT);
pinMode(buttonPin1,INPUT_PULLUP);
pinMode(buttonPin2,INPUT_PULLUP);
}

void loop() {

char buttonState1=digitalRead(buttonPin1);
char buttonState2=digitalRead(buttonPin2);
 if(buttonState1 == LOW)
 {delay(50);                                  //debounce button press
   if(buttonState1 == LOW)
   {
     digitalWrite(MotorPin1,HIGH);           //run both motor in same direction
     digitalWrite(MotorPin2,LOW);
     digitalWrite(MotorPin3,HIGH);
     digitalWrite(MotorPin4,LOW);
  }
 }
 
 if(buttonState2 == LOW)
 {delay(50);
   if(buttonState2 == LOW)
   {
     digitalWrite(MotorPin1,LOW);
     digitalWrite(MotorPin2,HIGH);              //run both motor opposite to direction mention above
     digitalWrite(MotorPin3,LOW);
     digitalWrite(MotorPin4,HIGH);
  }
 }
 
}
