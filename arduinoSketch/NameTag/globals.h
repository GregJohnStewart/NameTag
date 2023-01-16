/**
 * Global variables for NameTag
 * Author: Greg Stewart
 */
#ifndef GLOBALS_H
#define GLOBALS_H

#include <UMS3.h>
#include "Adafruit_ThinkInk.h"

#include "FS.h"
#include "SD.h"
#include "SPI.h"




#define EPD_DC      3  //10 // can be any pin, but required!
#define EPD_CS      1  //9  // can be any pin, but required!
#define SRAM_CS     38 //6  // can set to -1 to not use a pin (uses a lot of RAM!)
#define EPD_BUSY    -1 //7  // can set to -1 to not use a pin (will wait a fixed delay)
#define EPD_RESET   -1 //8  // can set to -1 and share with chip Reset (can't deep sleep)
#define SCREEN_UPDATE_WAIT  30000

#define BUTTON_A	7
#define BUTTON_B	10
#define BUTTON_C	11








#endif
