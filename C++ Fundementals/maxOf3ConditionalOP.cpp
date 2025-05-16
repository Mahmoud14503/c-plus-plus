#include <iostream>
using namespace std;

double x,y,z;

int main()
{
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;

    x>y && x>z ? cout << x : y>x && y>z ? cout << y : cout << z;

    return 0;
}
