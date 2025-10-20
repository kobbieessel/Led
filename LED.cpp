/*
* Author: Kwabena Amoako
*/

#include "LED.h"
#include <Arduino.h>

LED::LED(byte pin){
  this->pin = pin;
}

void LED::init(void){
  pinMode(pin,OUTPUT);
}

void LED::on(void){
  digitalWrite(pin,HIGH);
}

void LED::off(void){
  digitalWrite(pin,LOW);
}

void LED::fade(byte brightness = 255){
  analogWrite(pin,brightness);
}
