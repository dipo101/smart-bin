# Arduino Smart Dustbin

An innovative and interactive waste bin that automatically opens its lid when it detects an object nearby, such as a hand or a piece of trash, using ultrasonic distance measurement.

## Project Description

The Arduino Smart Dustbin is designed to enhance convenience and hygiene in waste disposal. Equipped with an ultrasonic sensor, the dustbin can detect the presence of an object within a certain distance and prompt the servo motor to open its lid. This hands-free operation is particularly beneficial in maintaining hygiene and preventing the spread of germs.

### How It Works

The smart dustbin uses an ultrasonic sensor, which operates by sending and receiving ultrasonic waves. When a user approaches the dustbin:

1. **Distance Measurement**: The ultrasonic sensor emits sound waves at a frequency inaudible to human ears. These waves bounce back after hitting an object (like a hand) and are captured by the sensor.
2. **Signal Processing**: The Arduino calculates the time between sending the wave and receiving the echo to determine the distance of the object.
3. **Activating the Servo Motor**: If the measured distance is within the set threshold (e.g., 50 cm), the Arduino signals a servo motor to open the lid of the dustbin.
4. **Staying Open**: The lid remains open as long as the object is detected within the specified range. It closes automatically once the object is removed.

### Components

- Arduino Uno (or similar model)
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Jumper Wires
- Breadboard (optional for prototyping)

## Getting Started

### Dependencies

Ensure you have the following:
- Arduino IDE installed on your computer
- Basic understanding of Arduino and electronics
- Necessary hardware components

### Setup and Installation

1. **Assemble the Circuit**: Connect the ultrasonic sensor and servo motor to the Arduino according to the project schematics.
2. **Load the Sketch**: Open the provided `.ino` file in the Arduino IDE.
3. **Upload the Code**: Connect the Arduino to your computer via USB and upload the sketch.

## Design Considerations

- **Non-contact Detection**: To ensure hygiene, the dustbin is designed to operate without the need for physical contact.
- **Power Efficiency**: The servo motor detaches when not in use to conserve energy.
- **Customizable Distance**: The sensing range can be adjusted in the code based on the specific application needs.
- **Opens as long as needed**: Most algorithms only open the bin for a fixed duration. This opens the bin for as long as an object is detected in front of it.

## How Ultrasonic Sensors Work

Ultrasonic sensors measure distance by emitting sound waves at ultrasonic frequencies. The sensor then listens for the echo of these waves off a solid object. By calculating the time between sending the wave and receiving the echo, the sensor can determine the distance to an object.

## Authors

Ladi Disu

## Acknowledgments

Inspiration, code snippets, etc.
*  TODO(dipo101)
