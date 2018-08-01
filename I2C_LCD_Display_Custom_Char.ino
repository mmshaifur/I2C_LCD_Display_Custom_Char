#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd((0x3F,20,4); // set the LCD address to 0x27 for a 16 chars and 2 line display
 
uint8_t testChar[8] = {0x8,0xf4,0x8,0x43,0x4,0x4,0x43,0x0}; // Custom char
 
void setup() {
 lcd.backlight(); // Turn on the lcd backlight
 lcd.init(); // Start up the lcd
 lcd.begin(16, 2); // Set up the lcd to have 16 char on 2 lines
 lcd.createChar(0, testChar); // Sends the custom char to lcd
 }
 
void loop() {
 lcd.setCursor(0,0); // Set lcd cursor to the start of the first row
 //lcd.print("test"); // Prints to the LCD
 lcd.print((char)0); // Custom char
 }
