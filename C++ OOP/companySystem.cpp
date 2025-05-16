#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string employeeName;
    int employeeNumber;
    string hireDate;

public:
    Employee(string name, int number, string date) {
        employeeName = name;
        employeeNumber = number;
        hireDate = date;
    }

    string getEmployeeName() {
        return employeeName;
    }

    void setEmployeeName(string name) {
        employeeName = name;
    }

    int getEmployeeNumber() {
        return employeeNumber;
    }

    void setEmployeeNumber(int number) {
        employeeNumber = number;
    }

    string getHireDate() {
        return hireDate;
    }

    void setHireDate(string date) {
        hireDate = date;
    }
};

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    ProductionWorker(string name, int number, string date, int shift, double payRate)
        : Employee(name, number, date), shift(shift), hourlyPayRate(payRate) {}

    int getShift() {
        return shift;
    }

    void setShift(int s) {
        shift = s;
    }

    double getHourlyPayRate() {
        return hourlyPayRate;
    }

    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }
};

int main() {
    ProductionWorker s("messi", 12345, "2024-05-10", 1, 15.50);

    cout << "Employee Name: " << s.getEmployeeName() << endl;
    cout << "Employee Number: " << s.getEmployeeNumber() << endl;
    cout << "Hire Date: " << s.getHireDate() << endl;
    cout << "Shift: " << s.getShift() << endl;
    cout << "Hourly Pay Rate: $" << s.getHourlyPayRate() << endl;

    return 0;
}
