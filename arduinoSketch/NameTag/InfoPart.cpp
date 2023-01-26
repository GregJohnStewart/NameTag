
#include "InfoPart.h"

InfoPart::InfoPart(
	String valueIn,
	uint16_t sizeIn
){
	value = valueIn;
	size = sizeIn;
}
InfoPart::InfoPart(){
	value = "";
	size = 0;
}
InfoPart::InfoPart(
	String curPart,
	JsonObject infoConfig
){
	
}


String InfoPart::getValue(){
	return value;
}

uint16_t InfoPart::getSize(){
	return size;
}
