#include<iostream>
using namespace std;

int x, y, z;
int main()
{
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;

    if (x>z && y>x)
    {
        cout << x;
    }
    else if (x<z && y<x)
    {
        cout << x;
    }
    else if (y>z && x>y)
    {
        cout << y;
    }
    else if (y<z && x<y)
    {
        cout << y;
    }
    else
        cout << z;  
}