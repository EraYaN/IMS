//Board = Arduino Mega 2560 or Mega ADK
#define ARDUINO 103
#define __AVR_ATmega2560__
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
#define __attribute__(x)
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__
#define __builtin_va_list
#define __builtin_va_start
#define __builtin_va_end
#define __DOXYGEN__
#define prog_void
#define PGM_VOID_P int
#define NOINLINE __attribute__((noinline))

typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {}

//already defined in arduno.h
//already defined in arduno.h
extern void *testMalloc(size_t size);
extern void testFree(void *block);
void fr(const char* text);
void initScreen();
char* substr(char* str, int start, int number);
unsigned int getStrWidth(const char *s);
void draw();
int drawStatusMessage(char* msg);
void frameStatusMessage(char* msg);
void frame();

#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\Erwin\GitHub\IMS\src\IMS.ino"
#include "C:\Users\Erwin\GitHub\IMS\src\Definitions.h"
#include "C:\Users\Erwin\GitHub\IMS\src\Director.h"
#include "C:\Users\Erwin\GitHub\IMS\src\Director.ino"
#include "C:\Users\Erwin\GitHub\IMS\src\MemoryFunctions.ino"
#include "C:\Users\Erwin\GitHub\IMS\src\Pins.h"
#include "C:\Users\Erwin\GitHub\IMS\src\ScreenFunctions.ino"
#include "C:\Users\Erwin\GitHub\IMS\src\Sensor.h"
#include "C:\Users\Erwin\GitHub\IMS\src\Sensor.ino"
#include "C:\Users\Erwin\GitHub\IMS\src\SensorDHT.h"
#include "C:\Users\Erwin\GitHub\IMS\src\SensorDHT.ino"
