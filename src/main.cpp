#include <Arduino.h>

#define PIN_RS485_RX 16
#define PIN_RS485_TX 17

void setup()
{
  Serial.begin(115200);
  delay(1000);

  Serial2.begin(115200, SERIAL_8N1, PIN_RS485_RX, PIN_RS485_TX);
  delay(1000);

  Serial.println("RS485-Test");

  delay(1000);
}

void loop()
{
  if (Serial2.available())
  {
    Serial.print("Message RX: ");
    Serial.println(Serial2.readStringUntil('\n'));
  }

  if (Serial.available())
  {
    Serial.print("Message TX: ");
    String msg = Serial.readStringUntil('\n');
    Serial.println(msg);
    Serial2.print(msg);
  }
}
