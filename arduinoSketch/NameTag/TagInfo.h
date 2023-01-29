#ifndef TAG_INFO_H
#define TAG_INFO_H

#include <Arduino.h>
#include <ArduinoJson.h>
#define HAS_ARDUINOJSON
#include <YAMLDuino.h>
#include "InfoPart.h"

class TagInfo {
private:
    InfoPart fullName;
    InfoPart title;
    InfoPart location;
    InfoPart since;
    String logoFileName;
	
public:
    
    TagInfo(
    	InfoPart fullName,
    	InfoPart title,
    	InfoPart location,
    	InfoPart since,
    	String logoFileName
    );
    
    TagInfo(
		JsonObject configObj
    );

    TagInfo();
    
    InfoPart getName();
    InfoPart getTitle();
    InfoPart getLocation();
    InfoPart getSince();
    String getLogoFileName();
    
    static const char* getTemplateConfig();
};

#endif
