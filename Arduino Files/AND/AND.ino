byte a,b,c,d,e;
void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(12);
  b = digitalRead(11);
  c = digitalRead(10);
  d = digitalRead(9);
  e = b|c|d
  digitalWrite(13, a && e);
}
