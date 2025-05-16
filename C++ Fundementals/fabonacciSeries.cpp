#include <iostream>
using namespace std;


int main()
{
    int x, x1, x2, x3;
    x1 = 0;
    x2 = 1;
    cout << x1;
    cout << " , ";
    cout << x2;

    x=0;
    while (x<9)
    {
        cout << " , ";
        x3 = x2 + x1;
        cout << x3;
        x1=x2;
        x2=x3;
        x++;
    }
    



}
