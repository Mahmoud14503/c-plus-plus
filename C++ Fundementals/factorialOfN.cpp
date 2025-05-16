#include<iostream>
using namespace std;

double N;
int i=1;
double result=1;
int main()
{
    cout<<"Enter any number: ";
    cin >> N;
    while (i<=N)
    {
        result= result * i;
        i = i+1;
    }
    cout << result;
    
}