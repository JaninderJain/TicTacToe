# Tic-Tac-Toe Project Readme

## Overview

This C++ project implements a Tic-Tac-Toe game with three different levels of difficulty: Easy (3x3 board), Medium (4x4 board), and Hard (5x5 board). The game allows two players to take turns, with the goal of getting a row, column, or diagonal of their symbol (either 'X' or 'O').

## Features

- Three levels of difficulty:
  - Easy: 3x3 board
  - Medium: 4x4 board
  - Hard: 5x5 board
- Two-player mode.
- Clear instructions and prompts.
- Keeps track of player scores.

## How to Play

1. Clone the repository to your local machine.

```bash
git clone https://github.com/JaninderJain/TicTacToe
```

2. Compile the source code.

```bash
g++ -o tictactoe main.cpp
```

3. Run the game.

```bash
./tictactoe
```

4. Follow the on-screen instructions to choose the level and start playing. Players take turns entering their moves by specifying the row and column where they want to place their symbol.

5. The game will continue until one player wins or the board is full (resulting in a draw).

## Gameplay Instructions

- Player 1 uses 'X,' and Player 2 uses 'O.'
- Players take turns entering their moves in the format "row column." For example, "1 2" places their symbol in the first row and second column.
- To win, a player must form a continuous line (horizontally, vertically, or diagonally) of their symbols.
- The game will announce the winner or declare a draw when appropriate.

## Sample Gameplay

Here's an example of how the game might look:

```
Welcome to Tic-Tac-Toe!

Select the difficulty level:
1. Easy (3x3)
2. Medium (4x4)
3. Hard (5x5)
Enter your choice: 1

Player 1 (X) - Player 2 (O)

  1 2 3
1 - - -
2 - - -
3 - - -

Player 1's turn. Enter your move: 2 2

Player 1 (X) - Player 2 (O)

  1 2 3
1 - - -
2 - X -
3 - - -

Player 2's turn. Enter your move: 1 1

Player 1 (X) - Player 2 (O)

  1 2 3
1 O - -
2 - X -
3 - - -

...

Player 1 wins!

Thanks for playing!
```

## License

This project is licensed under the [MIT License](LICENSE).

## Credits

This project was created by Janinder Jain. Feel free to contribute or report issues on GitHub.

Enjoy playing Tic-Tac-Toe at different difficulty levels!# TicTacToe
