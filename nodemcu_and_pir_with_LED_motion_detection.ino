#define PIR_PIN D5
const int externalLedPin = D1;

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(externalLedPin, OUTPUT);

  digitalWrite(externalLedPin, LOW); // LED ON initially

  Serial.println("NodeMCU PIR Setup");
  Serial.println("External LED: D1");
  Serial.println("PIR Sensor: D5");
  Serial.println("Waiting 30 seconds for PIR warm-up...");

  delay(30000);

  Serial.println("PIR READY");
  Serial.println("LED ON by default; motion turns LED OFF.");
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {
    digitalWrite(externalLedPin, HIGH); // Motion: LED OFF
    Serial.println("MOTION DETECTED - LED ON");
  } else {
    digitalWrite(externalLedPin, LOW); // No motion: LED ON
    Serial.println("NO MOTION - LED OFF");
  }

  delay(500);
}