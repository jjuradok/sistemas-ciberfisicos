const int TRIGGER = 8;
const int ECHO = 9;
const int LED = 13;

void setup() {

  pinMode(LED, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(TRIGGER, OUTPUT);
}

void loop() {
  long time, distance;

  digitalWrite(TRIGGER, HIGH); // Envío el pulso
  delayMicroseconds(10);       // Espero 🤨
  digitalWrite(TRIGGER, LOW);

  time = pulseIn(ECHO, HIGH); // Recibo el pulso

  distance = time / 59;

  if (distance < 250) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}