//int ledPin = 9; // LED connected to digital pin 9
//int led = 10;
//void setup() {
//  // put your setup code here, to run once:
//  pinMode(ledPin, OUTPUT);
//  pinMode(led, OUTPUT);
//  
//
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  // fade in from min to max in increments of 5 points:
// for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
// // sets the value (range from 0 to 255):
// analogWrite(ledPin, fadeValue);
// // wait for 30 milliseconds to see the dimming effect
// delay(30);
// }
// // fade out from max to min in increments of 5 points:
// for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
// // sets the value (range from 0 to 255):
// analogWrite(ledPin, fadeValue);
// // wait for 30 milliseconds to see the dimming effect
// delay(30);
// }
//
//
//
//  // fade in from min to max in increments of 5 points:
// for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
// // sets the value (range from 0 to 255):
// analogWrite(led, fadeValue);
// // wait for 30 milliseconds to see the dimming effect
// delay(30);
// }
// // fade out from max to min in increments of 5 points:
// for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
// // sets the value (range from 0 to 255):
// analogWrite(led, fadeValue);
// // wait for 30 milliseconds to see the dimming effect
// delay(30);
// }
//
//}

int ledPin = 9; // LED connected to digital pin 9
int led = 10;
int buttonPin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {

  int buttonVal = digitalRead(buttonPin);
  
  // put your main code here, to run repeatedly:
  // fade in from min to max in increments of 5 points:

   if (buttonVal == HIGH) {
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
      delay(100);
    }
    
   }
   else{
    // fade out from max to min in increments of 5 points:
    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
      delay(100);
    }
    
   }

   if (buttonVal == HIGH) {
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
      delay(100);
    }
    
   }
   else{
    // fade out from max to min in increments of 5 points:
    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
      analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
      delay(100);
    }
    
   }
}
