int LEDPin = 7;
int buttonPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //check state of button
  int stateButton = digitalRead(buttonPin);
  // if button pressed, turn LED on
  if(stateButton == 1){
    digitalWrite(LEDPin, HIGH);
  }
  //otherwise LED off
  else{
    digitalWrite(LEDPin, LOW);
  }
}
