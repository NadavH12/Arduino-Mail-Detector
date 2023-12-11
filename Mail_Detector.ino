#define DETECT 12
#define TRANSMIT 4

void setup() {
  Serial.begin(9600);
  pinMode(DETECT, INPUT);
  pinMode(TRANSMIT, OUTPUT);
  digitalWrite(TRANSMIT, HIGH);
}

void loop() {
  int detected = digitalRead(DETECT);

  if (detected == LOW)
    Serial.println("Mail Detected!");
  else 
    Serial.println("===========");

  delay(200);
}
