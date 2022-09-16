#include <Arduino.h>
//I, Noe Puna, 000781646, I acknowledge that this my own work and no other
// person's work has been copied without acknowledgement.

unsigned long apptime;

void setup() {
  // put your setup code here, to run once:

  // start the USB serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nHello, World!");
  Serial.println("Noe Puna 000781646");
  Serial.println(ESP.getChipId());
  Serial.println(ESP.getFlashChipId());

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  apptime = millis();
  Serial.println(apptime);
  delay(2000);
  
}