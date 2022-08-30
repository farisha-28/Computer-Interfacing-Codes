int a = 28;
double b = 5.67;
float c = 5.6;
char d = 'Y';

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //baud rate, bps transmit
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(a);
  Serial.println(b);
  Serial.println(c);
  Serial.println(d);
  Serial.println("Welcome to UAP");

  
  

}
