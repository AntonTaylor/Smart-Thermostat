#include "Thermostat.h"

//define the constructor
Thermostat::Thermostat(){
    sensor = ShellySensor(); //initializes sensor from shelly sensor def 
    plug = ShellyPlug();
    schedule = Shedule();
}