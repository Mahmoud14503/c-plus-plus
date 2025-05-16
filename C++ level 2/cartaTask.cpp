#include <iostream>
using namespace std;
#include <conio.h>

class tollBooth {
private:
    unsigned totalCars;
    double moneyCollected;
public:
    tollBooth(): totalCars(0), moneyCollected(0)
    {}
    void payingCars() {
        totalCars++;
        moneyCollected += 0.5;
    }
    void noPayCar() {
        totalCars++;
        // moneyCollected += 0;
    }
    void display() const {
        cout << "\nThe total money collected is: " << moneyCollected;
        cout << "\nThe total cars passed is: " <<  totalCars;
    }

};


int main () {
    cout << "Press 1 for a paying-car or 0 for a nonpaying-car: \n" ;
    char key;
    tollBooth obj;

    do {
        key = getch();
        switch (key)
        {
        case '1': // '1' ASCII value is 49 so it has to be in single qouts
            obj.payingCars();
            // cout << "1";
            break;
        case '0': // '0' ASCII value is 48 so it has to be in single qouts
            // cout << "0";
            obj.noPayCar();
            break;
        case 27:
            break;
        default:
            cout << "You have entered a wrong key, please try again";
        }
    } while(key != 27);

    obj.display();
    return 0;
}