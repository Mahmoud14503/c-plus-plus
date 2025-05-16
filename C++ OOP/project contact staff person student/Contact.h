#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
using namespace std;

class Contact
{
private:
    string phone;
    string email;

public:
    Contact() {}
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    string getPhone()
    {
        return phone;
    }
    string getEmail()
    {
        return email;
    }
};

#endif