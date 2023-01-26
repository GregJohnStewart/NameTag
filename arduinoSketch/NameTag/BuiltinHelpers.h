#ifndef BUILTIN_HELPERS_H
#define BUILTIN_HELPERS_H

#include <UMS3.h>

#include "globals.h"

class BuiltinHelpers {
	public:
		static void doSetup();
		
		static void turnOnBlueLed();
		static void turnOffBlueLed();
		
		static void turnOnRgb();
		static void turnOffRgb();
		static void setRgbColor(uint8_t colorWheelPos);
		static void setRgbErr();

		const static uint8_t RGB_RED = 0;
		const static uint8_t RGB_ERROR = BuiltinHelpers::RGB_RED;
};

#endif
