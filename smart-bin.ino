#include <Servo.h>

Servo servo;     
int trigPin = 5; // Pin connected to the trigger pin of the ultrasonic sensor
int echoPin = 6; // Pin connected to the echo pin of the ultrasonic sensor
int servoPin = 7; // Pin connected to the servo motor
long duration, distance; // Variables to store the duration (of the echo pulse) and distance

void setup() {       
    Serial.begin(9600); // Start serial communication
    servo.attach(servoPin); // Attach the servo to the servoPin
    pinMode(trigPin, OUTPUT); // Set the trigPin as an OUTPUT
    pinMode(echoPin, INPUT); // Set the echoPin as an INPUT
    servo.write(0); // Close the bin lid on power on
    delay(100);
    servo.detach(); // Detach the servo to save power
} 

void measureDistance() {  
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1; // Calculate the distance
}

void loop() { 
    measureDistance(); // Measure the distance

    // Open the lid if an object is within 50cm and keep it open as long as it's there
    if (distance < 50) {
        servo.attach(servoPin);
        servo.write(0); // Open the bin lid

        // Stay in this loop as long as the object is within the 50cm range
        while(distance < 50) {
            measureDistance(); // Keep measuring the distance
            delay(10); // Short delay for stability
        }

        servo.write(150); // Close the bin lid
        delay(1000);
        servo.detach(); // Detach the servo
    }

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
}
