#include <iostream>
#include <string>
#include "Timer.h"
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

class Teacher : public Person
{
private:
    string *courses;
    int numCourses;

public:
    Teacher() {}
    Teacher(int id, string name, string address, int numCourses, string *courses)
    {
        this->id = id;
        this->name = name;
        this->address = address;
        this->numCourses = numCourses;
        this->courses = new string[numCourses];
        for (int i = 0; i < numCourses; ++i)
        {
            this->courses[i] = courses[i];
        }
    }

    bool addCourse(string course)
    {
        string *temp = new string[numCourses + 1];
        for (int i = 0; i < numCourses; ++i)
        {
            temp[i] = courses[i];
        }
        temp[numCourses] = course;
        delete[] courses;
        courses = temp;
        numCourses++;
        return true;
    }

    bool removeCourse(string course)
    {
        for (int i = 0; i < numCourses; ++i)
        {
            if (courses[i] == course)
            {
                for (int j = i; j < numCourses - 1; ++j)
                {
                    courses[j] = courses[j + 1];
                }
                numCourses--;
                return true;
            }
        }
        return false;
    }

    ~Teacher() {}

    friend void print(Teacher teacher);
};

void print(Teacher teacher)
{
    cout << "Teacher ID: " << teacher.getId() << endl;
    cout << "Name: " << teacher.getName() << endl;
    cout << "Address: " << teacher.getAddress() << endl;
    cout << "Courses: ";
    for (int i = 0; i < teacher.numCourses; ++i)
    {
        cout << teacher.courses[i] << " ";
    }
    cout << endl;
}

class Student : public Person
{
private:
    int numCourses;
    string *courses;
    double *grades;

public:
    Student() {}
    Student(int id, string name, string address, int numCourses, string *courses, double *grades)
    {
        this->id = id;
        this->name = name;
        this->address = address;
        this->numCourses = numCourses;
        this->courses = new string[numCourses];
        this->grades = new double[numCourses];
        for (int i = 0; i < numCourses; ++i)
        {
            this->courses[i] = courses[i];
            this->grades[i] = grades[i];
        }
    }

    void addCourseGrade(string course, double grade)
    {
        string *tempCourses = new string[numCourses + 1];
        double *tempGrades = new double[numCourses + 1];
        for (int i = 0; i < numCourses; ++i)
        {
            tempCourses[i] = courses[i];
            tempGrades[i] = grades[i];
        }
        tempCourses[numCourses] = course;
        tempGrades[numCourses] = grade;
        delete[] courses;
        delete[] grades;
        courses = tempCourses;
        grades = tempGrades;
        numCourses++;
    }

    double getAverageGrades()
    {
        double sum = 0.0;
        for (int i = 0; i < numCourses; ++i)
        {
            sum += grades[i];
        }
        return sum / numCourses;
    }

    void printGrades()
    {
        cout << "Grades for student " << getId() << ", " << getName() << ":" << endl;
        for (int i = 0; i < numCourses; ++i)
        {
            cout << courses[i] << ": " << grades[i] << endl;
        }
    }

    ~Student() {}

    friend void print(Student student);
};

void print(Student student)
{
    cout << "Student ID: " << student.getId() << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Address: " << student.getAddress() << endl;
    cout << "Courses taken: ";
    for (int i = 0; i < student.numCourses; ++i)
    {
        cout << student.courses[i] << " ";
    }
    cout << endl;
    cout << "Average Grade: " << student.getAverageGrades() << endl;
}

int main()
{
    Timer t;
    for (int i = 0; i < 100000000; i++)
    {
        /* code */
    }
    
    string str[2] = {"math", "probability"};
    Teacher teacher(1, "Alnamouly", "10th of Ramadan City", 2, str);
    teacher.addCourse("programming");
    print(teacher);
    cout << "------------------------\n";
    teacher.removeCourse("programming");
    print(teacher);
    cout << "------------------------\n";
    string courses[3] = {"discrete math", "logic", "database"};
    double degrees[3] = {94, 95, 84};
    Student student(1, "Mahmoud", "10th of Ramadan City", 3, courses, degrees);
    student.addCourseGrade("Algorithms", 88);
    print(student);

    return 0;
}
