#include <FastLED.h>

  //FASTLED INT
#define DATA_PIN            5 //pin 5 for testing on ardiuno uno
#define NUM_LEDS     8

//initiate variables
uint_fast8_t daysLeft = 255;
uint_fast8_t pixel_number = 0;
uint_fast8_t red = 255;
uint_fast8_t green = 255;
uint_fast8_t blue = 255;

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
   led8 = false;
 }
else {
  led8 = true;
 }
  
 if (daysLeft%4 == 0) {
   led7 = false;
 }
 else {
   led7 = true;
 }
 if (daysLeft%8 == 0) {
   led6 = false;
 }
 else {
   led6 = true;
 }
 if (daysLeft%16 == 0) {
   led5 = false;
 }
 else {
   led5 = true;
 }
 if (daysLeft%32 == 0) {
   led4 = false;
 }
 else {
   led4 = true;
 }
 if (daysLeft%64 == 0) {
   led3 = false;
 }
 else {
   led3 = true;
 }
 if (daysLeft%128 == 0) {
   led2 = false;
 }
 else {
   led2 = true;
 }
 if (daysLeft%256 == 0) {
   led1 = false;
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
