#ifndef LIFE_HELPERS_H
#define LIFE_HELPERS_H

#include "globals.h"
#include "BuiltinHelpers.h"
#include "ScreenHelpers.h"

class LifeHelpers{
	public:
		static void doSetup();
		static void stopProg();
		static void unrecoverableError(String errMsg);
};


#endif
