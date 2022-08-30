byte A, B, C,D;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12,INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  A = digitalRead(11);
  B = digitalRead(12);
  C = digitalRead(13);
  D = digitalRead(10);

  if(D ==LOW){
    digitalWrite(5, A^B);
    digitalWrite(6, A&B);
    
  }
  else{
    digitalWrite(5, A^B^C);
    digitalWrite(6, (A&B)|(B&C)|(A&C));
  }
  
}
