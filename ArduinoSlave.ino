#include <Wire.h>
void setup() {
   pinMode(7, OUTPUT); 
  digitalWrite(7, LOW);
  Wire.begin(1);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
  Serial.begin(9600);           // start serial for output
 
  
  
}

void loop() {
  delay(500);
 
  
  

}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void requestEvent()
{
  uint8_t Buffer[3];
  Buffer[0]=120;
  Buffer[1]=130;
  Buffer[2]=140;
  Wire.write(Buffer,3);
}
