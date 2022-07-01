# include "DHT.h"// library
# define DHTPIN 7//pin connected to

# define DHTTYPE  DHT11 // Type of dht
 DHT dht(DHTPIN, DHTTYPE); // INITIALIZATION

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Sending information

Serial.println("DHT SENSOR IS ON");
 dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  
    delay(3000);//wait 3 seconds before reading

   float h = dht.readHumidity(); // reads the humidity 
    float t = dht.readTemperature(); // reads the temperature

    if(isnan (h)||isnan (t)){
      Serial.println("NO DFT READING");
      return;
     

      
    }
  
  Serial.print("Current Temperature is ");
  Serial.println(h);
  Serial.print("Current Humidity is ");
  Serial.println(t);

}
