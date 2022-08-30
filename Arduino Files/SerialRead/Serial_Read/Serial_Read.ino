int a;
int b;
int c;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("Please enter number a");
  while(Serial.available()==0){}
  a=Serial.parseInt();   //The parseInt() function from the Serial library is made to scan down the serial receive buffer one byte at a time in search of the first valid numerical digit.

  Serial.println("Please enter number b");
  while(Serial.available()==0){}
  b=Serial.parseInt();
  c = a+b;

  Serial.println(c);
  delay(1000);
  
}
