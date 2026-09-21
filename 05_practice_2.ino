#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, HIGH);
}

void loop() {
  digitalWrite(PIN_LED, LOW);
  delay(1000);

  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, HIGH); // OFF
    delay(100);
    digitalWrite(PIN_LED, LOW);  // ON
    delay(100);
  }

  digitalWrite(PIN_LED, HIGH);   // OFF
  while (1) {
    ; // infinite loop
  }
}
