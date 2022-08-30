void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x<10; x++){

    digitalWrite(13,HIGH);
    Serial.print(x, DEC);
    Serial.print("\t");
    Serial.print(x, BIN);
    Serial.print("\t");
    Serial.print(x, OCT);
    Serial.print("\t");
    Serial.print(x, HEX);
    Serial.println();
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
    x++;
    digitalWrite(12,HIGH);
    Serial.print(x, DEC);
    Serial.print("\t");
    Serial.print(x, BIN);
    Serial.print("\t");
    Serial.print(x, OCT);
    Serial.print("\t");
    Serial.print(x, HEX);
    Serial.println();
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000);
    x++;
    digitalWrite(11,HIGH);
    Serial.print(x, DEC);
    Serial.print("\t");
    Serial.print(x, BIN);
    Serial.print("\t");
    Serial.print(x, OCT);
    Serial.print("\t");
    Serial.print(x, HEX);
    Serial.println();
    delay(1000);
    digitalWrite(11,LOW);
    delay(1000);
    x++;

  }
    
  
  
  

}
