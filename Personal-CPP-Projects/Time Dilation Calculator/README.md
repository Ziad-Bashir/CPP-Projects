
# 🚀 Time Dilation Calculator

## 🌌 The Inspiration
This project holds a very special place in my heart. The idea was born entirely out of pure fascination right after I watched the movie *Interstellar*. I was completely mind-blown by the concept of time dilation—the mind-bending reality that time is relative and that traveling near the speed of light is essentially a one-way ticket to the future! 

Immediately after the credits rolled, I dove into researching Albert Einstein's **Special Theory of Relativity**. The thought that spending, for example, 10 years on a spaceship traveling at extreme speeds could equal 100 years passing on Earth was so captivating that I just had to build a tool to calculate it myself. I poured my passion into writing this C++ program so I could easily simulate these cosmic journeys and see the actual numbers whenever curiosity strikes.

## 📖 Overview
A C++ console application that calculates time dilation based on Einstein's theory of Special Relativity. It determines the time experienced on Earth relative to the time experienced on a spacecraft moving at a significant fraction of the speed of light.

## 🧮 The Math Behind It
The application calculates the Earth time using the **Lorentz factor**.
- **Speed of Light ($c$):** $3 \times 10^8$ m/s
- **Lorentz Factor ($\gamma$):**
  $$ \gamma = \sqrt{1 - \left(\frac{v}{c}\right)^2} $$
- **Time Dilation Formula:**
  $$ t_{Earth} = \frac{t_{Ship}}{\gamma} $$

*Note: The program scales the input velocity automatically. For example, if you enter `2`, the program multiplies it by $10^8$ to process it as $2 \times 10^8$ m/s.*

## ⚙️ Features
- **User Input:** Prompts the user to enter the Ship Time and Ship Velocity.
- **Input Scaling:** Automatically formats the velocity magnitude.
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
