# 🔥 Fire Flame Detection System using Arduino

This project is a simple and effective flame detection system using Arduino and a flame sensor. When a flame is detected, the buzzer and LED turn ON to alert nearby users. Ideal for early fire warning systems in homes, offices, or small labs.

---

## 🔧 Components Required

| Component            | Quantity |
|----------------------|----------|
| Arduino Uno          | 1        |
| Flame Sensor (IR)    | 1        |
| Buzzer               | 1        |
| LED (Red)            | 1        |
| Resistor (220Ω)      | 1        |
| Jumper Wires         | As needed |
| Breadboard (Optional)| 1        |

---

## 🔌 Circuit Connections

| Flame Sensor Pin | Arduino Pin |
|------------------|-------------|
| VCC              | 5V          |
| GND              | GND         |
| DO (Digital Out) | D2          |

| Buzzer +         | D8          |
| Buzzer -         | GND         |

| LED +            | D9          |
| LED -            | GND (via 220Ω resistor) |

---

## 🧠 Working Principle

- The flame sensor detects IR light from a fire
- When flame is detected:
  - 🔔 Buzzer turns ON
  - 🔴 LED turns ON
- When no flame:
  - 🔕 Buzzer OFF
  - 🔘 LED OFF

---

## 💻 Arduino Code

The working code is included in the file: `fire_flame_detector.ino`

```cpp
int flameSensor = 2;
int buzzer = 8;
int led = 9;

void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int flame = digitalRead(flameSensor);
  if (flame == LOW) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    Serial.println("🔥 Flame Detected!");
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    Serial.println("✅ Safe");
  }
  delay(500
  # 🔥 Project Title

...description...

## 🔧 Components Required
...table...

## 🔌 Circuit Connections
...table...

## 💻 Arduino Code
...code...

## 🖼 Circuit Diagram
![Circuit](circuit.png)

✅ ✅ ✅

🔽 **Yahan daalna hai:**

## 👨‍💻 Developed by

**Sundram Savre**  
Embedded Systems & IoT Enthusiast  
📍 India

---

## 📫 Contact = 8234002449
## 📫 Contact

GitHub: [Sundram1234](https://github.com/Sundram1234)  
Email: sundramsarve@.com 


For queries or collaboration, feel free to reach out via GitHub or LinkedIn.
