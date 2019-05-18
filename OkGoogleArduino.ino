#define BLYNK_PRINT Serial

#include <SoftwareSerial.h>
#include <SPI.h>
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

char auth[] = "8f180320xxxxxxxxxc458c50faa";
char ssid[] = "iPhone 5S";
char pass[] = "11211111";

SoftwareSerial EspSerial(2, 3); // RX, TX ESP8266
#define ESP8266_BAUD 9600
ESP8266 wifi(&EspSerial);

void setup()
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);      
  EspSerial.begin(ESP8266_BAUD);
  delay(10);
 
  Blynk.begin(auth, wifi, ssid, pass, "blynk-cloud.com", 8442);
}

void loop()
{
  Blynk.run();
}
