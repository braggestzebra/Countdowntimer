# Countdown Timer using std::thread

This C++ program implements a simple countdown timer using the `std::thread` and `std::chrono` libraries.

## Features

- User can input the countdown duration in seconds
- Displays remaining time every second
- Uses std::thread to handle the timing mechanism

## Dependencies

- C++11 or later
- iostream
- thread
- chrono

## How to use

1. Compile the program using a C++11 compatible compiler.
2. Run the executable.
3. Enter the desired countdown time in seconds when prompted.
4. The program will display the remaining time each second until the countdown ends.

## Implementation Details

The program uses `std::this_thread::sleep_for()` to pause execution between each second of the countdown. This method provides a more accurate timing mechanism compared to busy-waiting loops.