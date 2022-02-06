

#include "DHT.h"

#define dht_1 2 
//DHTPIN 2     

// Uncomment whatever type you're using!
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT11   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(dht_1, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT Final!"));

  dht.begin();
}

void loop() {
    delay(500);

  float humid = dht.readHumidity();
  float temp = dht.readTemperature();
  float temp2 = dht.readTemperature();
  temp2 = temp2 - 1;
  


  Serial.println(temp);
  Serial.println(humid);
  Serial.println(temp2);
 
  
 











  
