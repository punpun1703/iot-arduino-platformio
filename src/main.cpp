#include <Arduino.h>

#define LED_PIN 2   // LED บนบอร์ด ESP32 Dev ใช้ขา GPIO2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // เปิด LED
  delay(200);
  digitalWrite(LED_PIN, LOW);   // ปิด LED
  delay(200);
}
