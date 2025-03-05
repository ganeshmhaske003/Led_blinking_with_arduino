//Pin connected to the LED
int ledPin = 13;
void setup()
{
  // inititalize the digital pin s an output
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  // turn the LED ON 
  digitalWrite(ledPin, HIGH);

  //wait for 1 seconds (1000 miliseconds)
  delay(1000);

  //turn the led off
  digitalWrite(ledPin, LOW);

  //wait for 1 seconds(1000 milisecond)
  delay(1000);
}