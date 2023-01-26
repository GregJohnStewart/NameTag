#include "SdHelpers.h"



void SdHelpers::doSetup(){
	if(!SD.begin(SD_CS)){
        LifeHelpers::unrecoverableError("Failed to mount SD card, check if inserted.");
    }
    uint8_t cardType = SD.cardType();

    if(cardType == CARD_NONE){
        LifeHelpers::unrecoverableError("No SD Card inserted.");
    }

    Serial.print("SD Card Type: ");
    if(cardType == CARD_MMC){
        Serial.println("MMC");
    } else if(cardType == CARD_SD){
        Serial.println("SDSC");
    } else if(cardType == CARD_SDHC){
        Serial.println("SDHC");
    } else {
        Serial.println("UNKNOWN");
    }
	
	if(!SD.exists(tagInfoFileName)){
		File infoFile = SD.open(tagInfoFileName, FILE_WRITE);

		if(infoFile){
			infoFile.println(TagInfo::getTemplateConfig());
			infoFile.close();
		} else {
			LifeHelpers::unrecoverableError("Could not open info file for writing:\n" + tagInfoFileName);
		}
	}

	if(!SD.exists(tagInfoFileName)){
		LifeHelpers::unrecoverableError("No info file/ could not write info file:\n" + tagInfoFileName);
	}

	
	
	
	
}
