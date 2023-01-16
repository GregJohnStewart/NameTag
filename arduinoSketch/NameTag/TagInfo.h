#ifndef TAG_INFO_H
#define TAG_INFO_H

#include <Arduino.h>

class TagInfo {
private:
    String fullName;
    String title;
    String location;
    String since;
    String logoFileName;
	
public:
    
    TagInfo(
    	String fullName,
    	String title,
    	String location,
    	String since,
    	String logoFileName
    );
    
    String getName();
    String getTitle();
    String getLocation();
    String getSince();
    String getLogoFileName();
};

#endif
