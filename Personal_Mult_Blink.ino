int ledPins[] = {2,3,4,5,6,7,8,9};

void setup() {
  // put your setup code here, to run once:
for(int i = 0; i < 8; i++){         //this is a loop and will repeat eight times
      pinMode(ledPins[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  dotsLoop();

}

void dotsLoop(){
  int delayTime = 150;
  digitalWrite(ledPins[0], HIGH);  //Turns on LED #0 (connected to pin 2 )
  digitalWrite(ledPins[1], LOW);
  delay(delayTime);                //waits delayTime milliseconds

  digitalWrite(ledPins[2], HIGH);  //Turns on LED #2 (connected to pin 4 )
  digitalWrite(ledPins[3], LOW);
  delay(delayTime);                //waits delayTime milliseconds

  digitalWrite(ledPins[4], HIGH);  //Turns on LED #4 (connected to pin 6 )
  digitalWrite(ledPins[5], LOW);
  delay(delayTime);                //waits delayTime milliseconds

  digitalWrite(ledPins[6], HIGH);  //Turns on LED #6 (connected to pin 8 )
  digitalWrite(ledPins[7], LOW);
  delay(delayTime);                //waits delayTime milliseconds


 //Turns Each LED Off
  digitalWrite(ledPins[0], LOW);  //Turns on LED #0 (connected to pin 2 )
  digitalWrite(ledPins[1], HIGH);
  delay(delayTime);                //waits delayTime milliseconds
  
  digitalWrite(ledPins[2], LOW);  //Turns on LED #2 (connected to pin 4 )
  digitalWrite(ledPins[3], HIGH);
  delay(delayTime);                //waits delayTime milliseconds
  
  digitalWrite(ledPins[4], LOW);  //Turns on LED #4 (connected to pin 6 )
  digitalWrite(ledPins[5], HIGH);  
  delay(delayTime);                //waits delayTime milliseconds
  
  digitalWrite(ledPins[6], LOW);  //Turns on LED #6 (connected to pin 8 )
  digitalWrite(ledPins[7], HIGH);  
  delay(delayTime);                //waits delayTime milliseconds

//going back
 
 digitalWrite(ledPins[7], LOW);  //Turns on LED #0 (connected to pin 2 )
  digitalWrite(ledPins[6], HIGH);
  delay(delayTime);                //waits delayTime milliseconds
  
  digitalWrite(ledPins[5], LOW);  //Turns on LED #2 (connected to pin 4 )
  digitalWrite(ledPins[4], HIGH);
  delay(delayTime);                //waits delayTime milliseconds
  
  digitalWrite(ledPins[3], LOW);  //Turns on LED #4 (connected to pin 6 )
  digitalWrite(ledPins[2], HIGH);  
  delay(delayTime);                //waits delayTime milliseconds
  
  digitalWrite(ledPins[1], LOW);  //Turns on LED #6 (connected to pin 8 )
  digitalWrite(ledPins[0], HIGH);  
  delay(delayTime);
}

