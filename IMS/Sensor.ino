#include "Sensor.h"

Sensor::Sensor(){
	name = "Unknown Sensor";
}
Sensor::Sensor(char* _name, SensorType _type){
	name= _name;
	type=_type;
}
int Sensor::Init(){
	//nothing
}
char* Sensor::getName(){
	return name;
}

