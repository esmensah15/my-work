const int signalPin = 25; // Pin connected after the diode

void setup() {
  Serial.begin(115200);
  pinMode(signalPin, INPUT_PULLDOWN);

  Serial.println("Diode Signal Detector Initialized.");
  Serial.println("Monitoring signal on GPIO " + String(signalPin));
  Serial.println("------------------------------------");
  Serial.println("IMPORTANT: Ensure the voltage on GPIO " + String(signalPin) + " does NOT exceed 3.3V.");
  Serial.println("If your signal source is higher (e.g., 5V), use a voltage divider circuit.");
  Serial.println("------------------------------------");
}

void loop() {
  int signalState = digitalRead(signalPin);

  if (signalState == HIGH) {
    Serial.println("High voltage detected!");
  } else {
    Serial.println("No high voltage detected (safe).");
  }

  delay(500);
}
