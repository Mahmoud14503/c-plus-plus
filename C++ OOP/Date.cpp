#include <iostream>
using namespace std;

class Date{
    private: 
        int month, day, year;
    public:
        Date(int m, int d, int y){
            month = m;
            day = d;
            year = y;
        }

        void setMonth(int m) {
            if (m >= 1 && m <= 12)
                month = m;
            else {
                cout << "Invalid month input.\n";
            }
        }

        void setDay(int d) {
            if (d >= 1 && d <= 31)
                day = d;
            else {
                cout << "Invalid day input.\n";
            }
        }

        void setYear(int y) {
            year = y;
        }

        void printDate1(){
            cout << month << "/" << day << "/" << year << endl;
        }

        void printDate2(){
            string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July",
                                        "August", "September", "October", "November", "December"};
            cout << monthNames[month - 1] << " " << day << ", " << year << endl;
        }

        void printDate3(){
            string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July",
                                        "August", "September", "October", "November", "December"};
            cout << day << " " << monthNames[month - 1] << " " << year << endl;
        }
};

int main() {
    Date date(8, 25, 2012);

    cout << "Date in the form (mm/dd/yyyy): ";
    date.printDate1();

    cout << "Date in the form (month dd, yyyy): ";
    date.printDate2();

    cout << "Date in the form (dd month yyyy): ";
    date.printDate3();

    return 0;
}