# Smart Battery Power Board

This project involves a Smart Battery Power Board featuring a PIC18F45K50 microcontroller, an RRC3570 smart battery, RS232 communication with a PC, an LM35 temperature sensor, and PWM control for a fan.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Hardware Components](#hardware-components)
- [Software Components](#software-components)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The Smart Battery Power Board is designed to manage and monitor the power supply from an RRC3570 smart battery. The board utilizes the PIC18F45K50 microcontroller for its operations, with RS232 communication for PC connectivity, an LM35 temperature sensor for thermal monitoring, and PWM control for fan speed management.

## Features

- **Microcontroller:** PIC18F45K50
- **Smart Battery:** RRC3570
- **Communication:** RS232 interface with a PC
- **Temperature Sensing:** LM35 temperature sensor
- **PWM Control:** For managing fan speed

## Hardware Components

1. **PIC18F45K50**: The microcontroller used for processing and control.
2. **RRC3570**: A smart battery providing power and battery management features.
3. **RS232 Communication Module**: Enables communication between the board and a PC.
4. **LM35 Temperature Sensor**: Monitors the temperature and provides thermal data to the MCU.
5. **PWM Control Circuitry**: Used for precise control of the fan speed.

## Software Components

1. **Firmware for PIC18F45K50**: Written in C, this firmware handles battery management, temperature sensing, and PWM control for the fan.
2. **PC Software**: A program that communicates with the board via RS232 to display data and send commands.

## Getting Started

### Prerequisites

- MPLAB X IDE and XC8 compiler for firmware development.
- A suitable RS232 interface on the PC or an RS232 to USB converter.
- Software to communicate with the board, such as PuTTY or a custom PC application.

### Installation

1. **Clone the repository**:
   ```sh
   git clone https://github.com/yourusername/Smart-Battery-Power-Board.git
   ```
2. **Open the project in MPLAB X IDE**.
3. **Build the project** using the XC8 compiler.
4. **Flash the firmware** to the PIC18F45K50 using a suitable programmer.

## Usage

1. **Connect the RRC3570 battery** to the power board.
2. **Connect the board to the PC** using the RS232 interface.
3. **Open your RS232 communication software** on the PC and set the correct COM port and baud rate.
4. **Monitor the temperature data** from the LM35 sensor and control the fan speed using PWM as required.

## Contributing

Contributions are welcome! Please fork this repository and submit a pull request for any enhancements or bug fixes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
