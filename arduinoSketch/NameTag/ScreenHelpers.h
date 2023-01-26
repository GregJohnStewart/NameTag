#ifndef SCREEN_HELPERS_H
#define SCREEN_HELPERS_H

#include <Adafruit_ThinkInk.h>
#include <functional>

#include "globals.h"
#include "TagInfo.h"
#include "BuiltinHelpers.h"

class ScreenHelpers{
	public:
		static void doSetup();
		static bool canRefreshScreen();
		static void waitTilCanRefreshScreen();
		static void simpleDisplayText(ThinkInk_290_Tricolor_Z10* screen, const char* text, uint16_t color, uint16_t size);
		static void setupScreen(std::function<void(ThinkInk_290_Tricolor_Z10*)> setupFunc);
		static void displayErrorMessage(const String message);
};


  //Serial.print("Time since last update: ");
  //Serial.println(millis() - lastUpdateTime);
//  if (SCREEN_UPDATE_WAIT < millis() - lastUpdateTime) {
//    if (curDemo == 0) {
//      curDemo++;
//      Serial.println("Banner demo");
//      display.clearBuffer();
//      display.setTextSize(3);
//      display.setCursor((display.width() - 144) / 2, (display.height() - 24) / 2);
//      display.setTextColor(EPD_BLACK);
//      display.print("Tri");
//      display.setTextColor(EPD_RED);
//      display.print("Color");
//      display.display();
//    } else if (curDemo == 1) {
//      curDemo++;
//      Serial.println("Color rectangle demo");
//      display.clearBuffer();
//      display.fillRect(display.width() / 3, 0, display.width() / 3, display.height(), EPD_BLACK);
//      display.fillRect((display.width() * 2) / 3, 0, display.width() / 3, display.height(), EPD_RED);
//      display.display();
//    } else if (curDemo == 2) {
//      curDemo++;
//      Serial.println("Text demo");
//      // large block of text
//      display.clearBuffer();
//      display.setTextSize(1);
//      testdrawtext("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla sed malesuada et, malesuada sit amet turpis. Sed porttitor neque ut ante pretium vitae malesuada nunc bibendum. Nullam aliquet ultrices massa eu hendrerit. Ut sed nisi lorem. In vestibulum purus a tortor imperdiet posuere. ", EPD_BLACK);
//      display.display();
//    } else {
//      curDemo = 0;
//      Serial.println("Lines demo");
//      display.clearBuffer();
//      for (int16_t i = 0; i < display.width(); i += 4) {
//        display.drawLine(0, 0, i, display.height() - 1, EPD_BLACK);
//      }
//
//      for (int16_t i = 0; i < display.height(); i += 4) {
//        display.drawLine(display.width() - 1, 0, 0, i, EPD_RED);
//      }
//      display.display();
//    }
//
//    lastUpdateTime = millis();
//  }
//  Serial.println("Waiting...");
//  delay(15000);
//  Serial.println("Done Waiting.");

//void testdrawtext(const char *text, uint16_t color) {
//  display.setCursor(0, 0);
//  display.setTextColor(color);
//  display.setTextWrap(true);
//  display.print(text);
//}

#endif
