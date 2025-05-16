#include <iostream>
using namespace std;


int main()
{
    
    int x;
    int unit;
    int tens;
    int sum;
    cout << "Enter x: ";
    cin >> x;
    // int r;
    // r = x/10 + x%10 * 10;
    // cout << r;
    unit = x%10;
    tens = x/10;
    unit = unit * 10;
    sum = unit + tens;
    cout << sum;

}
