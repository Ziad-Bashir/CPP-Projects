# 🚀 Time Dilation Calculator

![Status](https://img.shields.io/badge/status-Done-success)
![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![License](https://img.shields.io/badge/license-MIT-success)

---

## 🌌 The Inspiration & The Story Behind The Project
This project holds an exceptionally special place in my heart, and its story is deeply rooted in pure curiosity, wonder, and a genuine passion for both physics and software engineering. Everything started on an unforgettable night right after I finished watching the masterpiece movie *Interstellar*. I was sitting there, completely stunned and mesmerized, trying to process the sheer magnitude of what I had just witnessed, especially the mind-bending concept of time dilation. 

The idea that time is not absolute—that it's entirely relative and stretches or compresses depending on how fast you move through space—was a complete paradigm shift for me. The thought that stepping onto a spacecraft and traveling at a staggering fraction of the speed of light could act as a literal, one-way ticket to the future, where decades pass back on Earth while only a few years pass for you, completely blew my mind. I couldn't stop thinking about the profound implications of these cosmic rules governing our universe.

Rather than just letting it remain a cool movie concept, I felt an overwhelming urge to understand the "how" and the "why" behind the magic. Immediately after the credits rolled, I dove headfirst into researching Albert Einstein’s **Special Theory of Relativity**. I spent countless hours reading scientific papers, breaking down complex principles, and trying to comprehend how elite physicists managed to decode the fabric of spacetime. The realization that spending, for instance, just 10 years on a spaceship traveling at 99.5% the speed of light (approximately $2.985 \times 10^8$ m/s) could mathematically result in a massive 100 years ticking away on Earth was the ultimate eureka moment.

At that exact point, I knew I had to build something tangible out of this fascination. I didn't just want to read equations on a page; I wanted to create a live, interactive tool that could transform these abstract, unimaginable cosmic realities into concrete numbers that I could play with, test, and analyze whenever curiosity struck. I poured my heart, soul, and endless late-night energy into writing this C++ program, making sure every single line of code was rock-solid, accurate, and reliable. This project stands as my personal tribute to that burst of inspiration—a bridge connecting my love for cinema, theoretical physics, and the art of programming.

---

## 📖 Project Overview
The **Time Dilation Calculator** is a robust, lightweight C++ console application designed to compute and simulate time dilation based strictly on the principles of Albert Einstein’s Special Theory of Relativity. 

In our day-to-day lives, time feels constant and universal. However, when objects move at velocities comparable to the speed of light, relativistic effects take over, causing time to dilate. This application bridges theoretical physics and practical programming by determining the exact amount of time experienced by a stationary observer on Earth ($\Delta t'$) relative to the proper time experienced by a traveler aboard a high-speed spacecraft ($\Delta t$).

---

## 🧮 The Physics & The Math Behind It
To ensure absolute accuracy, the application relies on the foundational equations of Special Relativity. Here is the exact mathematical breakdown governing the program's core logic:

* **The Speed of Light in a Vacuum ($c$):** 
  $$c = 3 \times 10^8 \text{ m/s}$$

* **The Time Dilation Equation:**
```math
\Delta t' = \frac{\Delta t}{\sqrt{1 - \frac{v^2}{c^2}}}
````

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
