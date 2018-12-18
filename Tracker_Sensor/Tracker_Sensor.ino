int tracingPin = 22;
int ledPin = 52;

void setup()
{
pinMode(tracingPin, INPUT);
pinMode(ledPin, OUTPUT);
}

void loop()
{
int val = digitalRead(tracingPin);
  if(val == HIGH)
  { 
  digitalWrite(ledPin, HIGH);
  }
  else
  {
  digitalWrite(ledPin, LOW);
  }
}
