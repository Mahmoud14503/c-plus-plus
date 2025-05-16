#include<iostream>
using namespace std;

int main()
{
    cout << "=========================================== \n";
    cout << "MAHMOUD MOHAMMED MAHMOUD ELTANTAWY Sec (20) \n";
    cout << "=========================================== \n";

    cout << "Enter 7 numbers: \n";
    long long a[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }


    long long temp = 0;

for ( int j = 0; j < 7; j++)
{
    for (int i = 0; i < 7; i++)
    {
        if (a[i] > a[i+1])
        {
            temp = a[i+1];
            a[i+1] = a[i];
            a[i] = temp;
        }
        
    }
}
    




    cout << "The array in ascending order is: ";

    cout << "{";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << ", ";
    }
        cout << a[6] << "} ";

    
}