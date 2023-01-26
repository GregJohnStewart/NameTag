# NameTag

## Setup

### Board setup:

 1. Add esp32 board manager URL (preferences -> board manager url's)
 	- `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
 2. Open Boards Manager from Tools > Board menu and install `esp32` platform
 3. Select the board: Tools -> Board: * -> ESP32 Arduino -> UM FeatherS3
 4. enable the `CDC on boot` option in the Arduino IDE tools menu
 5. select the `USB OTG (TinyUSB)` in the Arduino IDE tools menu

### Libraries:

Libraries to setup in 

 - `UMS3 Helper`
 - `Adafruit EPD`
 - `adafruit ImageReader`
 - `adafruit GFX`
 - `YAMLDuino`

### Writing code to 

 1. Get board ready
	 1. press and hold `boot` button
	 2. press and release `reset`
	 3. release `boot`
 4. Upload code from Arduino Studio. Wait for upload.
 5. When done, reset board with board button

### resources:
	
 - https://esp32s3.com/getting-started.html
 - https://esp32s3.com/feathers3.html
 - https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html#linux
 - https://learn.adafruit.com/adafruit-2-9-eink-display-breakouts-and-featherwings/arduino-setup
 

 
