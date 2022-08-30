int a,b,c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

   Serial.println("Please enter number a");
   while(Serial.available() == 0) {
    }
    a = Serial.parseInt();
    a = Serial.read();
 
   
    Serial.println("Please enter number b");
    while (Serial.available() == 0) {}
    // read the incoming byte:
      b = Serial.parseInt();
      b = Serial.read();
      
    
    c = a+b;
    Serial.println(c);
    delay(1000);
    
}
