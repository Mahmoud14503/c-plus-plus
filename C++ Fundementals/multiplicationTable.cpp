#include<iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter any number: ";
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        cout << x << "*" << i << "=" << x*i << "\n";
    }
        cout << __FILE__ << endl;

}