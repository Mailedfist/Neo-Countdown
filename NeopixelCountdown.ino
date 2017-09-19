#include <FastLED.h>

  //FASTLED INT
#define DATA_PIN            5 //pin 5 for testing on ardiuno uno
#define NUM_LEDS     8

//initiate variables
uint_fast8_t daysLeft = 255;
uint_fast8_t pixel_number = 0;
uint_fast8_t red = 235;
uint_fast8_t green = 10;
uint_fast8_t blue = 85;

CRGB leds[NUM_LEDS];

void setup() {
  // Neopixel (FastLED) setup
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}


void loop() {
  // put your main code here, to run repeatedly:
  
  // use strip as a binary counter from 255 (all lit) to 0 (all off)
  
   // determine which LEDs should be lit (there must be a better way?) 
if (daysLeft%2 == 0) {
   leds[7].setRGB(0, 0, 0);
 }
else {
   leds[7].setRGB(red, green, blue);
 }
  
 if (daysLeft%4 == 0) {
   leds[6].setRGB(0, 0, 0);
 }
 else {
   leds[6].setRGB(red,green,blue);
 }
 if (daysLeft%8 == 0) {
   leds[5].setRGB(0, 0, 0);
 }
 else {
   leds[5].setRGB(red,green,blue);
 }
 if (daysLeft%16 == 0) {
   leds[4].setRGB(0, 0, 0);
 }
 else {
   leds[4].setRGB(red,green,blue);
 }
 if (daysLeft%32 == 0) {
   leds[3].setRGB(0, 0, 0);
 }
 else {
   leds[3].setRGB(red,green,blue);
 }
 if (daysLeft%64 == 0) {
   leds[2].setRGB(0, 0, 0);
 }
 else {
   leds[2].setRGB(red,green,blue);
 }
 if (daysLeft%128 == 0) {
   leds[1].setRGB(0, 0, 0);
 }
 else {
   leds[1].setRGB(red,green,blue);
 }
 if (daysLeft%256 == 0) {
   leds[0].setRGB(0, 0, 0);
 }
 else {
   leds[0].setRGB(red,green,blue);
 }
  
  // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
  leds[pixel_number].setRGB(red, green, blue); // 
   
  // Dim a color by 25% (64/256ths)
  // using "video" scaling, meaning: never fading to full black
  leds[i].fadeLightBy( 64 );
  
  FastLED.show(); // This sends the updated pixel color to the hardware.
 //for daysLeft > 0
 // set timer for 24h   
 //when timer expires, change color of neopixel
  
 delay (500); // this will need to be adjusted to match uC cycles taken for other instructions
 // above delay shortened for testing
 daysLeft = daysLeft - 1; //reduce day count
  
 
}
