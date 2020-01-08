//#ifndef GetTemperatureEasy_h
#define GetTemperatureEasy_h

#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

class GetTemperatureEasy {

    private:
        String _caption;
        int _sensorsPin;
        int _alarmPin;
        float _startTemperature;
        float _stopTemperature;
        float _currentTemperature;
        OneWire _oneWire;
        DallasTemperature _sensors;

    public:
        GetTemperatureEasy(int pin, String caption);
        void setStartTemperature(float value);
        void setStopTemperature(float value);
        float getStartTemperature();
        float getStopTemperature();
        float getCurrentTemperature();
        int getSensorPin();
        String getCaption();

        void setSensorPin(int value);
        void setAlarmPin(int value);

        void begin();
        void run();
        void run_debug();

};