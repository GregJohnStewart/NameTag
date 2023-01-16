#include "TagInfo.h"

TagInfo::TagInfo(
	String fullNameIn,
    String titleIn,
    String locationIn,
    String sinceIn,
    String logoFileNameIn
){
	fullName = fullNameIn;
	title = titleIn;
	location = locationIn;
	since = sinceIn;
	logoFileName = logoFileNameIn;
}

String TagInfo::getName(){
	return fullName;
}

String TagInfo::getTitle(){
	return title;
}

String TagInfo::getLocation(){
	return location;
}

String TagInfo::getSince(){
	return since;
}

String TagInfo::getLogoFileName(){
	return logoFileName;
}
