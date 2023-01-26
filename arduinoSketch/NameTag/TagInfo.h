#ifndef TAG_INFO_H
#define TAG_INFO_H

#include <Arduino.h>
#include <ArduinoJson.h>
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
    
    InfoPart getName();
    InfoPart getTitle();
    InfoPart getLocation();
    InfoPart getSince();
    String getLogoFileName();
    
    static const char* getTemplateConfig();
};

#endif
