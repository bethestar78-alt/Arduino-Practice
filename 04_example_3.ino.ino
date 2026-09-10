#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT); // [수정 1] 끝에 세미콜론(;) 추가
  Serial.begin(115200);     // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle); // [수정 2] toggle LED value 앞에 주석(//) 추가
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000);                   // wait for 1,000 milliseconds
}

int toggle_state(int toggle) {
  return !toggle; // [수정 3] 1초마다 0과 1이 뒤바뀌도록 !(not) 추가
}
