# 🪨📄✂️ Stone-Paper-Scissors Console Game (C++)

![Status](https://img.shields.io/badge/status-Done-brightgreen)
![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![License](https://img.shields.io/badge/license-MIT-green)

---

A structured C++ console implementation of the classic **Stone-Paper-Scissors** (also known as Rock-Paper-Scissors) game. Built as a **Curriculum Project** based on **Project 1** from Course **`05 - Algorithms & Problem-Solving – Level 2`** on **Programming Advices** by **Dr. Mohammed Abu-Hadhoud**.

## 🧠 Learning & Re-Implementation Journey

Rather than copying the reference solution, this project was approached as a hands-on exercise in understanding multi-function program architecture and building it independently from scratch:

1. **Paper-and-Pen Architecture & Code Tracing:** Mapped out the program's execution flow on paper—separating high-level **Main Functions** from low-level **Helper Functions**—and manually traced how data passes between them.
2. **First Attempt (Partial Re-Implementation):** Rebuilt the core game logic without looking at the solution to identify gaps in state tracking and function sequencing.
3. **Second Attempt (Full Independent Build):** Re-wrote the entire codebase cleanly from scratch, structuring the file with `Enums`, `Structs`, and `Forward Declarations` above `main()`.

## ⚙️ Features

* **Customizable Match Length:** Validates user input to play between `1` and `10` rounds per match.
* **Dynamic Console Feedback:** Changes Windows terminal colors and audio cues based on each round's result (Green for Player win, Red with an alert bell `\a` for Computer win, and Yellow for a Draw).
* **Round & Match Scoreboards:** Displays both players' choices and the winner after every round, followed by a final summary of total wins, losses, draws, and the overall match winner.
* **Replay Loop:** Clears and resets the terminal screen cleanly to start a fresh match on demand.

## 🏗️ Code Architecture & Concepts Applied

* **Top-Down File Structure:** Uses **Forward Declarations (Function Prototypes)** so data models (`enGameChoice`, `enWinner`, `stRoundInfo`, `stGameResults`) and `main()` appear immediately at the top of `Stone_Paper_Scissors.cpp`, followed by clean function implementations below.
* **Single-Responsibility Procedural Design:** Separates user input validation, random choice generation, round/game evaluation, and UI rendering into dedicated functions.
* **Custom Data Structures:** Uses `enum` for readable state management and `struct` to group and pass structured round and match data cleanly.

## 🔄 Program Execution Flow & Functions Breakdown

### Call-Flow Hierarchy
```text
main()
 └── StartGame()
      ├── ResetScreen()
      ├── HowManyRounds()
      ├── PlayGame(NumberOfRounds)
      │    ├── [Loop per round]
      │    │    ├── Player1Choice()
      │    │    ├── ComputerChoice() ──► RandomNumber(1, 3)
      │    │    ├── WhoWonTheRound(RoundInfo)
      │    │    ├── WinnerName(Winner)
      │    │    └── PrintRoundResults(RoundInfo)
      │    │         ├── ChoiceName(Choice)
      │    │         └── SetWinnerScreenColor(Winner)
      │    └── WhoWonTheGame(Player1WinTimes, ComputerWinTimes) ──► WinnerName(FinalWinner)
      ├── ShowOverScreen() ──► Tabs(2)
      └── ShowFinalResult(GameResults)
           ├── Tabs(2)
           └── SetWinnerScreenColor(GameWinner)
