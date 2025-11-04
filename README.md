# 🤖 ESP32 Smart Radar Project (Wokwi Simulation)

This project is a simulation of a smart radar system using an ESP32 microcontroller, an HC-SR04 ultrasonic sensor, and a servo motor. The system detects the proximity of an object in real-time and moves the servo (representing a robotic arm or barrier) when the object crosses a predefined threshold (20 cm).

This project demonstrates the fundamental **"Sense -> Process -> Act"** principle of embedded systems.

---

## 🚀 Key Features

* **Real-Time Distance Sensing:** Continuously measures distance in centimeters using the HC-SR04 sensor.
* **Decision-Making Logic:** Uses C++ `if/else` logic to trigger an "obstacle" state if an object gets closer than 20 cm.
* **Physical Actuation:** Performs a physical action by moving the `Servo` motor from 0 to 90 degrees when an obstacle is detected.
* **Serial Monitor Feedback:** Provides continuous output to the `Serial Monitor` for debugging and real-time distance tracking.

## ⚙️ How It Works (Sense -> Process -> Act)

1.  **Sense:** The ESP32 sends a short ultrasonic "ping" via the sensor's `Trig` pin.
2.  **Process:** The ESP32 listens on the `Echo` pin and measures the time (`pulseIn`) it takes for the sound to return. It then converts this time into distance (in cm) using the formula: `distance = duration * 0.034 / 2`.
3.  **Act:** The calculated distance is checked against the threshold:
    * **If `distance < 20`:** The system identifies an obstacle. The `Servo` motor is moved to the 90-degree position.
    * **If `distance >= 20`:** The area is clear. The `Servo` motor returns to the 0-degree position.

## 🛠️ Tech Stack

* **Hardware (Simulated):** ESP32 DevKit V1
* **Sensor:** Ultrasonic Sensor (HC-SR04)
* **Actuator:** Servo Motor
* **Language:** C++ (Arduino Framework)
* **Required Library:** `ESP32Servo`
* **Simulation Platform:** [Wokwi.com](https://wokwi.com/)

## 🔌 Project Structure

This repository follows the standard folder structure for Arduino/ESP32 projects.
