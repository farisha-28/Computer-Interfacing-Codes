//String name = "";  
//String Mobile = "";  
//String Address = "";  
//String Email = "";  
//  
//void setup()   
//{  
//    Serial.begin(9600);  
//}  
//  
//void loop()   
//{  
//    Serial.println("Enter your name.");  
//    while (Serial.available() == 0){}  
//    name = Serial.readString(); //Reading the Input string from Serial port.  
//    Serial.println("Enter your Moblie No.");  
//    while (Serial.available() == 0) {}  
//    Mobile = Serial.readString();  
//    Serial.println("Enter your Address.");  
//    while (Serial.available() == 0) {}  
//    Address = Serial.readString();  
//    Serial.println("Enter your Email.");  
//    while (Serial.available() == 0) {}  
//    Email = Serial.readString();  
//    Serial.println("-------------------------"); //Showing the details  
//    Serial.println("YOUR NAME:" + name);  
//    Serial.println("YOUR MOBILE NO:" + Mobile);  
//    Serial.println("YOUR ADDRESS:" + Address);  
//    Serial.println("YOUR EMAIL:" + Email);  
//    Serial.println("Thanks You...");  
//    Serial.println("");  
//    while (Serial.available() == 0) {}  
//} 

String name = "";  
String Mobile = "";  
String Address = "";  
String Email = "";  
  
void setup()   
{  
    Serial.begin(9600);  
}  
  
void loop()   
{  
    Serial.println("Enter your name.");  
    if(Serial.available()==0){

          name = Serial.readString(); //Reading the Input string from Serial port. 
//          delay(2000); 
          Serial.println("Enter your Moblie No.");  
      
          Mobile = Serial.readString();  
//          delay(2000);
          Serial.println("Enter your Address.");  
   
          Address = Serial.readString();  
//          delay(2000);
          Serial.println("Enter your Email.");  
   
          Email = Serial.readString();  
//          delay(2000);
          Serial.println("-------------------------"); //Showing the details  
          
          Serial.println("YOUR NAME:" + name);  
          Serial.println("YOUR MOBILE NO:" + Mobile);  
          Serial.println("YOUR ADDRESS:" + Address);  
          Serial.println("YOUR EMAIL:" + Email);  
          Serial.println("Thanks You...");  
          Serial.println("");
//          delay(2000);
      
      }  

  
   
} 
