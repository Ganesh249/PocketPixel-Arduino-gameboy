#Pocket Pixle 

An Arduino-powered handheld **Game Boy-style console** with multiple retro games and a simple UI. Built using an **Arduino Nano**, an **OLED Display**, and **tactile buttons**, this project brings classic fun to a tiny form factor.

## 🎮 Features

- 📟 128x64 OLED Display (U8glib Library)
- 🎮 Menu System to select between multiple games
- 🕹️ Games Included:
  - Dino Run
  - Flappy Bird
  - Star Wars Shooter
- 💾 High score saving using EEPROM
- 🔊 Sound effects with buzzer
- 🎨 Animated startup screen
- 👆 Button-based navigation (Up, Down, Left, Right, OK)

## 🧩 Hardware Components

| Component         | Description                       |
|------------------|-----------------------------------|
| Arduino Nano     | Microcontroller                   |
| OLED Display     | 128x64 I2C (SSD1306)              |
| Push Buttons     | 5 buttons for input (Up, Down, Left, Right, OK) |
| Buzzer           | For sound effects (optional)      |
| Resistors        | For button debouncing (if needed) |
| Wires/Breadboard | For connections and prototyping   |

## 🕹️ Games Overview

### 🦖 Dino Run
- Jump over cacti using the UP button.
- Cacti spawn at random distances (90–200 px).
- Score increases with time.
- Game over when dino hits a cactus.
- High score stored in EEPROM.

### 🐦 Flappy Bird
- Tap UP to flap.
- Avoid pipes coming from the right.
- Smooth gravity and collision system.
- Game restarts on crash.

### 🌌 Star Wars Shooter
- Control your ship using UP/DOWN.
- Shoot the planet while dodging asteroids.
- Asteroids spawn from the planet and move toward the ship.
- Bullets can destroy asteroids and increase score.
- 5 lives, game ends on collision.
- Planet hit adds to score.

## 📋 Menu System

A clean UI to navigate through the available games. The currently selected item is highlighted with a selection box.

## 🛠️ Software & Libraries

- [U8glib](https://github.com/olikraus/u8glib) – OLED graphics library
- EEPROM – For high score storage
- `tone()` – Arduino sound function for buzzers

## 🧠 How it Works

- On startup, an animated splash screen is shown.
- The main menu appears to select a game.
- Use directional buttons to navigate and OK to select.
- In each game, button input is polled and rendered per frame.
- Game logic and collisions are handled in the `loop()`.
- After game over, return to menu or restart the game.

## 🔧 Pin Configuration

| Pin        | Function     |
|------------|--------------|
| A0         | Button Up    |
| A1         | Button Down  |
| A2         | Button Left  |
| A3         | Button Right |
| A4/A5      | I2C OLED     |
| D2         | OK Button    |
| D3         | Buzzer       |

> You can configure pins in the source code to match your setup.

## 📷 Screenshots

![Startup Screen](images/startup.png)  
![Menu](images/menu.png)  
![Dino Game](images/dino.png)

## 🧪 Future Improvements

- Add more games
- Save multiple high scores per game
- Add animations/transitions between screens
- Low power sleep mode

## 💡 Inspiration

Inspired by the original Game Boy and Chrome Dino game, this project merges nostalgia with embedded development.

## 📁 File Structure


        
