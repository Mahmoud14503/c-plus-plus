#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include "Person.h"
using namespace std;

class Staff : public Person
{
private:
    string position;

public:
    Staff() {}
    void setPosition(string post)
    {
        position = post;
    }
    string getPosition()
    {
        return position;
    }
};

#endif