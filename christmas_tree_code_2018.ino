#include <FastLED.h>
#define num_leds 25
#define led_pin 2

CRGB led[num_leds];

void setup() {
  FastLED.addLeds<NEOPIXEL, led_pin>(led, num_leds);
  for(int i=0; i<num_leds; i++){
    led[i]=CRGB(0, 0, 255);
  }
  FastLED.show();
}

void red(){
   for(int i=0; i<num_leds; i++){
    led[i]=CRGB(255, 0, 0);
  }
  FastLED.show();
  delay(1000);
}

void green(){
   for(int i=0; i<num_leds; i++){
    led[i]=CRGB(0, 255, 0);
  }
  FastLED.show();
  delay(1000);
}

void blue(){
   for(int i=0; i<num_leds; i++){
    led[i]=CRGB(0, 0, 255);
  }
  FastLED.show();
  delay(1000);  
}

void loop() {
  red();
  green();
  blue();
}
