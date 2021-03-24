const int ledPin1 = 0;     // the number of the pushbutton pin
const int ledPin2 = 1;     // the number of the pushbutton pin
const int ledPin3 = 2;     // the number of the pushbutton pin
const int ledPin4 = 3;     // the number of the pushbutton pin
const int ledPin5 = 4;     // the number of the pushbutton pin
const int ledPin6 = 5;     // the number of the pushbutton pin
const int ledPin7 = 6;     // the number of the pushbutton pin
const int ledPin8 = 7;     // the number of the pushbutton pin
const int ledPin9 = 8;     // the number of the pushbutton pin
const int ledPin10 = 9;     // the number of the pushbutton pin

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);

}

void loop() {

    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
  
    
    digitalWrite(ledPin2, HIGH);
    delay(1000);
    digitalWrite(ledPin2, LOW);
 
    digitalWrite(ledPin3, HIGH);
    delay(1000);
    digitalWrite(ledPin3, LOW);
    
    
    digitalWrite(ledPin4, HIGH);
    delay(1000);
    digitalWrite(ledPin4, LOW);

    
    digitalWrite(ledPin5, HIGH);
    delay(1000);
    digitalWrite(ledPin5, LOW);
    
    digitalWrite(ledPin6, HIGH);
    delay(1000);
    digitalWrite(ledPin6, LOW);
 
    
    digitalWrite(ledPin7, HIGH);
    delay(1000);
    digitalWrite(ledPin7, LOW);
   
    
    digitalWrite(ledPin8, HIGH);
    delay(1000);
    digitalWrite(ledPin8, LOW);
        
    digitalWrite(ledPin9, HIGH);
    delay(1000);
    digitalWrite(ledPin9, LOW);
    
    digitalWrite(ledPin10, HIGH);
    delay(1000);
    digitalWrite(ledPin10, LOW);
     
}
