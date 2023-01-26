#ifndef SD_HELPERS_H
#define SD_HELPERS_H



#include <sd_diskio.h>
#include <sd_defines.h>
#include <SD.h>
#include <SPI.h>
#include <FS.h>
#include <YAMLDuino.h>

#include "globals.h"
#include "TagInfo.h"
#include "ScreenHelpers.h"
#include "LifeHelpers.h"


class SdHelpers{
	private:
		static TagInfo tagInfo;
	public:
		static void doSetup();
		static const TagInfo* getTagInfo();
};


#endif
