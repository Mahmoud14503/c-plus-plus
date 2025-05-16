#include<iostream>
using namespace std;

int main()
{
    cout << "Enter 5 numbers: " << "\n";
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>> arr[i];
    }
    int Arr[5];
    for (int i = 1; i < 4; i++)
    {
        Arr[0]=arr[0];
        Arr[i]=arr[i+1]*arr[i-1];
        Arr[4]=arr[4];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " ";
    }
}