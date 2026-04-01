Servo Barrier System using Arduino

Description:
The Servo Barrier System is an automation project that controls the opening and closing of a barrier using an ultrasonic sensor and a servo motor. When an object is detected within a certain distance, the barrier automatically opens, and it closes when the object moves away. This project demonstrates a real-world application of embedded systems and automation.

Objective:
To design and develop an automatic barrier control system that detects objects using an ultrasonic sensor and operates a servo motor without manual intervention, improving efficiency and security.

Components Used:
- Arduino UNO  
- Ultrasonic Sensor (HC-SR04)  
- Servo Motor (SG90)  
- Breadboard  
- Jumper Wires  
- USB Cable / Power Supply  

Circuit Connections

| Component | Arduino Pin |
|----------|------------|
| Ultrasonic VCC | 5V |
| Ultrasonic GND | GND |
| TRIG | D9 |
| ECHO | D10 |
| Servo Signal | D11 |
| Servo VCC | 5V |
| Servo GND | GND |

Working Principle:
The system works on the principle of ultrasonic distance measurement. The ultrasonic sensor sends sound waves and measures the time taken for the echo to return.

- If distance < 20 cm → Servo rotates (barrier opens)  
- If distance > 20 cm → Servo resets (barrier closes)  

This enables automatic control of the barrier without human intervention.
