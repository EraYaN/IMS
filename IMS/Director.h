#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "SensorDHT.h"
#include "Pins.h"

/// <summary>
///	Class that will direct all actions of the arduino and store its status.
/// </summary>
class Director{
	//Class discription
public:	
    Director(unsigned int pid);
	void Init();
	void Tick();
	int SpecialRoutine();
	void StartProgram();	
	SensorDHT s_DHT22;
private:	
	unsigned int program_id;
	
};
#endif