#ifndef DEFINITIONS_H
#define DEFINITIONS_H
/*Define shit here*/

enum EventType {
  EventInterval,
  EventTime,
  EventRandom
}; 
enum SensorType{
	Unknown,
	DHT11,
	DHT22,
	pHProbe,
	DS18B20,
	WaterLevel	
};
#endif
