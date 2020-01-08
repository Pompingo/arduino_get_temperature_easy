#include <GetTemperatureEasy.h>

GetTemperatureEasy Temp1(3, "Sensor 1");
GetTemperatureEasy Temp2(7, "Sensor 2");

void setup() {
  Serial.begin(9600);
  
  Temp1.begin();
  Temp2.begin();
}

void loop() {
  Temp1.run();
  Temp2.run();

  Serial.println("-----------------");
  Serial.println(Temp1.getCaption() + ": " + String(Temp1.getCurrentTemperature()) + " °C");
  Serial.println(Temp2.getCaption() + ": " + String(Temp2.getCurrentTemperature()) + " °C");
  Serial.println("-----------------");
  delay(2000);
}
