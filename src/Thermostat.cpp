#include "Thermostat.h"
#include <unistd.h>

//define the constructor
Thermostat::Thermostat(){
    sensor = ShellySensor(); //initializes sensor from shelly sensor def 
    plug = ShellyPlug();
    schedule = Schedule();

}

//define the update function
Thermostat::update(){
  
   //first need to check where we are in the schedule
  schedule.update(); //processes schedule stuff based on current time
  double tempDesired = schedule.getDesiredTemp(); //need to get temp we want based on schedule 
  double tempCurr = sensor.getCurrTemp(); //gets current temperature according to the sensor
  
  if(tempDesired - tempCurr <= 0){ //if current temperature is above or equal to desired, turn off the plug
    plug.turnOff();
  }
  else{
    plug.turnOn();
  }

  sleep(600); //sleeps for 10 minutes before updating again
}