#include<iostream>
using namespace std;

double N;
double result=1;
int main()
{
    cout<<"Enter any number: ";
    cin >> N;
    for (int i=1; i <= N; i++)
    {
        result=result*i;
    }
    cout << result;
    
}