#include <iostream>
using namespace std;

class student
{
private:
    int id;
    string name;
    int level;
    double GPA;
    string address;

public:
    student(): id(1), name(""), level(0), GPA(0), address("")
    {}
    student(int i, string n, int l, double gpa, string ad) {
        id = 1; name = n; level = l; GPA = gpa; address = ad;
    }
    void setData(int i, string n, int l, double gpa, string ad) {
        id = 1; name = n; level = l; GPA = gpa; address = ad;
    }
    double getGPA() {
        return GPA;
    }
    void displayData() {
        cout <<  "the id is: " << id << endl<< "the name is: " << name << endl<< "the level is: " << level << endl<< "the GPA is: " << GPA << endl<< "the address is: " << address << endl;
    }
};

int main()
{
    // student s1;
    // student* s1ptr=&s1;
    // s1ptr -> displayData();

    student* sptr = new student(10," string n",20, 3.02, "string ad");
    sptr -> displayData();




    return 0;
}
