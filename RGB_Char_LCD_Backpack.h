#include <Arduino.h>
#include <SoftwareSerial.h>

void lcd_begin();
void lcd_setContrast(int contrast);
void lcd_setBrightness(int brightness);
void lcd_setCursorAtBeginning();
void lcd_clear();
void lcd_print(String message);
void lcd_setColor(int red, int green, int blue);
void lcd_autoscrollOn();
void lcd_autoscrollOff();
void lcd_setCursor(int column, int row);
void lcd_underlineCursorOn();
void lcd_underlineCursorOff();
void lcd_blinkCursorOn();
void lcd_blinkCursorOff();
void lcd_cursorForward();
void lcd_cursorBackward();
