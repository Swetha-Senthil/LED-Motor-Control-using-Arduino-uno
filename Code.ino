const int ledPin = 7;
const int motorPin1 = 8;
const int motorPin2 = 9;
const int motorSpeed = 10;  // PWM pin for speed control

unsigned long prevMillis = 0;
const long interval = 1000;  // 1-second interval

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorSpeed, OUTPUT);

    Serial.begin(9600);
    analogWrite(motorSpeed, 150);  // Set default motor speed (0-255)
}

void loop() {
    // Non-blocking LED blink
    if (millis() - prevMillis >= interval) {
        prevMillis = millis();
        digitalWrite(ledPin, !digitalRead(ledPin));
    }

    // Read serial input for motor control
    if (Serial.available()) {
        char command = Serial.read();
        if (command == 'F') {
            digitalWrite(motorPin1, HIGH);
            digitalWrite(motorPin2, LOW);
            Serial.println("Motor Forward");
        } else if (command == 'R') {
            digitalWrite(motorPin1, LOW);
            digitalWrite(motorPin2, HIGH);
            Serial.println("Motor Reverse");
        } else if (command == 'S') {
            digitalWrite(motorPin1, LOW);
            digitalWrite(motorPin2, LOW);
            Serial.println("Motor Stopped");
        }
    }
}
