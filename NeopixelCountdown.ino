#include <Adafruit_NeoPixel.h>
  //NEOPIXEL INT
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN            1
#define NUMPIXELS      8

//initiate variables
int daysLeft = 255;
int octsLeft = 32; //as strip had eight pixels, every eight days the colour changes
int pixel_number = 0;
int red = 255;
int green = 255;
int blue = 255;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // Neopixel setup
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  strip.begin(); // This initializes the NeoPixel library.
  strip.show(); // Initialize all pixels to 'off'
}


void loop() {
  // put your main code here, to run repeatedly:
// pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    strip.setPixelColor(pixel_number, strip.Color(red, green, blue)); // 
    strip.show(); // This sends the updated pixel color to the hardware.
 //for daysLeft > 0
 // set timer for 24h   
 //when timer expires, change color of neopixel

 delay (86400000); // this will need to be adjusted to match uC cycles taken for other instructions
 // change pixel colour values
if (octsLeft - 3 * (octsLeft/3)) == 0{
  
}
  
elseif (octsLeft - 3 * (octsLeft/3)) == 1{
  
}

elseif (octsLeft - 3 * (octsLeft/3)) == 2{
  
}
  
 
}
