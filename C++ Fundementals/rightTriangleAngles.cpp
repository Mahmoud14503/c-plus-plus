#include<iostream>
using namespace std;

int x, y, z;
int main()
{
    cout << "Enter the first angle: ";
    cin >> x;
    cout << "Enter the second angle: ";
    cin >> y;
    cout << "Enter the third angle: ";
    cin >> z;

    if (x+y+z==180)
    {
        cout << "The triangle is correct";
    }
    else
    cout << "Wrong triangle";
    
}