#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(84, 6, NEO_GRB + NEO_KHZ800);

#define RED 255
#define GREEN 0
#define BLUE 0

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  strip.setPixelColor(0, RED, GREEN, BLUE);
  strip.show();
}
