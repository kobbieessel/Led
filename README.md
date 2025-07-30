# **LED Arduino Library**

A lightweight and easy-to-use Arduino library for controlling LEDs using digital and PWM output. Perfect for simple LED operations such as turning on/off and fading brightness using PWM.

## **Features**

1. Initialize the digital or PWM pin connected to the LED.
2. Turn the LED on or off.
3. Fade the LED by setting a brightness value (0–255) using PWM.

## **Installation**

1. Download or clone this repository.
2. Place the folder in your Arduino `libraries` directory.
3. Restart the Arduino IDE.

## **Usage**

### Include the library

````cpp
#include <LED.h>

### Create an instance
```C++
LED led(9); // Pass the pin number connected to the LED (e.g., pin 9)
````

### Initialize in setup()

```C++
void setup() {
  led.init(); // Sets the pin as OUTPUT
}
```

### Use Led Controls

```C++
void loop() {
  led.on();           // Turn LED on
  delay(1000);
  led.off();          // Turn LED off
  delay(1000);
  led.fade(128);      // Fade LED to 50% brightness
}
```

# API Reference

```
LED(byte pin)
```

Constructor. Pass the digital or PWM-capable pin number connected to the LED.

```
void init()
```

Initializes the LED pin (sets it to OUTPUT mode).

```
void on()
```

Turns the LED on by setting the pin HIGH.

```
void off()
```

Turns the LED off by setting the pin LOW.

```
void fade(byte brightness = 255)
```

Fades the LED to a brightness value between 0 and 255 using PWM. Defaults to full brightness (255).

### Notes

- Ensure the pin used for `fade()` supports PWM (e.g., 3, 5, 6, 9, 10, 11 on most Arduino boards).
- `analogWrite()` internally uses PWM to simulate analog output. This does not work on non-PWM pins.
- `fade()` can be used to control LED brightness or even drive analog dimming circuits.

# License

This project is open-source and available under the MIT License.
