#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;
public:
    Employee() : id(1), name(""), salary(1) {}

    Employee(double s){
        salary = s;
    }

    Employee(int I, string n, double s){
        id = I;
        name = n;
        salary = s;
    }

    void setId(int I){
        id = I;
    }
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    void setName(string n){
        name = n;
    }
    double getSalary(){
        return salary;
    }
    void setSalary(double s){
        salary = s;
    }
    double computeAnnualsalary(){
        return salary * 12;
    }
    double computeCommission(){
        return salary - (salary * 0.10);    
    }
};

int main(){
    Employee s(1, "Ali ", 1500);
    Employee s2(2, "Mona ", 2000);

    cout  << "id " << s.getId() << " name=" << s.getName() << " salary=" << s.getSalary() << endl;
    cout  << "id " << s2.getId() << " name=" << s2.getName() << " salary=" << s2.getSalary() << endl;

    cout << s.computeCommission();
    return 0;
}