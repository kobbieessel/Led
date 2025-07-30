#include "LED.h"

#define redLed 6

int brightness = 200;
LED led(redLed);

int dt = 200;

void setup() {
  Serial.begin(115200);
  led.init();
  led.off();
}

void loop() {
  led.fade(brightness);
  delay(dt);

  led.off();
  delay(dt);
}
