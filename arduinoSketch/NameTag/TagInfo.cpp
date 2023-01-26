#include "TagInfo.h"

TagInfo::TagInfo(
	InfoPart fullNameIn,
    InfoPart titleIn,
    InfoPart locationIn,
    InfoPart sinceIn,
    String logoFileNameIn
){
	fullName = fullNameIn;
	title = titleIn;
	location = locationIn;
	since = sinceIn;
	logoFileName = logoFileNameIn;
}

TagInfo::TagInfo(
	JsonObject configObj
){
}

InfoPart TagInfo::getName(){
	return fullName;
}

InfoPart TagInfo::getTitle(){
	return title;
}

InfoPart TagInfo::getLocation(){
	return location;
}

InfoPart TagInfo::getSince(){
	return since;
}

String TagInfo::getLogoFileName(){
	return logoFileName;
}



const char* TagInfo::getTemplateConfig(){
	return R"_YAML_STRING_(
# Change values to your liking!
fullName:
  value: John Doe
  size: 5
title:
  value: Consultant
  size: 3
location:
  value: North America
  size: 3
since:
  value: 2000
  size: 2
logoImageFile: "" # example: /logo.bmp 
)_YAML_STRING_";
}
