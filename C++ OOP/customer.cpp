#include <iostream>
using namespace std;

class Cus_tomer
{
private:
    string name;
    string address;
    string phone;

public:
    Cus_tomer() : name(""), address(""), phone("") {}

    void setName(string n)
    {
        name = n;
    }

    void setAddress(string a)
    {
        address = a;
    }

    void setPhone(string p)
    {
        phone = p;
    }

    string getName()
    {
        return name;
    }

    string getAddress()
    {
        return address;
    }

    string getPhone()
    {
        return phone;
    }
};

int main()
{
    Cus_tomer s;

    cout << s.getName() << endl;
    cout << s.getAddress() << endl;
    cout << s.getPhone() << endl;

    return 0;
}
