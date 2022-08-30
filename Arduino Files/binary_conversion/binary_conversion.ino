void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //baud rate, bps

}

void loop() {
  // put your main code here, to run repeatedly:
  // print labels
  Serial.print("DEC");
  Serial.print("\t");
  Serial.print("BIN");
  Serial.println(); // carriage return after the last label
  for (int x = 0; x < 20; x++) { // only part of the ASCII chart, change to suit
  // print it out in two formats:
  Serial.print(x, DEC); // print as an ASCII-encoded decimal
  Serial.print("\t"); // prints a tab
  Serial.print(x, BIN); // print as an ASCII-encoded binary
  Serial.print("\t"); // prints a tab
  Serial.print(x, HEX);
  Serial.println(); 
  delay(200); // delay 200 milliseconds
  }
 Serial.println(); // prints another carriage return


}
