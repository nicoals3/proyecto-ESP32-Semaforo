const int ledRojo = 5;
const int ledAmarillo = 4;
const int ledVerde = 2;
const int pulsador = 0;

void setup() {
  pinMode(pulsador, INPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarillo,OUTPUT);
  pinMode(ledRojo,OUTPUT);
}

void loop() {
  boolean estado = digitalRead(pulsador);
  if(estado == LOW){
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, HIGH);
    delay(300);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledRojo, HIGH);
    delay(1000);
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, HIGH);
    } else {
        digitalWrite(ledVerde, HIGH);
      }
}
