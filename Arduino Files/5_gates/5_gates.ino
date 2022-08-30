int input;
int a;
int b;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Please select a number between 1 to 5:");
  while(Serial.available()==0){}
  input = Serial.parseInt();
  
  a = digitalRead(4);
  b = digitalRead(5);
  if(input==1){
    digitalWrite(13, a&b);
    Serial.println("AND operation is being performed. Please wait for some moments and find the output at pin 13.");
  }
  else if(input==2){
    digitalWrite(13, a|b);
    Serial.println("OR operation is being performed. Please wait for some moments and find the output at pin 13.");
  }
  
}
