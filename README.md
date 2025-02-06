# LED-Motor-Control-using-Arduino-uno
![image](https://github.com/user-attachments/assets/5e7e246f-0e42-40ac-86a9-aedd482af810)
# Arduino Motor and LED Control

This project demonstrates controlling a DC motor and an LED using an Arduino. The motor direction is controlled via serial input, and the LED blinks at a fixed interval without blocking execution.

## Features
- **Non-blocking LED Blink**: Uses `millis()` instead of `delay()`.
- **Motor Direction Control**: Serial commands (`F`, `R`, `S`) control motor movement.
- **PWM Speed Control**: Motor speed can be adjusted via the `motorSpeed` pin.
- **Designed PCB Using KiCad**: Custom PCB layout created in KiCad.
- **Simulated in Tinkercad**: Verified functionality using Tinkercad simulation.

## Components Used
- **Arduino Uno**
- **DC Motor**
- **L293D Motor Driver**
- **LED**
- **Resistor-250 ohms**
- **External Power Supply-9V battery**

## Circuit Connections
| Component   | Pin Connection |
|------------|---------------|
| LED        | 7 (Digital)   |
| Motor IN1  | 8 (Digital)   |
| Motor IN2  | 9 (Digital)   |
| PWM Speed  | 10 (PWM)      |

## Code Overview
The Arduino sketch:
- Initializes pins and sets a default motor speed.
- Toggles the LED every 1 second without using `delay()`.
- Reads serial input for motor control:
  - `F` → Forward
  - `R` → Reverse
  - `S` → Stop

## How to Use
1. **Upload the code** to an Arduino Uno.
2. **Send Serial Commands** (`F`, `R`, `S`) via Serial Monitor.
3. Observe motor direction changes and LED blinking.

## PCB Design
- Designed using **KiCad** for a compact layout.
- Integrated motor driver and control logic.
- Optimized for easy soldering and assembly.

## Simulation
- The circuit was **simulated in Tinkercad** to verify its functionality before hardware implementation.

