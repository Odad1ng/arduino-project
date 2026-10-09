#define ledBlue 9
#define ledYellow 10
#define ledGreen 11
#define buttonPin 3

int brightness = 0;
int fadeAmount = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledBlue, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);
  // digitalWrite(ledBlue, HIGH);
  // digitalWrite(ledYellow, HIGH);
  // digitalWrite(ledGreen, HIGH);
}

void loop() {
  int statusTombol = digitalRead(buttonPin);

  if(statusTombol == LOW){
     analogWrite(ledBlue, brightness);
  // delay(5000);
  analogWrite(ledYellow, brightness);
  // // delay(1000);
  analogWrite(ledGreen, brightness);
  // delay(5000);

  brightness = brightness + fadeAmount;

  if(brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;

  if(brightness <= 0){
    // fadeAmount = +fadeAmount;
    delay(1000);
  }
}
  delay(60);
  }else{
    digitalWrite(ledBlue, LOW);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);
  }
  
  
  
  
  
  // put your main code here, to run repeatedly:
//   analogWrite(ledBlue, brightness);
//   // delay(5000);
//   analogWrite(ledYellow, brightness);
//   // delay(1000);
//   analogWrite(ledGreen, brightness);
//   // delay(5000);

//   brightness = brightness + fadeAmount;

//   if(brightness >= 255){
//     fadeAmount = -fadeAmount;

//   if(brightness <= 0){
//     delay(1000);
//   }
// }
//   delay(60);
}
