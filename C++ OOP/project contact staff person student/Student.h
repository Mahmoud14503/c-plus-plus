#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Project.h"
#include "Person.h"
#include "staff.h"
using namespace std;

class Student : public Person
{
    private:
        string program;
        Project project;
        Staff advisor;

    public:
        Student() {}
        void setProgram(string prog)
        {
            program = prog;
        }
        void setProject(Project proj)
        {
            project = proj;
        }
        void setAdvisor(Staff adv)
        {
            advisor = adv;
        }
        string getProjectTitle()
        {
            return project.getTitle();
        }
        string getProgram()
        {
            return program;
        }
        string getProjectArea()
        {
            return project.getArea();
        }
        string getAdvisorName()
        {
            return advisor.getName();
        }
        string getAdvisorPosition()
        {
            return advisor.getPosition();
        }
};

#endif