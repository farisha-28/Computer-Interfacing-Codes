void setup() {
  // put your setup code here, to run once:
  
  pinMode(13, OUTPUT ); //parameters for pinMode - pin Number, Mode( output/input)

}

void loop() {
  // put your main code here, to run repeatedly:

  //digital write to turn the light on

  digitalWrite(13, HIGH); //parameters for digitalWrite -  pin number, status( HIGH/1/5 volts or LOW/0/0 volt)
  delay(500);
  digitalWrite(13, LOW);
  delay(500);

  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);

}
