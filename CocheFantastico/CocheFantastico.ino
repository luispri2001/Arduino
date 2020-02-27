// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
for (int n=9; n<13; n++){
  digitalWrite(n, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(n, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
for (int n=13; n>10; n--){
  digitalWrite(n, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(n, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
}
}
