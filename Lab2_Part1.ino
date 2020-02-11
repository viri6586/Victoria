#include <Adafruit_NeoPixel.h>

#define LED_PIN 2

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 5

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

int buttonPin = 10;
int switchPin = 9;

void setup() {
  //define digital pins as inputs or outputs
  pinMode(buttonPin, INPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
}

void loop() {
  // Find states of button and/or switch
int stateButton = digitalRead(buttonPin); //read the state of the button
int stateSwitch = digitalRead(switchPin);
  if(stateButton == 1) { //if is pressed
      for (int i=0; i<strip.numPixels(); i++){
      //strip.setPixelColor(index, red value, green value, blue value)
      strip.setPixelColor(i, 90, 252, 3); //set pixel to green
  }
  strip.show(); //update the strip 
  }
  else if(stateSwitch == 1) { //if is switched on
    for (int i=0; i<strip.numPixels(); i++){
      strip.setPixelColor(i, 140, 3, 252); //set pixel to purple
  }
  strip.show(); //update the strip

  } 
  else { //if not switched
     for (int i=0; i<strip.numPixels(); i++){
      strip.setPixelColor(i, 0,0,0); //set pixel strip to no colors aka off
  }
  strip.show(); //update the strip`
  }
  
}

//LED Strip functions from Adafruit library strandtest
