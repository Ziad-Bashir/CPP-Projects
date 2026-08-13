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
The application calculates the Earth time using the **Lorentz factor**. 

* **Speed of Light (c):** 3 × 10⁸ m/s

* **Lorentz Factor (γ):**
```math
\gamma = \sqrt{1 - \left(\frac{v}{c}\right)^2}
   ```bash
   g++ "Time Dilation Calculator.cpp" -o TimeDilation
