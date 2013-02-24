#include "Director.h"
#include <Time.h>

//Function Declarations for Director
/// <summary>
///	Constructor of the Director class.
/// </summary>
/// <param name="pid">ID of the program to run.</param>
Director::Director(unsigned int pid)
	:s_DHT22("Broedmachine",DHT22,DHT22_PIN)
{
	//contruct
	program_id = pid;	
	//events = {new Event("Test", EventTime, 0.5 /*noon*/, 28, HIGH)};
}
/// <summary>
///	Constructor of the Director class. Run default program.
/// </summary>
/*Director::Director() {
Director(0);
}*/
void Director::Init() {
	//contruct	
	s_DHT22.Init();
}
void Director::Tick(){
	//runs every "loop()"
	//Update Time
	//doTimeWork();
}
int Director::SpecialRoutine(){
	//Pause all and execute task. Like calibrating the pH-probe.
	return 0;
}
void Director::StartProgram(){
	//start the program.
	int errCode = 0;
	//update all sensor values
	if(errCode=s_DHT22.updateValue()!=0) Serial.println("DHT11 update error"+errCode);
	delay(100);	
	//	
	//draw screen
	frame(); 
	//delay(2000);	
}