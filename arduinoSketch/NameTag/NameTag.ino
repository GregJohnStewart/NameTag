//#include <dummy.h>

#include "globals.h"

#include <UMS3.h>
#include "Adafruit_ThinkInk.h"

#include "FS.h"
#include "SD.h"
#include "SPI.h"

UMS3 ums3;
ThinkInk_290_Tricolor_Z10 display(EPD_DC, EPD_RESET, EPD_CS, SRAM_CS, EPD_BUSY);

void setup() {
  // Initialize all board peripherals, call this first
  ums3.begin();
  ums3.setPixelBrightness(255 / 5);

  Serial.begin(115200);
  while (!Serial) {
    delay(10);
  }
  Serial.println("Adafruit EPD full update test in red/black/white");
  display.begin(THINKINK_TRICOLOR);
}

int color = 0;
int lastUpdateTime = -1 * SCREEN_UPDATE_WAIT;
byte curDemo = 0;

void loop() {
  // colorWheel cycles red, orange, ..., back to red at 256
  ums3.setPixelColor(UMS3::colorWheel(color));
  color++;
  if (color % 128 == 0) {
    ums3.toggleBlueLED();
  }

  //Serial.print("Time since last update: ");
  //Serial.println(millis() - lastUpdateTime);
  if (SCREEN_UPDATE_WAIT < millis() - lastUpdateTime) {
    if (curDemo == 0) {
      curDemo++;
      Serial.println("Banner demo");
      display.clearBuffer();
      display.setTextSize(3);
      display.setCursor((display.width() - 144) / 2, (display.height() - 24) / 2);
      display.setTextColor(EPD_BLACK);
      display.print("Tri");
      display.setTextColor(EPD_RED);
      display.print("Color");
      display.display();
    } else if (curDemo == 1) {
      curDemo++;
      Serial.println("Color rectangle demo");
      display.clearBuffer();
      display.fillRect(display.width() / 3, 0, display.width() / 3, display.height(), EPD_BLACK);
      display.fillRect((display.width() * 2) / 3, 0, display.width() / 3, display.height(), EPD_RED);
      display.display();
    } else if (curDemo == 2) {
      curDemo++;
      Serial.println("Text demo");
      // large block of text
      display.clearBuffer();
      display.setTextSize(1);
      testdrawtext("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla sed malesuada et, malesuada sit amet turpis. Sed porttitor neque ut ante pretium vitae malesuada nunc bibendum. Nullam aliquet ultrices massa eu hendrerit. Ut sed nisi lorem. In vestibulum purus a tortor imperdiet posuere. ", EPD_BLACK);
      display.display();
    } else {
      curDemo = 0;
      Serial.println("Lines demo");
      display.clearBuffer();
      for (int16_t i = 0; i < display.width(); i += 4) {
        display.drawLine(0, 0, i, display.height() - 1, EPD_BLACK);
      }

      for (int16_t i = 0; i < display.height(); i += 4) {
        display.drawLine(display.width() - 1, 0, 0, i, EPD_RED);
      }
      display.display();
    }

    lastUpdateTime = millis();
  }
//  Serial.println("Waiting...");
//  delay(15000);
//  Serial.println("Done Waiting.");
}


void testdrawtext(const char *text, uint16_t color) {
  display.setCursor(0, 0);
  display.setTextColor(color);
  display.setTextWrap(true);
  display.print(text);
}
