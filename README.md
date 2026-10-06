# An-Apocalyptic-Text-Adventure-Game# The Outbreak: Terminal Survival Simulator

## Overview
A command-line interactive survival simulation written entirely in C. This project demonstrates core procedural programming concepts, including control flow, state management, and user I/O within a raw terminal environment. 

## Technical Stack
* **Language:** C
* **Environment:** Git Bash / PowerShell
* **Compiler:** GCC (GNU Compiler Collection)
* **Version Control:** Git & GitHub

## Core Logic & Features
* **State Tracking:** Dynamic management of player health and survival days using persistent variables.
* **Branching Execution:** Decision-tree mechanics utilizing nested `if/else` conditional logic.
* **Continuous Game Loop:** Core runtime relies on a `while` loop that actively evaluates win/loss conditions in real-time.

## How to Build and Run
To compile and execute this program locally, ensure you have the GCC compiler installed.

1. Clone the repository:
   `git clone https://github.com/krishna/apocalyptic-survival-game.git`
2. Navigate to the project directory:
   `cd "First game"`
3. Compile the source code:
   `gcc apocalyptictextadventure.c -o game`
4. Run the executable:
   `.\game`

## Development Roadmap
* [ ] Implement an array-based inventory system to track scavenged supplies.
* [ ] Introduce pointer-based memory management for dynamic event generation.
* [ ] Separate core logic into header files (`.h`) to demonstrate modular hardware-style architecture.
