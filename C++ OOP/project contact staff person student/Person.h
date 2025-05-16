#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "Contact.h"
using namespace std;

class Person
{
private:
    string name;
    string id;
    Contact contact;

public:
    Person() {}
    void setName(string name)
    {
        this->name = name;
    }
    void setID(string id)
    {
        this->id = id;
    }
    void setPhone(string phone)
    {
        contact.setPhone(phone);
    }
    void setEmail(string email)
    {
        contact.setEmail(email);
    }
    string getName()
    {
        return name;
    }
    string getID()
    {
        return id;
    }
    string getPhone()
    {
        return contact.getPhone();
    }
    string getEmail()
    {
        return contact.getEmail();
    }
};

#endif