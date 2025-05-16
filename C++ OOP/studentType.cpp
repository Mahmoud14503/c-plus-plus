#include <iostream>
#include "Timer.h"
using namespace std;

class studentType
{
private:
    int ID, NumCourses;
    string Name, *CoursesNames;
    double *degrees;
    static int Num_Registered_Students;
public:
    studentType() {}
    studentType(int I, string N, int NUM_C, string *C_N, double *d)
    {
        ID = I;
        Name = N;
        NumCourses = NUM_C;
        CoursesNames = C_N;
        degrees = d;
    }
    studentType(studentType &s)
    {
        ID = s.ID;
        NumCourses = s.NumCourses;
        Name = s.Name;
        CoursesNames = new string[NumCourses];
        for (int i = 0; i < NumCourses; i++){
            CoursesNames[i] = s.CoursesNames[i];
        }
        degrees = new double[NumCourses];
        for (int i = 0; i < NumCourses; i++)
            degrees[i] = s.degrees[i];
    }
    ~studentType() {}
    int getID()
    {
        return ID;
    }
    void setID(int I)
    {
        ID = I;
    }
    string getName()
    {
        return Name;
    }
    void setName(string N)
    {
        Name = N;
    }
    void setNumOfCourse(int NUM_C)
    {
        NumCourses  = NUM_C;
    }
    void setDegrees(double *d, int NUM_C) {
        NumCourses = NUM_C;
        degrees = new double[NUM_C];
        for (int i = 0; i < NUM_C; i++) {
            degrees[i] = d[i];
        }
    }
    void setCourses(string *d, int NUM_C) {
        NumCourses = NUM_C;
        CoursesNames = new string[NUM_C];
        for (int i = 0; i < NUM_C; i++) {
            CoursesNames[i] = d[i];
        }
    }
    string getTotalGrade() {
        double sum = 0;
        for (int i = 0; i < NumCourses; i++) {
            sum += degrees[i];
        }

        if (sum > 100 || sum < 0) {
            return "Error";
        } else if (sum > 85) {
            return "Excellent";
        } else if (sum > 75) {
            return "Very good";
        } else if (sum > 65) {
            return "Good";
        } else if (sum > 50) {
            return "Accept";
        } else {
            return "Fail";
        }
    }

    string *getGradeforeachdegreee() {
        string *grades = new string[NumCourses];
        for (int i = 0; i < NumCourses; i++) {
            if (degrees[i] > 100 || degrees[i] < 0) {
                grades[i] = "Error";
            } else if (degrees[i] > 85) {
                grades[i] = "Excellent";
            } else if (degrees[i] > 75) {
                grades[i] = "Very good";
            } else if (degrees[i] > 65) {
                grades[i] = "Good";
            } else if (degrees[i] > 50) {
                grades[i] = "Accept";
            } else {
                grades[i] = "Fail";
            }
        }
        return grades;
    }

    void printData(){
        cout << "\n\nId is: " << ID << "\tName is: " << Name << endl;
        cout << "Courses: ";
        for (int i = 0; i < NumCourses; i++)
        {
            cout << CoursesNames[i] << " ";
        }
        cout << "\nDegrees: ";
        for (int i = 0; i < NumCourses; i++)
        {
            cout << degrees[i] << " ";
        }
        cout << "\nGrades: ";
        string *grades = getGradeforeachdegreee();
        for (int i = 0; i < NumCourses; i++)
        {
            cout << grades[i] << " ";
        }
        cout << "\nTotal grade: " << getTotalGrade();
    }
};

int main()
{
    Timer t;
    int NumOfStudent;
    cout << "Enter the number of students: ";
    cin >> NumOfStudent;
    studentType *ptrArray = new studentType[NumOfStudent];
    int x, numCourses;
    string y;
    for (int i = 0; i < NumOfStudent; i++)
    {
        cout << "Enter the ID: ";
        cin >> x;
        ptrArray[i].setID(x);
        cout << "Enter the Name: ";
        cin >> y;
        ptrArray[i].setName(y);
        cout << "Enter the number of courses for student " << i + 1 << ": ";
        cin >> numCourses;
        ptrArray[i].setNumOfCourse(numCourses);
        double *degrees = new double[numCourses];
        string *courses = new string[numCourses];
        for (int j = 0; j < numCourses; j++)
        {
            cout << "Enter course name for course " << j + 1 << ": ";
            cin >> courses[j];
            cout << "Enter degree for course " << j + 1 << ": ";
            cin >> degrees[j];
        }
        ptrArray[i].setDegrees(degrees, numCourses);
        ptrArray[i].setCourses(courses, numCourses);
    }
    ptrArray->printData();
    return 0;
}