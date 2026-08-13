# 🚀 Time Dilation Calculator

![Status](https://img.shields.io/badge/status-Done-success)
![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![License](https://img.shields.io/badge/license-MIT-success)

## 🌌 The Inspiration
This project holds a very special place in my heart. The idea was born entirely out of pure fascination right after I watched the movie *Interstellar*. I was completely mind-blown by the concept of time dilation—the mind-bending reality that time is relative and that traveling near the speed of light is essentially a one-way ticket to the future! 

Immediately after the credits rolled, I dove into researching Albert Einstein's **Special Theory of Relativity**. The thought that spending 10 years on a spaceship could equal exactly 100 years passing on Earth—which mathematically requires traveling at a staggering 99.5% the speed of light (approx. 2.985 × 10^8 m/s)—was so captivating that I just had to build a tool to calculate it myself. I poured my passion into writing this C++ program so I could easily simulate these cosmic journeys and see the actual numbers whenever curiosity strikes.

## 📖 Overview
A C++ console application that calculates time dilation based on Einstein's theory of Special Relativity. It determines the time experienced on Earth relative to the time experienced on a spacecraft moving at a significant fraction of the speed of light.

## 🧮 The Math Behind It
The application calculates the Earth time using Einstein's Special Relativity formulas.

* **Speed of Light ($c$):** $3 \times 10^8$ m/s

* **Lorentz Factor ($\gamma$):**
  $$\gamma = \frac{1}{\sqrt{1 - \frac{v^2}{c^2}}}$$

* **Time Dilation Formula:**
  $$t = \frac{t_0}{\sqrt{1 - \frac{v^2}{c^2}}} = t_0 \cdot \gamma$$
  *(Where $t$ is the Earth time, $t_0$ is the ship time, $v$ is the ship velocity, and $c$ is the speed of light).*

*Note: The program scales the input velocity automatically. For example, if you enter `2`, the program multiplies it by 10⁸ to process it as `2 × 10⁸ m/s`.*

## ⚙️ Features
- **User Input:** Prompts the user to enter the Ship Time and Ship Velocity.
- **Input Scaling:** Automatically formats the velocity magnitude using standard math libraries.
- **Input Validation:** Ensures the ship's velocity is strictly less than the speed of light ($v < c$) to prevent computational errors and maintain physical accuracy.

## 🛠️ Built With
- **Language:** C++
- **Libraries:** `<iostream>`, `<cmath>`

## 🚀 Getting Started
To compile and run this project locally:

1. Navigate to the project directory.
2. Compile the code using a C++ compiler:
   ```bash
   g++ "Time Dilation Calculator.cpp" -o TimeDilation
