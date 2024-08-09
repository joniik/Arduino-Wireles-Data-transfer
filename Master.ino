void setup() {
  Serial.begin(38400); // Use Serial for debugging
  Serial.println("Master Bluetooth is ready.");
}

void loop() {
  int rawValue = analogRead(A0);
  Serial.println(rawValue);
  int ModifiedValue = map(rawValue, 0, 1023, 0, 255);

  Serial.print(ModifiedValue); // Send the value as a string
  Serial.print("Sent: ");
  Serial.println(ModifiedValue);

  delay(100); // Wait a bit before sending the next value
}