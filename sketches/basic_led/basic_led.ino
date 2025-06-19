// Arduino Upload Diagnostic Sketch
// This will help verify if uploads are working correctly

const int LED_PIN = LED_BUILTIN; // Use built-in LED
unsigned long counter = 0;

void setup() {
  // Initialize LED first (visual feedback)
  pinMode(LED_PIN, OUTPUT);
  
  // Quick blink pattern on startup
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(100);
  }
  
  // Initialize serial - use correct baud for your board
  // Uno/New Nano: 115200, Old Nano: 57600
  Serial.begin(115200);
  
  // Wait for serial port to initialize
  delay(100);
  
  // Send startup messages
  Serial.println("\n\n=== ARDUINO DIAGNOSTIC TEST ===");
  Serial.println("Upload successful!");
  Serial.print("Board: ");
  
  #if defined(__AVR_ATmega328P__)
    Serial.println("ATmega328P (Uno/Nano)");
  #else
    Serial.println("Unknown");
  #endif
  
  Serial.print("Sketch compiled: ");
  Serial.print(__DATE__);
  Serial.print(" ");
  Serial.println(__TIME__);
  Serial.println("LED will blink every second");
  Serial.println("Counter will increment every loop");
  Serial.println("===============================\n");
}

void loop() {
  // Toggle LED
  digitalWrite(LED_PIN, (counter % 2) ? HIGH : LOW);
  
  // Print counter
  Serial.print("Counter: ");
  Serial.print(counter);
  Serial.print(" - LED: ");
  Serial.println((counter % 2) ? "ON" : "OFF");
  
  counter++;
  delay(1000);
}