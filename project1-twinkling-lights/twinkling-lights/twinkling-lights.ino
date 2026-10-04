#define ledBlue 2
#define ledGreen 6
#define button 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(button, INPUT);
  digitalWrite(button, HIGH);

  pinMode(ledBlue, HIGH);
  pinMode(ledGreen, HIGH);
}

void speedMode(int option){
  if(option == 1){
  digitalWrite(ledBlue, HIGH);
  delay(100);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(100);
  digitalWrite(ledGreen, LOW);
  }else{
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen,LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int isButtonPressed = digitalRead(button);
  if(isButtonPressed == 0){
    speedMode(1);
  }else{
    speedMode(0);
  }

}
