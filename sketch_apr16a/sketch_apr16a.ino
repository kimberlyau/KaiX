#include <Servo.h>

const int sPin = 9;
const int bPin = 2; // button

Servo servo;

int button;
int pos = ; //position of servo

boolean up = true;

void setup() 
{
  servo.attach(sPin);

  //set up button
  pinMode(sPin, OUTPUT);
  pinMode(bPin, INPUT);
  Serial.begin(9600); 

}

void loop() 
{
  //read buttons
  button = digitalRead(bPin);

  if(button == HIGH)
  {      
      if (pos > 178)
      {
        up = false;
        Serial.println("T");
      }

      if (pos <= 1){
        up = true;
        Serial.println("F");
      }    

      if (up){
        Serial.println(pos);
        servo.write(pos++);
      }
      else {
        Serial.println("flag");
        servo.write(pos--);
      }      

  }
    
 delay(15);
 
}
