// Basic LED Blink Example for Arduino
// Works with Arduino Uno, Mega, Nano, and other ATmega boards

const int LED_PIN = 5; // Built-in LED on most Arduino boards

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  
  // Set LED pin as output
  pinMode(LED_PIN, OUTPUT);
  
  Serial.println("LED Blink Example Started");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // Turn LED on
  Serial.println("LED ON");
  delay(5000);                    // Wait 500ms
  
  digitalWrite(LED_PIN, LOW);    // Turn LED off
  Serial.println("LED OFF");
  delay(5000);                    // Wait 500ms
}
