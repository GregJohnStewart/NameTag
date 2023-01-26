#include "ScreenHelpers.h"

ThinkInk_290_Tricolor_Z10 SCREEN(EPD_DC, EPD_RESET, EPD_CS, SRAM_CS, EPD_BUSY);

long lastUpdateTime = -1 * (SCREEN_UPDATE_WAIT / 3);// or millis() to ensure waited long enough

void ScreenHelpers::doSetup(){
	SCREEN.begin(THINKINK_TRICOLOR);
}

bool ScreenHelpers::canRefreshScreen(){
	return SCREEN_UPDATE_WAIT < millis() - lastUpdateTime;
}

void ScreenHelpers::waitTilCanRefreshScreen(){
	while(!ScreenHelpers::canRefreshScreen()){
		delay(500);
	}
}

void ScreenHelpers::setupScreen(std::function<void(ThinkInk_290_Tricolor_Z10*)> setupFunc){
	ScreenHelpers::waitTilCanRefreshScreen();

	SCREEN.clearBuffer();
	setupFunc(&SCREEN);
	SCREEN.display();
	
	lastUpdateTime = millis();
}

void ScreenHelpers::simpleDisplayText(ThinkInk_290_Tricolor_Z10* screen, const char* text, uint16_t color, uint16_t textSize){
	screen->setCursor(1, 1);
	screen->setTextColor(color);
  	screen->setTextWrap(true);
  	screen->setTextSize(textSize);
  	screen->print(text);
}

void ScreenHelpers::displayErrorMessage(const String message){
	const char* text = message.c_str();
	ScreenHelpers::setupScreen([text](ThinkInk_290_Tricolor_Z10* screen) {
	 	ScreenHelpers::simpleDisplayText(
	 		screen,
	 		text,
	 		EPD_RED,
	 		1
	 	);
	 });
}
