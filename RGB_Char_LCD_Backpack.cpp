#include "RGB_Char_LCD_Backpack.h"

SoftwareSerial lcd = SoftwareSerial(0,2);

void lcd_begin(){

	//lcd = SoftwareSerial(0,2); 
	lcd.begin(9600);  // set the size of the display if it isn't 16x2 (you only have to do this once)
  	lcd.write(0xFE);
  	lcd.write(0xD1);
  	lcd.write(16);  // 16 columns
  	lcd.write(2);   // 2 rows
  	delay(10);
}

void lcd_setContrast(int contrast){
	// set the contrast, 200 is a good place to start, adjust as desired
  	lcd.write(0xFE);
  	lcd.write(0x50);
  	lcd.write(200);
  	delay(10); 
}

void lcd_setBrightness(int brightness){
	// set the brightness - we'll max it (255 is max brightness)
  	lcd.write(0xFE);
  	lcd.write(0x99);
  	lcd.write(255);
  	delay(10);
}

void lcd_setCursorAtBeginning(){
	lcd.write(0xFE);
  	lcd.write(0x48);
  	delay(10); 
}

void lcd_clear(){
	 // clear screen
  	lcd.write(0xFE);
  	lcd.write(0x58);
  	delay(10);
}

void lcd_print(String message){
	lcd.print(message);
}

void lcd_setColor(int red, int green, int blue){
	lcd.write(0xFE);
  	lcd.write(0xD0);
  	lcd.write((uint8_t)red); 
  	lcd.write((uint8_t)green);
  	lcd.write((uint8_t)blue);
  	delay(1000);
}

void lcd_autoscrollOn(){
	lcd.write(0xFE);
  	lcd.write(0x51);
  	delay(10);
}

void lcd_autoscrollOff(){
	lcd.write(0xFE);
  	lcd.write(0x52);
  	delay(10);
}

void lcd_setCursor(int column, int row){
	lcd.write(0xFE);
  	lcd.write(0x47);
  	lcd.write((uint8_t)column);
  	lcd.write((uint8_t)row);
  	delay(10);
}

void lcd_underlineCursorOn(){
	lcd.write(0xFE);
  	lcd.write(0x4A);
  	delay(10);
}

void lcd_underlineCursorOff(){
	lcd.write(0xFE);
  	lcd.write(0x4B);
  	delay(10);
}

void lcd_blinkCursorOn(){
	lcd.write(0xFE);
  	lcd.write(0x53);
  	delay(10);
}

void lcd_blinkCursorOff(){
	lcd.write(0xFE);
  	lcd.write(0x54);
  	delay(10);
}

void lcd_cursorForward(){
	lcd.write(0xFE);
  	lcd.write(0x4D);
  	delay(10);
}

void lcd_cursorBackward(){
	lcd.write(0xFE);
  	lcd.write(0x4C);
  	delay(10);
}




