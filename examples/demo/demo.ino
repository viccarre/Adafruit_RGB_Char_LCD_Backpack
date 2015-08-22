#include <SoftwareSerial.h>
#include "RGB_Char_LCD_Backpack.h"

void setup() {
  
  lcd_begin();
  lcd_setContrast(200);
  lcd_setBrightness(255);
  lcd_setCursorAtBeginning();
  lcd_clear();
  lcd_print("Hello Arduino!");
  lcd_setColor(255, 0, 0);
  lcd_autoscrollOff();
  lcd_blinkCursorOn();
  lcd_underlineCursorOn();
  delay(1000);
  lcd_clear();
  lcd_setCursorAtBeginning();
  lcd_print("Hello World!");
}

void loop() {
  	
}
