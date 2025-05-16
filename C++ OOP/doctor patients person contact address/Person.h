#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "Contact.h"
#include "Address.h"
using namespace std;

class Person
{
private:
    int id;
    string name;
    Contact *contact;
    Address *address;

public:
    Person()
    {
        id = 0;
        name = "unkown";
        contact = NULL;
        address = NULL;
    }
    Person(int id, string name, Contact *contact, Address *address)
    {
        this->id = id;
        this->name = name;
        this->contact = contact;
        this->address = address;
    }
    virtual void print(){
        cout << "ID: " << id << ", Name: " << name << endl;
        address->print();
        contact->print();
    }
};

#endif