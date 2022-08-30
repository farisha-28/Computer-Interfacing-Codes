int led_var;
int num_var;

void setup() {
  // put your setup code here, to run once:

  //to establish serial communication and set baud rate to 9600
  Serial.begin(9600);
  for (int x = 8; x<=13; x++){
    pinMode(x, OUTPUT);
  }
 
}

void loop() {
  // put your main code here, to run repeatedly:
  for (num_var= 0,led_var= 8; (num_var<=20) && (led_var<=13); num_var++, led_var++){

    digitalWrite(led_var,HIGH);
    Serial.print(num_var, DEC);
    Serial.print("\t");
    Serial.print(num_var, BIN);
    Serial.print("\t");
    Serial.print(num_var, OCT);
    Serial.print("\t");
    Serial.print(num_var, HEX);
    Serial.println();
    delay(1000);
    digitalWrite(led_var,LOW);
    delay(1000);

    if(led_var == 13){
      led_var = 7;
    }
    
  }
  
}
