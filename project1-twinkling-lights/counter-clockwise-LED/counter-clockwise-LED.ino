#define ledYellow 2
#define ledBlue 4
#define ledGreen 6
#define buttonSpeed 8

void setup() {
  Serial.begin(9600);

  // put your setup code here, to run once:
  pinMode(ledYellow, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);

  pinMode(buttonSpeed, INPUT);
  digitalWrite(buttonSpeed, HIGH);

  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, HIGH);
}

void speed(bool isPressed){
  if(isPressed == 1){ // jika button di tekan maka akan berbalik arah
  digitalWrite(ledBlue, HIGH);
  delay(100);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(100);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);
  delay(100);
  digitalWrite(ledYellow, LOW);
  delay(100);
  }else{
  digitalWrite(ledYellow, HIGH);
  delay(500);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);
  delay(500);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledBlue, HIGH);
  delay(500);
  digitalWrite(ledBlue, LOW);
  delay(500);
  }
}


void loop() {
  bool isButtonPressed = digitalRead(buttonSpeed);

  if(isButtonPressed == 0){
    speed(1);
  }else{
    speed(0);
  }

  // put your main code here, to run repeatedly:

}
