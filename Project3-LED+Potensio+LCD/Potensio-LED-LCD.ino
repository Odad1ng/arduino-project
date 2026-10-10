#define buzzer 3
#define led 5

void setup() {
  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void blink(int speed){
  digitalWrite(led, HIGH);
  delay(speed);
  digitalWrite(led, LOW);
}

void berisik(int speed, int frek){
  tone(buzzer, frek);
  delay(speed);
  noTone(buzzer);
  delay(speed);
  tone(buzzer, frek);
  delay(speed);
  noTone(buzzer);
  delay(speed);
  tone(buzzer, frek);
  delay(speed);
  noTone(buzzer);
}

void loop() {
  int value = analogRead(A5);
  Serial.println(value);
  if(value < 5){
    blink(500);
    berisik(3000, 1);
  }
  delay(500);

}
