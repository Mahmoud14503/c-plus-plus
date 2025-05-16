#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; }
    void setSecond(int s) { second = s; }
    
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
    void print() const {
        cout << hour << ":" << minute << ":" << second << endl;
    }

    void nextSecond() {
        ++second;
        if (second >= 60) {
            second = 00;
            ++minute;
            if (minute >= 60) {
                minute = 00;
                ++hour;
                if (hour >= 24) {
                    hour = 00;
                }
            }
        }
    }
};

int main() {
    Time t(23, 40, 59);
    t.print();  
    t.nextSecond();
    t.print();  
    return 0;
}
