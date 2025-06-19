// Diagnostic test sketch
void setup() {
  Serial.begin(115200);
  Serial.println("Arduino IDE diagnostic test");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  Serial.println("Test running...");
}