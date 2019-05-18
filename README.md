## Requirements:
* Android phone Marsmallow or higher or Apple phone (for Google Assistant)
* IFTTT Account
* Blynk App Account
* Arduino UNO
* ESP8266 (ESP-01) WiFi Module
* Some Jumper Cables
* Relay SRD-05VDC-SL-C (Optional)
* 5V to 3.3V Logic Converter (Optional)

## PINOUT FINAL
```text
UNO <------------> ESP-01
D2 (as RX) ------- TX
D3 (as TX) ------- RX
3.3V ------------- 3V3
3.3V ------------- EN
GND -------------- GND
```
```text
UNO <------------> LED
D7  -------------- ANODE (+)
GND -------------- CATODE (-)
```
```text
UNO <------------> RELAY
D8  -------------- IN
5V  -------------- VCC
GND -------------- GND
```


## PINOUT FLASHING ESP-01
```text
ESP-01 <---------> USB TTL
TX  -------------- RX
RX  -------------- TX
3V3 -------------- 3V3
EN  -------------- 3V3
IO2 -------------- GND
GND -------------- GND
```


## PINOUT AT COMMAND MODE ESP-01
```text
ESP-01 <---------> USB TTL
TX  -------------- RX
RX  -------------- TX
3V3 -------------- 3V3
EN  -------------- 3V3
GND -------------- GND
```


## FLASH ESP-01 WITH ESPTOOL (Optional)

FIRMWARE ESP-01 :
1) AT  V1.6.2
2) SDK V2.2.1

Flash SDK First > Then Flash AT Afterward
Memory Address :
```text
esptool.py --port /dev/ttyUSB0 --baud 115200 write_flash --flash_size 1MB --flash_mode dio <MEMORY ADDRESS> <FILE.BIN>
```
```text
boot_v1.2.bin               0x00000
user1.1024.new.2.bin        0x01000
esp_init_data_default.bin   0xfc000
blank.bin                   0x7e000 & 0xfe000
```


## SET ESP-01 BAUD RATE TO 9600 VIA AT COMMAND (Recommended)
```text
AT
AT+UART_DEF=9600,8,1,0,0
```

