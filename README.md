# Modbus Communication Project

This project utilizes 2 Max RS485 modules for Modbus communication, with an ESP32 and a USB TTL adapter. Through this setup, data sent from the ESP32 can be read via the computer port. The project was developed using PlatformIO IDE with Arduino framework and uploaded to GitHub.

## Project Description

The project facilitates data transmission via Modbus protocol using ESP32 and USB TTL adapter for communication with the computer port. Data received by the ESP32 is transmitted to other devices through RS485 modules using the Modbus protocol.

## Table

Here is a table showcasing the components used in the project:

| Component       | Quantity |
|-----------------|----------|
| ESP32           | 1        |
| Max RS485 Module| 2        |
| USB TTL Adapter | 1        |

MAX485 PINOUT:

| Pin Number | Pin Name | Function                                          |
|------------|----------|---------------------------------------------------|
| 1          | VCC      | Power supply input (5V)                           |
| 2          | GND      | Ground                                            |
| 3          | DI/TX    | Data input (TTL level) / Transmit data (RS485 level) |
| 4          | RO/RX    | Data output (TTL level) / Receive data (RS485 level) |
| 5          | DE       | Data enable (active low)                          |
| 6          | RE       | Receiver enable (active low)                      |
| 7          | A        | RS485 differential signal A                       |
| 8          | B        | RS485 differential signal B                       |


## Connection Diagram

Below is the connection diagram for the hardware used in the project:

1. ESP32 Board Connection:
![ESP32 and USB TTL Adapter Connection](https://github.com/sametburhan/rs485-to-usb-example/blob/master/WEMOS-D1-R32-ESP-WROOM-32-ESPDUINO-R3-Model-D1-R32.jpeg)

2. RS485 Modules Wire Connection:
![RS485 Modules Connection](https://github.com/sametburhan/rs485-to-usb-example/blob/master/connection.png)
