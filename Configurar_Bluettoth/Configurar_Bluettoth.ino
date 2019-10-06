
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11); // RX, TX

void setup() {
  delay(500);
  Serial.begin(9600);
  Serial.println("Digite os comandos AT :");
  bluetooth.begin(9600);
}

void loop() {  
  if (bluetooth.available())
    Serial.write(bluetooth.read());

  if (Serial.available())
    bluetooth.write(Serial.read());
}
