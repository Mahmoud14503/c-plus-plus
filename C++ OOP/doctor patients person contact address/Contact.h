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
    Contact(string phone, string email)
    {
        this->phone = phone;
        this->email = email;
    }

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
    void print()
    {
        cout << "Phone: " << phone << ", Email: " << email << endl;
    }
};

#endif