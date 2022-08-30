byte a;
byte b;
void setup() {
  // put your setup code here, to run once:
 
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(8);
  b = digitalRead(9);
  digitalWrite(4, a ^ b);
}
