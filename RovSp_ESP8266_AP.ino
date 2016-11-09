/*
     second ESP-01

     This is for the ESP acting as AP

     default IP address as AP is 192.168.4.1

     the second set of GPIO0 and RESET buttons below
*/
#include <ESP8266WiFi.h>

void setup() {
  Serial.begin(115200);
  Serial.println();

  Serial.print("Setting soft-AP ... ");
  boolean result = WiFi.softAP("Roving Spectres", "spanglei");
  if(result == true)
  {
    Serial.println("Ready");
  }
  else
  {
    Serial.println("Failed!");
  }
}
void loop() {
}


