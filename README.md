# Adafruit_RGB_Char_LCD_Backpack

##Overview

This library was created to control the [Adafruit's RGB Character LCD](https://www.adafruit.com/product/784) via Software Serial. 

##Instalation

The library was created using the Arduino IDE 1.0.5.

In order to correctly compile:

1. Download or fork this github project.
2. Open the Arduino IDE 1.0.5
3. In the Arduino IDE go to Sketch/Import Library.../Add Library 
4. Select the Adafruit_RGB_Char_LCD_Backpack folder 
5. We recomend to close and reopen the Arduino IDE and then go to file/Examples/Adafruit_RGB_Char_LCD_Backpack/demo
6. Connect the display to the Arduino (Vcc, GND and the serial pin of the board to the pin 2 of the Arduino)
	* Vcc -> Arduino's 5V
	* GND -> Arduino's GND
	* Serial -> Arduino's pin 2
7. Enjoy!

##Codebender

The Codebender project is available:

[https://codebender.cc/sketch:142178](https://codebender.cc/sketch:142178)


##Usage

You can explore the example project to understand how this library works, it's very easy to use. The libary was based in the [Adafruit's documentation](https://learn.adafruit.com/usb-plus-serial-backpack/command-reference) for this display. 

The next functions are available:

```
lcd_begin();
lcd_setContrast(int contrast); //max 255, 200 is good 
lcd_setBrightness(int brightness); //max 255
lcd_setCursorAtBeginning();
lcd_clear();
lcd_print(String message);
lcd_setColor(int red, int green, int blue);
lcd_autoscrollOn();
lcd_autoscrollOff();
lcd_setCursor(int column, int row);
lcd_underlineCursorOn();
lcd_underlineCursorOff();
lcd_blinkCursorOn();
lcd_blinkCursorOff();
lcd_cursorForward();
lcd_cursorBackward();

```

##Example

This is the example code inside the project

```
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

```

##Bugs or Issues

If you find a bug you can submit an issue here on github:

https://github.com/viccarre/Adafruit_RGB_Char_LCD_Backpack/issues

##License

The MIT License (MIT)

Copyright (c) 2015 Victor Carreño

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.