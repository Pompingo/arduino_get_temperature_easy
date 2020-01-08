# Arduino GetTemperatureEasy

Abfrage eines Temperature-Sensors über eine Libary. Die Anfrage kann dann ganz einfach mit einem One-Liner gemacht werden.

## Zusätzlich benötigte Bibliotheken: ##

- OneWire
- DallasTemperature


<code>
  
#include <GetTemperatureEasy.h>

GetTemperatureEasy Temp1(3, "Sensor 1");

void setup() {
  Serial.begin(9600);
  
  Temp1.begin();
}

void loop() {
  Temp1.run();

  Serial.println("-----------------");
  Serial.println(Temp1.getCaption() + ": " + String(Temp1.getCurrentTemperature()) + " °C");
  Serial.println("-----------------");
  delay(2000);
}

</code>  
