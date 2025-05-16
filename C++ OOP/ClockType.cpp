#include <iostream>
using namespace std;

class clockType {
private:
    int hr;
    int min;
    int sec;

public:
    clockType(int h = 0, int m = 0, int s = 0) : hr(h), min(m), sec(s) {}

    void setTime(int h, int m, int s) {
        hr = h;
        min = m;
        sec = s;
    }

    void getTime(int& h, int& m, int& s) const {
        h = hr;
        m = min;
        s = sec;
    }

    void printTime() const {
        cout << hr << ":" << min << ":" << sec;
    }

    int incrementSeconds() {
        sec++;
        if (sec >= 60) {
            sec = 0;
            return incrementMinutes();
        }
        return 0;
    }

    int incrementMinutes() {
        min++;
        if (min >= 60) {
            min = 0;
            return incrementHours();
        }
        return 0;
    }

    int incrementHours() {
        hr++;
        if (hr >= 24) {
            hr = 0;
        }
        return 0;
    }

    bool equalTime(const clockType& other) const {
        return (hr == other.hr && min == other.min && sec == other.sec);
    }
};

int main() {
    clockType myClock;
    myClock.setTime(8, 12, 30);

    cout << "Current Time: ";
    myClock.printTime();
    cout << endl;

    myClock.incrementSeconds();
    cout << "After incrementing seconds: ";
    myClock.printTime();
    cout << endl;

    myClock.incrementMinutes();
    cout << "After incrementing minutes: ";
    myClock.printTime();
    cout << endl;

    myClock.incrementHours();
    cout << "After incrementing hours: ";
    myClock.printTime();
    cout << endl;

    return 0;
}
