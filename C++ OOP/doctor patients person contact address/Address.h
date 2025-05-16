#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;

class Address
{
private:
    string country;
    string state;
    string city;

public:
    Address(string country, string state, string city)
    {
        this->country = country;
        this->state = state;
        this->city = city;
    }
    /*------------------------*/
    void set(string country, string state, string city)
    {
        this->country = country;
        this->state = state;
        this->city = city;
    }
    void print()
    {
        cout << "Country: " << country << ", State: " << state << ", City: " << city << endl;
    }
};

#endif