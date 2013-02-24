#include <SPI.h>
#include "Definitions.h"
#include "Director.h"
#include <dht.h>
#include "Pins.h"
#include "Sensor.h"
#include <MemoryFree.h>
#include <U8glib.h>

Director drctr(0);
dht DHT;

void setup()
{
	Serial.begin(115200);	
	initScreen();	
	drctr.Init();
}

void loop()
{
	Serial.println(F("Starting program in 1 second..."));
	delay(1000);
	drctr.StartProgram();
	Serial.println(F("Program done."));
}
