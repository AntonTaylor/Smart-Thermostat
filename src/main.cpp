#include <iostream>
#include "Thermostat.h"
using namespace std;

int main(){
    //creates thermostat object 
	Thermostat thermostat = Thermostat();
    while(1){

        thermostat.update();

    }

    return 0;
}

