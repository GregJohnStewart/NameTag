//#include <dummy.h>

#include "globals.h"
#include "BuiltinHelpers.h"
#include "ScreenHelpers.h"
#include "LifeHelpers.h"
#include "SdHelpers.h"


//UMS3 ums3;
//ThinkInk_290_Tricolor_Z10 display(EPD_DC, EPD_RESET, EPD_CS, SRAM_CS, EPD_BUSY);

void setup() {
  Serial.begin(115200);
  while (DEBUG && !Serial) {
    delay(100);
  }
  Serial.println("Adafruit EPD full update test in red/black/white");
	
  BuiltinHelpers::doSetup();
  
  BuiltinHelpers::turnOnBlueLed();
  
  ScreenHelpers::doSetup();
  LifeHelpers::doSetup();
  SdHelpers::doSetup();

  
  BuiltinHelpers::turnOffBlueLed();

	ScreenHelpers::setupScreen([](ThinkInk_290_Tricolor_Z10* screen) {
	 	ScreenHelpers::simpleDisplayText(
	 		screen,
	 		"Success!",
	 		EPD_BLACK,
	 		1
	 	);
	 }); 
}

//int color = 0;
//int lastUpdateTime = -1 * SCREEN_UPDATE_WAIT;
//byte curDemo = 0;

void loop() {
	sleep(10000);
}
