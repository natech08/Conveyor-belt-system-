//Led 1 & Led 2
#define led1  12                      //+ve terminal of led2 connected to pin12 of arduino and -ve to the ground.
#define led2  13                      //+ve terminal of led1 connected to pin13 of arduino and -ve to the ground.

//button1 & button 2   
#define buttonPin1 2                 //source pin of the buttonPin1 connected to pin2 of arduino and -ve to the ground.
#define buttonPin2 3                 //source pin of the buttonPin2 connected to pin3 of arduino and -ve to the ground.

//initial button value
int buttonstate1 =0;                
int buttonstate2 =0;                 //initially the buttons are at 0 (i.e: at low/off condition)

//debounce time for buttons
int debounceTime = 50;              //to reduce the de-bouncing effect the mechanical button delay is introduced.

//basic setup required for the pins of arduino.
void setup() 
{
   pinMode(12, OUTPUT);             
   pinMode(13, OUTPUT);
   pinMode(2, INPUT_PULLUP);
   pinMode(3, INPUT_PULLUP);

}

//considering the below loop the system works. 

  void loop()
 {
    buttonstate1 = digitalRead(buttonPin1);        
    if (buttonstate1 != HIGH)                      
       {
        delay(debounceTime);                      
       
       if (buttonstate1 != HIGH)
       {
        digitalWrite(13,LOW); 
        digitalWrite(12,HIGH); 
        }
     
       }
    buttonstate2 = digitalRead(buttonPin2);
    if (buttonstate2 != HIGH)
       {
        delay(debounceTime);
       

       if (buttonstate2 != HIGH)
         {
        digitalWrite(12,LOW);
        digitalWrite(13,HIGH);
         }
        
       }
 }















 
