#include <iostream>
using namespace std;

class time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    time(): hours(0), minutes(0), seconds(0)
    {}
    time(int HOURS, int MINUTES, int SECONDS): hours(HOURS), minutes(MINUTES), seconds(SECONDS)
    {}
    int getHours() {
        return hours;
    } 
    int getMinutes() {
        return minutes;
    }
    int getSeconds() {
        return seconds;
    }
    void setHours(int x) {
        hours = x;
    }
    void setMinutes(int x) {
        minutes = x;
    }
    void setSeconds(int x) {
        seconds = x;
    }
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    time addObjects(time x, time y) {
        time z;
        z.setHours(x.getHours() + y.getHours());
        z.setMinutes(x.getMinutes() + y.getMinutes());
        z.setSeconds(x.getSeconds() + y.getSeconds());
        return z;
    }
};

int main() {
    time obj1(1, 20, 30), obj2(1, 20, 30), obj3;
    obj3 = obj3.addObjects(obj1, obj2);
    obj3.display();
    return 0;
}