#include <Arduino.h>

// Serial 1 Pins, Tx - 6, Rx - 7, Gnd - 14
// Serial 2 Pins, Tx - 11, Rx - 12, Gnd - 14


void setup() {

    Serial.begin(115200);
    while (!Serial) { ; }
    Serial.println("Hello World from Serial 1");
    Serial1.begin(115200);
    while (!Serial1) { ; }
    Serial1.println("Hello World from Serial 2");
}

void loop() {
    
     delay(500);
     Serial.println("Looping on Serial 1");
     Serial1.println("Looping on Serial 2");
}