#include "BuiltinHelpers.h"


UMS3 builtins;

inline int brightness = 255 / 5;

void BuiltinHelpers::doSetup(){
	builtins.begin();
	builtins.setPixelBrightness(255 / 5);
}
void BuiltinHelpers::turnOnBlueLed(){
	builtins.setBlueLED(true);
}
void BuiltinHelpers::turnOffBlueLed(){
	builtins.setBlueLED(false);
}

void BuiltinHelpers::turnOnRgb(){
	builtins.setPixelBrightness(brightness);
}

void BuiltinHelpers::turnOffRgb(){
	builtins.setPixelBrightness(0);
}

void BuiltinHelpers::setRgbColor(uint8_t colorWheelPos){
	builtins.setPixelColor(UMS3::colorWheel(colorWheelPos));
	BuiltinHelpers::turnOnRgb();
}

void BuiltinHelpers::setRgbErr(){
	BuiltinHelpers::setRgbColor(BuiltinHelpers::RGB_ERROR);
}
