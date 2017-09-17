#include <FastLED.h>

  //FASTLED INT
#define DATA_PIN            5 //pin 5 for testing on ardiuno uno
#define NUM_LEDS     8

//initiate variables
uint_fast8_t daysLeft = 255;
uint_fast8_t octsLeft = 32; //as strip had eight pixels, every eight days the colour changes
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
// pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    leds[pixel_number].setRGB(red, green, blue); // 
    FastLED.show(); // This sends the updated pixel color to the hardware.
 //for daysLeft > 0
 // set timer for 24h   
 //when timer expires, change color of neopixel

 delay (500); // this will need to be adjusted to match uC cycles taken for other instructions
 // above delay shortened for testing
 daysLeft = daysLeft - 1; //reduce day count
  
  //move effect to next pixel
  pixel_number = ((pixel_number + 1) - 8 * ((pixel_number + 1)/8));
 
 // change pixel colour values

if ((octsLeft - 3 * (octsLeft/3)) == 0 && daysLeft != 0 ){
  red = red - 20;
}
  
else if (((octsLeft - 3 * (octsLeft/3)) == 1)){
  blue = blue - 20;
}

else if ((octsLeft - 3 * (octsLeft/3)) == 2){
  green = green - 20;
}
else {
  red = 0;
  blue = 0;
  green = 0;
}
 
}
