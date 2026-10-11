const int GAS = 33;
const int BUZZER = 23;

void setup() {
  Serial.begin(115200);
  pinMode(GAS, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int value = analogRead(GAS);
  Serial.println(value);

  if(value > 1000) { //Change the value '800' for higher threshold.
    tone(BUZZER, 1500);
    delay(50);
    noTone(BUZZER);
    delay(50);
  }

  delay(16);
}