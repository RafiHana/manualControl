# Mecanum Robot Controller with ESP32

This repository contains the code for controlling a mecanum-wheeled robot using ESP32 V4. The robot includes:
- 6 DC motors
- 1 cooling fan
- 2 servo motors
- Integrated OLED display 
- PS3 controller support for wireless control

## Features
- **Multi-Motor Control**: Control six DC motors with precise PWM signals.
- **PS3 Controller Integration**: Wireless control using a PS3 controller.
- **Servo Motor Operation**: Two servo motors are configured for additional functionalities.
- **Cooling System**: A cooling fan controlled programmatically.
- **OLED Display**: Real-time display of robot status and custom graphics.
- **Customizable MAC Address**: Ensures connectivity with specific controllers.

## Hardware Requirements
1. ESP32 V4
2. 6 DC motors
3. 2 servo motors
4. 1 fan
5. OLED display (128x64 resolution, SSD1306 driver)
6. PS3 controller
7. Motor driver module 
8. Power supply

## Libraries Used
- [Ps3Controller](https://github.com/jvpernis/esp32-ps3): For PS3 controller integration.
- [ESP32Servo](https://github.com/madhephaestus/ESP32Servo): For servo motor control.
- [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library): For graphics rendering.
- [Adafruit SSD1306](https://github.com/adafruit/Adafruit_SSD1306): For OLED display control.

## Setup Instructions
Clone this repository:
   ```bash
   git clone https://github.com/RafiHana/manualControl.git
   cd manualControl
   Enjoy your robott
