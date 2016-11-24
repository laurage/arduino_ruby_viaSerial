uint8_t c;
int i;
String readString;

void setup() {
  Serial.begin(9600);      // set baud rate
  pinMode(12, OUTPUT);     // set pin 12 to be output for LED
  digitalWrite(12, LOW);   // start with LED off
}

void loop() {

  while (Serial.available() > 0) {  // check if serial port has data
    
   // READ
  /*  char c = Serial.read();              // read the byte
    readString += c;
  
   readString.trim();
   if (readString.length() > 0){
    if (c == '1'){
      for (i=0; i<5; i++){
        digitalWrite(12, HIGH);  // turn on LED
        delay(500);              // wait 500 milliseconds
        digitalWrite(12, LOW);   // turn off LED
        delay(500);              // wait 500 milliseconds
       }
    }
    
   }*/
  }

    // WRITE
    Serial.print("Hello World");
  
}
