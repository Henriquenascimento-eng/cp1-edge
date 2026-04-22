const int pinLDR = A0;
const int pinVerde = 8;
const int pinAmarelo = 9;
const int pinVermelho = 10;
const int pinBuzzer = 11;

void setup() {
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(pinLDR);
  Serial.println(leitura);

  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarelo, LOW);
  digitalWrite(pinVermelho, LOW);
  digitalWrite(pinBuzzer, LOW);

  if (leitura < 150) { 
    digitalWrite(pinVerde, HIGH);
  } 
  else if (leitura >= 150 && leitura < 500) {
    digitalWrite(pinAmarelo, HIGH);
    digitalWrite(pinBuzzer, HIGH);
    delay(3000);
    digitalWrite(pinBuzzer, LOW);
  } 
  else {
    digitalWrite(pinVermelho, HIGH);
  }

  delay(500);
}