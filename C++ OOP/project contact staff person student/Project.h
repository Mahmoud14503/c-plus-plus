#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
using namespace std;

class Project
{
private:
    string title;
    string area;

public:
    Project() {}
    void setTitle(string title)
    {
        this->title = title;
    }
    void setArea(string area)
    {
        this->area = area;
    }
    string getTitle()
    {
        return title;
    }
    string getArea()
    {
        return area;
    }
};

#endif