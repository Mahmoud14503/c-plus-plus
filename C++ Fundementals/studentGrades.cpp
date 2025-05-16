#include <iostream>
using namespace std;


int main()
{
    cout << "Enter your mark: ";
    float x;
    cin >> x;
    if (x<50 && x>=0)
    {
        cout << "Failed";
    }
    else if (x>=50 && x<65)
    {
        cout << "Accepted";
    }
    else if (x>=65 && x<75)
    {
        cout << "Good";
    }
    else if (x>=75 && x<85)
    {
        cout << "V.Good";
    }
    else if (x>=85 && x<=100)
    {
        cout << "Excellent";
    }
    else
    cout << "error";

    return 0;
}
