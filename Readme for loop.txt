# Countdown Timer using Loop

This C++ program implements a simple countdown timer using only standard C++ libraries and a busy-wait loop.

## Features

- User can input the countdown duration in seconds
- Displays remaining time every second
- Uses a busy-wait loop for timing

## Dependencies

- C++98 or later
- iostream
- ctime

## How to use

1. Compile the program using any standard C++ compiler.
2. Run the executable.
3. Enter the desired countdown time in seconds when prompted.
4. The program will display the remaining time each second until the countdown ends.

## Implementation Details

The program uses the `time()` function to track elapsed time. A busy-wait loop is used to create a delay between each second of the countdown. This method may be less precise than using dedicated timing libraries but has fewer dependencies.

Note: The busy-wait loop may consume more CPU resources compared to sleep-based implementations.