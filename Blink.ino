int ledPin = 9;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  analogWrite(ledPin, 127);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  analogWrite(ledPin, 0);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
