#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    // Function to display time
    void display() const {
        cout << hours << " hour(s) and " << minutes << " minute(s)";
    }

    // Friend function to add two Time objects
    friend Time addTimes(const Time &t1, const Time &t2);
};

// Function to add two Time objects
Time addTimes(const Time &t1, const Time &t2) {
    int totalMinutes = t1.minutes + t2.minutes;
    int totalHours = t1.hours + t2.hours + totalMinutes / 60;
    totalMinutes = totalMinutes % 60;

    return Time(totalHours, totalMinutes);
}

int main() {
    Time time1(2, 45);  // 2 hours 45 minutes
    Time time2(1, 30);  // 1 hour 30 minutes

    Time sum = addTimes(time1, time2);

    cout << "Time 1: ";
    time1.display();
    cout << "\nTime 2: ";
    time2.display();
    cout << "\nSum: ";
    sum.display();
    cout << endl;

    return 0;
}