
const int ledPin = 10;

void setup() {
  Serial.begin(38400);
  Serial.println("Slave Bluetooth is ready.");



  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    int receivedValue = Serial.parseInt();  // Read the value as an integer
    if (receivedValue >= 0 && receivedValue <= 255) {
      Serial.print("Received: ");
      Serial.println(receivedValue);
      analogWrite(ledPin, receivedValue);
    }
  }
}