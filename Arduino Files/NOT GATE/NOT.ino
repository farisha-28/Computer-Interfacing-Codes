byte a;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(8);
  if (a==HIGH){
    digitalWrite(4, LOW);
  }
  else{
    digitalWrite(4, HIGH);
  }
  

}
