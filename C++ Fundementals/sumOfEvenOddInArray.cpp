#include<iostream>
using namespace std;

int main ()
{
    cout << "Enter 7 numbers: " << "\n";
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int sEven = 0;
    int sOdd = 0;
    int Arr[7];
    
        for (int i = 0; i < 7; i++)
        {
            if (arr[i]%2==0)
            {
                sEven+=arr[i];
            }
            else
                sOdd+=arr[i];
        }

    cout << "The sum of even numbers is: " << sEven << endl;
    cout << "The sum of odd numbers is: " << sOdd;

}