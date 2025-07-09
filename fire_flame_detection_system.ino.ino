int flameSensor = 2;
int buzzer = 8;
int led = 9;

void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int flame = digitalRead(flameSensor);
  if (flame == LOW) {  // Flame detected (Active LOW)
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    Serial.println("🔥 Flame Detected!");
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    Serial.println("✅ Safe");
  }
  delay(500);
}
