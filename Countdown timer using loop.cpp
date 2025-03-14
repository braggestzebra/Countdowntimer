#include <iostream>
#include <ctime> // For time functions

using namespace std;

void countdownTimer(int seconds) {
    time_t start_time = time(nullptr); // Get the current time
    time_t end_time = start_time + seconds; // Calculate the end time

    while (time(nullptr) < end_time) {
        int remaining = end_time - time(nullptr); // Calculate remaining time
        cout << "Time remaining: " << remaining << " seconds" << endl;
       
        // Busy-wait loop to wait for 1 second
        time_t wait_until = time(nullptr) + 1;
        while (time(nullptr) < wait_until);

        // Clear the line for next output
        cout << "\r";
    }
    cout << "Time's up!" << endl;
}

int main() {
    int time;
    cout << "Enter the countdown time in seconds: ";
    cin >> time;

    countdownTimer(time);

    return 0;
}
