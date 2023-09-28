int led = 13; 
unsigned long previousMillis = 0; 
const long interval = 1000;

void setup() {
  pinMode(led, OUTPUT);

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
  
    previousMillis = currentMillis; 

    if (digitalRead(led) == LOW) {
      digitalWrite(led, HIGH); 
    } else {
      digitalWrite(led, LOW); 
    }
  }
}