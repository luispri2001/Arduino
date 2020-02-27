 int buttonState = 0;
void setup()
{
  pinMode(7, INPUT);
  pinMode(9, OUTPUT);
 
}

void loop()
{
  buttonState = digitalRead(7);
  if (buttonState==HIGH){
  digitalWrite(9, HIGH);
  }
  if (buttonState==LOW){
  digitalWrite(9, LOW);
  }
}