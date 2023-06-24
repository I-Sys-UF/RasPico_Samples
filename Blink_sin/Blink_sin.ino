#define LED 25

const float TAU = 2 * PI;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for(uint16_t i = 0; i < 360; i++) {
    uint8_t SIN = sin((i * TAU) / 360) * 256; 
    analogWrite(LED, SIN);
    delayMicroseconds(2777);  // 1000000 / 360:
  }
}
