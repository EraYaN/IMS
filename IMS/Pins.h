#ifndef PINS_H
#define PINS_H
//Pin configurations
const int DHT22_PIN = 6; //unused  SPI Com: SCK = 13, MOSI = 11, CS (SCE) = 10, A0 (D/C) = 9, Reset = 8;
const int SCREEN_MOSI = 11;// Used for LCD DN(MOSI) pin (SW SPI)
const int SCREEN_SCK = 13; // Used for LCD SCLK pin (SW SPI)
const int SCREEN_SS = 10; //Used for LCD SCE pin (SW SPI)
const int SCREEN_A0 = 9; //Used for LCD D/C pin (SW SPI)
const int SCREEN_RST = 8; //Used for LCD RST pin (SW SPI)
#endif