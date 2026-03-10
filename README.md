# 📟 Embedded Systems Project Suite

A collection of firmware projects demonstrating core concepts in embedded systems, including GPIO control, pulse-width modulation (PWM), sensor interfacing, and signal processing.

## 🛠 Project Overview

This repository contains five distinct modules designed to showcase the integration of microcontrollers with various electronic components. Each project focuses on a specific aspect of hardware-software interaction.

### 1. LED Blinking & Precise Delays

* **Goal:** Control a Light Emitting Diode (LED) using software-defined delays.
* **Concepts:** GPIO (General Purpose Input/Output) configuration, Clock cycles, and Busy-wait vs. Timer-based delays.

### 2. LED Brightness Control (PWM)

* **Goal:** Adjust the intensity of an LED from 0% to 100%.
* **Concepts:** Pulse Width Modulation (PWM), Duty Cycles, and Analog-to-Digital simulation.

### 3. DHT Temperature & Humidity Monitoring

* **Goal:** Interface with a DHT11/DHT22 sensor to read ambient environmental data.
* **Concepts:** Single-bus communication protocols, data parsing, and handling timing-sensitive digital signals.

### 4. Digital Piano using a Piezo Buzzer

* **Goal:** Generate specific musical frequencies (notes) through a buzzer.
* **Concepts:** Frequency modulation, arrays for note mapping, and timer-driven interrupts.

### 5. Ultrasonic Distance Measurement

* **Goal:** Use an HC-SR04 sensor to calculate the distance of an object in centimeters.
* **Concepts:** Time-of-Flight (ToF) calculation, Trigger/Echo pulses, and converting sound speed into distance metrics.

---

## ⚙️ Technical Stack

* **Hardware:** [Insert your MCU, e.g., Arduino, ESP32, STM32]
* **Language:** C / C++ (Embedded)
* **IDE/Tools:** [e.g., VS Code with PlatformIO, Arduino IDE, or Proteus for simulation]

## 🚀 How to Run

1. Clone the repository: `git clone https://github.com/username/repo-name.git`
2. Open the specific project folder in your preferred IDE.
3. Connect the hardware according to the pinout diagrams provided in each project folder.
4. Compile and flash the firmware to your microcontroller.

---
