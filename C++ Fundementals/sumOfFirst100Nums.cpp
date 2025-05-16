#include<iostream>
using namespace std;

int sum=0, i=1;

int main()
{
    while (i<=100)
    {
        sum = sum + i;
        i = i+1;
    }
    cout << sum;
    
}