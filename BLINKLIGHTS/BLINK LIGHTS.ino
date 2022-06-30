# define  ledPin 4
# define ledPin 7
void setup() {
  
    pinMode(ledPin, OUTPUT);
    Serial.begin (9600);
    
    
  // put your setup code here, to run once:

}

void loop() {
   
    digitalWrite(7, HIGH);
     digitalWrite(4, LOW);
    
    delay(1000);
    Serial.println("ledPin1 ON");
     digitalWrite(7, LOW);
     digitalWrite(4, HIGH);
      delay(1000);
      Serial.println("ledPin2 OFF");
      
  // put your main code here, to run repeatedly:

}
