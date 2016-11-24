uint8_t c;
int i;
String readString;
const int buttonPin = 2;     // the number of the pushbutton pin

int buttonState = 0;         // variable for reading the pushbutton status
/*
 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
*/

void setup() {
  Serial.begin(9600);      // set baud rate
  pinMode(12, OUTPUT);     // set pin 12 to be output for LED
  digitalWrite(12, LOW);   // start with LED off
  pinMode(buttonPin, INPUT);
}

void loop() {
 // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // send "h" to the terminal
    Serial.print("h");
    
  } else {
    // send "l" to the terminal
    Serial.print("l");
  }


    // WRITE
    


}

