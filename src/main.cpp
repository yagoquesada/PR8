#include <Arduino.h>
#define RXD2 16
#define TXD2 17

void setup()
{
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Serial.println("Serial Txd is on pin: "+String(TX));
  Serial.println("Serial Rxd is on pin: "+String(RX));
}

void loop()
{
  while (Serial2.available()) 
  {
    Serial.print(char(Serial2.read()));
  }
  while (Serial.available())
  {
    Serial2.print(char(Serial.read()));
  }
}