# Pocket Pixle 

An Arduino-powered handheld **Game Boy-style console** with multiple retro games and a simple UI. Built using an **Arduino Nano**, an **OLED Display**, and **tactile buttons**, this project brings classic fun to a tiny form factor.

## Features

- 128x64 OLED Display (U8glib Library)
- Menu System to select between multiple games
- Games Included:
  - Dino Run
  - Flappy Bird
  - Star Wars
  - Asteroid Shooter
- High score saving using EEPROM
- Sound effects with buzzer
- Custom startup screen
- Button-based navigation (Up, Down, Left, Right, OK)

## 🧩 Hardware Components

| Component        | Description                      |
|------------------|-----------------------------------|
| Arduino Nano     | Microcontroller                   |
| OLED Display     | 128x64 I2C (SSD1306)              |
| Push Buttons     | 7 buttons for input
| Buzzer           | For sound effects (optional)      |
| 0.1uf capacitor  | For button debouncing (if needed) |

##  Games Overview

### Dino Run
- Jump over cacti using the UP button.
- Cacti spawn at fixed distances (90–200 px).
- Score increases with time.
- Game over when dino hits a cactus.
- High score stored in EEPROM.

### Flappy Bird
- Tap UP to flap.
- Avoid pipes coming from the right.
- Smooth gravity and collision system.
- Game restarts on crash.

### Star Wars Shooter
- Control your ship using the UP and DOWN keys.
- Shoot the planet while dodging asteroids.
- Asteroids spawn from the planet and move toward the ship.
- Bullets can destroy the planet and increase the score.
- The ship has 5 lives. When asteroids hit, the ship's lives decrease.
- The game ends on 0 lives.

## Menu System

A clean UI to navigate through the available games. The currently selected item is highlighted with a selection box.

## 🛠Software & Libraries

- [U8glib](https://github.com/olikraus/u8glib) – OLED graphics library
- EEPROM – For high score storage
- `tone()` – Arduino sound function for buzzers

## How it Works

- On startup, a Custom splash screen is shown with Startup Tone.
- The main menu appears to select a game.
- Use the UP and DOWN buttons to navigate and OK to select.
- In each game, button input is polled and rendered per frame.
- Game logic and collisions are handled in individual Game functions.
- After game over, return to menu or restart the game.

## Schmatic
  ![schematic](https://github.com/user-attachments/assets/f0199a89-cced-4877-8fa6-b62516cc3ef5)

## Future Improvements

- Add more games
- Save multiple high scores per game
- Add animations/transitions between screens
- Low power sleep mode

## 💡 Inspiration

Inspired by the original Game Boy and Arduboy, this project merges nostalgia with embedded development.


Built with love, logic, and a lot of debugging.        
