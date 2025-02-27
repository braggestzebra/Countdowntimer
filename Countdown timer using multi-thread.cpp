#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void countdownTimer(int seconds) {
    while (seconds > 0) {
        cout << "Time remaining: " << seconds << " seconds" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        --seconds;
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
