#include "GetTemperatureEasy.h"



GetTemperatureEasy::GetTemperatureEasy(int pin, String caption) {

    _sensorsPin = pin;
    _caption = caption;

    OneWire _oneWire;
    DallasTemperature _sensors;
}

void GetTemperatureEasy::setAlarmPin(int value) {
    _alarmPin = value;
}

int GetTemperatureEasy::getSensorPin() {
    return _sensorsPin;
}

float GetTemperatureEasy::getCurrentTemperature() {
    return _currentTemperature;
}

String GetTemperatureEasy::getCaption() {
    return _caption;
}

void GetTemperatureEasy::begin() {
    _oneWire.begin(getSensorPin());
    _sensors.setOneWire(&_oneWire);
    _sensors.begin();
}

void GetTemperatureEasy::run() {
    _sensors.requestTemperatures(); 
    _currentTemperature = _sensors.getTempCByIndex(0);     
}
