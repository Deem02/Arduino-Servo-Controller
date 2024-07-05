
# Arduino Servo Motor Control

This Arduino sketch controls six servo motors using analog input pins. The servo motors are attached to digital pins 11, 6, 5, 3, 10, and 9, respectively.

## Circuit Diagram
   ![image](https://github.com/Deem02/servo-motor/assets/158334032/0d70781b-6353-4bdd-84cc-19a75f2d5d76)

## Components

- Arduino board
- 6 Servo motors
- 6 Potentiometers connected to analog pins A5, A4, A3, A2, A1, and A0

## How it Works

1. The `setup()` function attaches the six servo motors to their respective digital pins.
2. In the `loop()` function:
   - The analog values from the six potentiometers are read using the `analogRead()` function.
   - The analog values are then mapped to the range of 0-180 degrees using the `map()` function, which corresponds to the typical range of motion for standard servo motors.
   - The `servo.write()` function is used to set the position of each servo motor based on the corresponding analog input value.
3. The `delay(15)` statement is used to control the update rate of the servo positions, which helps to ensure smooth movement.

## Usage

1. Connect the six servo motors to the specified digital pins on the Arduino board.
2. Connect the six potentiometers to the corresponding analog input pins (A5, A4, A3, A2, A1, A0).
3. Upload the Arduino sketch to your board.
4. Rotate the potentiometers to control the position of the corresponding servo motors.


## Notes

- This sketch assumes the use of standard servo motors that can rotate 180 degrees.
- The analog input range of 0-1023 is mapped to the servo position range of 0-180 degrees.
- Adjust the pin assignments and analog input pins as needed to fit your specific hardware setup.
