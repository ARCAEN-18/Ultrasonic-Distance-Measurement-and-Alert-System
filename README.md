# Ultrasonic Distance Measurement and Alert System

## 📌 Overview
This project implements an **Ultrasonic Distance Measurement System** using the **HC-SR04 ultrasonic sensor** and **Arduino Uno**. The system precisely measures the distance of an object in centimeters and displays the measured distance on an **LCD screen**. When an object comes closer than **50 cm**, a **blinking red LED** and a **buzzer alarm** are activated to indicate proximity.

This project is widely applicable in **obstacle detection**, **parking assistance**, and **automation systems**.

---

## 🎯 Objectives
- Measure object distance accurately using ultrasonic sensing
- Display real-time distance values on an LCD
- Trigger visual and audible alerts when objects are too close
- Implement proximity-based alert logic

---
## 🧪 Simulation (Tinkercad)
The complete circuit and working simulation of this project was implemented and tested using Tinkercad.

🔗 **Tinkercad Project Link:**  
https://www.tinkercad.com/things/et22bAai1K8-dazzlinggaaris?sharecode=undefined

## 🛠️ Components Used
- Arduino Uno  
- HC-SR04 Ultrasonic Distance Sensor  
- 16x2 LCD Display  
- Red LED  
- Buzzer  
- Resistors  
- Jumper Wires  
- Breadboard  

---

## ⚙️ Working Principle
1. The HC-SR04 sensor emits ultrasonic waves through the trigger pin.
2. The echo pin receives the reflected signal from the object.
3. The Arduino calculates the distance using the time taken for the echo to return.
4. The distance value (in cm) is displayed on the LCD.
5. If the measured distance is less than **50 cm**, the LED blinks and the buzzer sounds.

---

## 🚦 Distance Threshold & Output

| Distance (cm) | Condition | Output |
|--------------|-----------|--------|
| ≥ 50 cm | Safe Distance | LCD displays distance |
| < 50 cm | Object Nearby | Red LED Blinks + Buzzer ON |

---

## 🧪 Experimental Results
- Accurate distance measurements obtained in centimeters.
- LCD updates distance values in real time.
- Immediate alerts generated when object enters the danger zone.

---

## 📊 Applications
- Obstacle detection systems
- Parking assistance systems
- Robotics and automation
- Security and proximity alert systems

---

## 🔮 Future Enhancements
- Integrate servo motor for scanning objects
- Add IoT connectivity for remote monitoring
- Display distance graphically on a mobile app
- Use multiple ultrasonic sensors for wider coverage

---

## 💻 Technologies Used
- Arduino Programming (C/C++)
- Embedded Systems
- Ultrasonic Sensors

---

## 📄 License
This project is developed for academic and learning purposes.
