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

    Serial.begin (9400) ;
}

void loop() {
// put your main code here, to run repeatedly:
    readingValue = analogRead(potenc) ;
    speed = map (readingValue, 0, 1023, 40, 254);

    for (int i = 7; i <= 13; i++) {
        readingValue = analogRead(potenc);
        digitalWrite (i,HIGH);
        delay(speed);
        digitalWrite (i,LOW);
        delay(speed);
    }

    for (int i = 12; i > 8; i--) {
        readingValue = analogRead(potenc);
        digitalWrite(i,HIGH) ;
        delay(speed);
        digitalWrite (i,LOW) ;
        delay(speed);
    }

}
