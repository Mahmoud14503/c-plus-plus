#include <iostream>
using namespace std;


int main()
{
    long long x1, x2, x3;
    x1 = 0;
    x2 = 1;
    cout << x1;
    cout << " , ";
    cout << x2;

    for (int i = 0; i <= 48; i++)
    {
        cout << " , ";
        x3=x1+x2;
        cout << x3;
        x1=x2;
        x2=x3;
    }
    cout << __LINE__ << endl;
}    