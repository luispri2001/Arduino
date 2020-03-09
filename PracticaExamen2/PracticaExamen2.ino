unsigned int readingValue;
const byte led1 = 7;
const byte led2 = 8;
const byte led3 = 9;
const byte led4 = 10;
const byte led5 = 11;
const byte led6 = 12;
const byte led7 = 13;
const byte potenc = A0;
byte speed;

void setup () {
// put your setup code here, to run once:
    pinMode (led1, OUTPUT);
    pinMode (led2, OUTPUT);
    pinMode (led3, OUTPUT);
    pinMode (led4, OUTPUT);
    pinMode (led5, OUTPUT);
    pinMode (led6, OUTPUT);
    pinMode (led7, OUTPUT);

    Serial.begin (9600) ;
}

void loop() {
// put your main code here, to run repeatedly:
    readingValue = analogRead(potenc) ;
    speed = map (readingValue, 0, 1023, 40, 254);

for (int n=7; n<13; n++){
  readingValue = analogRead(potenc);
  digitalWrite(n, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(speed);                       // wait for a second
  digitalWrite(n, LOW);    // turn the LED off by making the voltage LOW
  delay(speed);                       // wait for a second
}
for (int n=13; n>7; n--){
  readingValue = analogRead(potenc);
  digitalWrite(n, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(speed);                       // wait for a second
  digitalWrite(n, LOW);    // turn the LED off by making the voltage LOW
  delay(speed); 
}
}
