// Arduino LED Blink Example
// Works on Uno and Nano

void setup() {
  // Initialize serial communication
  Serial.begin(115200);  // 57600 for old Nano bootloader
  
  // Set built-in LED as output
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.println("Arduino LED Blink Started");
  Serial.println("Board: Arduino Uno/Nano");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // LED on
  Serial.println("LED ON");
  delay(1000);                      // Wait 1 second
  
  digitalWrite(LED_BUILTIN, LOW);   // LED off
  Serial.println("LED OFF");
  delay(1000);                      // Wait 1 second
}