#include "plug.h"
#include "Sensor.h"
#include "Schedule.h" //subject to change as these are just the abstract classes


class Thermostat{
    public:
        Thermostat(); //default constructor
        void update(); //defines what to do on update
    
    private:
        Sensor sensor; //Thermostat has a sensor
        Plug plug; //Thermostat has a plug
        Schedule schedule; //Thermostat has a schedule 
        
}