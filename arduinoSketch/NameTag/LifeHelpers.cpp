
#include "LifeHelpers.h"

void LifeHelpers::doSetup(){
}


void LifeHelpers::stopProg(){
	while(true){
		sleep(10000);
	}
}

void LifeHelpers::unrecoverableError(String errMsg){
	Serial.print("FATAL ERROR:: ");
	Serial.println(errMsg);
	
	BuiltinHelpers::setRgbErr();
	ScreenHelpers::displayErrorMessage(errMsg);
	BuiltinHelpers::turnOffBlueLed();
	
	LifeHelpers::stopProg();
}
