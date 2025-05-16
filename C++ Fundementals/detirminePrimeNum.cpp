#include<iostream>
using namespace std;

int N;
int main()
{
    cout << "Enter any number: ";
    cin >> N;
    if (N==1)
        cout << "\""<< N << "\"" << " is not a prime number";
    else if (N%2==0 || N%3==0)
    {
        cout << "\""<< N << "\"" << " is not a prime number";
    }
    else
        cout << "\""<< N << "\"" << " is a prime number";
    
}