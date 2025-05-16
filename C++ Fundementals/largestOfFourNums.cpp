#include<iostream>
using namespace std;

int x, y, z, g;
int main()
{
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;
    cout << "Enter the fourth number: ";
    cin >> g;

    if (x>z && x>y && x>g)
    {
        cout << x;
    }
    else if (y>z && y>x && y>g)
    {
        cout << y;
    }
    else if (z>x && z>y && z>g)
    {
        cout << z;
    }    
    else
        cout << g;
}