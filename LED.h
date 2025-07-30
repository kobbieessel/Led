#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED{
  private:
    byte pin;
    byte brightness;

  public:
    LED(){};
    LED(byte pin);
    
    void init(void);
    void on(void);
    void off(void);
    void fade(byte brightness = 255);
};

#endif