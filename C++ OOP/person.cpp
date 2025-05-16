#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    string name;
    string address;

public:
    Person() {}
    Person(int id, string name, string address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getAddress()
    {
        return address;
    }
    ~Person() {}
};

class Student : public Person
{
private:
    string *courses;
    double *degrees;
    int courseCount;

public:
    Student() {}
    Student(int id, string name, string address, string *courses, double *degrees, int courseCount)
    {
        this->id = id;
        this->name = name;
        this->address = address;
        this->courses = courses;
        this->degrees = degrees;
        this->courseCount = courseCount;
    }
    double getdegrees(int index)
    {
        return degrees[index];
    }
    void setdegrees(double d, int index)
    {
        degrees[index] = d;
    }
    ~Student() {}
    friend void print(Student student);
};

void print(Student student)
{
    cout << "Student ID: " << student.getId() << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "Courses:" << endl;
    for (int i = 0; i < student.courseCount; ++i)
    {
        cout << "  " << student.courses[i] << " - degrees: " << student.degrees[i] << endl;
    }
    cout << endl;
}

class Employee : public Person
{
private:
    double salary;
    string *children;
    int numChildren;

public:
    Employee() {}
    Employee(int id, string name, string address, double salary, string *children, int numChildren)
    {
        this->id = id;
        this->name = name;
        this->address = address;
        this->salary = salary;
        this->children = children;
        this->numChildren = numChildren;
    }
    string getChild(int index)
    {
        return children[index];
    }
    void setChild(string child, int index)
    {
        children[index] = child;
    }
    virtual ~Employee() {}
    friend void print(Employee employee);
};

void print(Employee employee)
{
    cout << "Employee ID: " << employee.getId() << endl;
    cout << "Name: " << employee.getName() << endl;
    cout << "Address: " << employee.getAddress() << endl;
    cout << "Children:";
    for (int i = 0; i < employee.numChildren; ++i)
    {
        cout << " - " << employee.children[i];
    }
}

int main()
{
    string studentCourses[3] = {"opp", "descret", "logic"};
    double studentDegrees[3] = {78, 90.0, 95};
    Student student(1, "Mahmoud", "Salhia", studentCourses, studentDegrees, 3);
    print(student);

    string employeeChildren[2] = {"Mohamed", "Ali"};
    Employee employee(1, "Ahmed", "Zagazig", 100000.0, employeeChildren, 2);
    print(employee);

    return 0;
}
