#define LDR A0
#define Led 9

float Light = 0;

void setup() {
  pinMode(LDR, INPUT);
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Light = (float)analogRead(LDR);
  Serial.println(Light);
  if (Light < 65) {
    analogWrite(Led, 25);
  } else if (Light > 65) {
    digitalWrite(Led, LOW);
  }
  delay(100);
}
