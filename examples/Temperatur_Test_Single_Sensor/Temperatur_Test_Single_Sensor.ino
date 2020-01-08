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
