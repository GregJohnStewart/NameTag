#ifndef INFO_PART_H
#define INFO_PART_H

#include <Arduino.h>
#include <ArduinoJson.h>
#include <YAMLDuino.h>

class InfoPart {
	private:
	  String value;
	  uint16_t size;
	  
	public:
    
	    InfoPart();
	    InfoPart(
	    	String value,
	    	uint16_t size
	    );
	    InfoPart(
	    	String curPart,
	    	JsonObject infoConfig
	    );
	    
	    String getValue();
	    uint16_t getSize();
};

#endif
