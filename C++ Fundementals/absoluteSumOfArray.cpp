#include<iostream>
using namespace std;

int main()
{
    cout << "Enter 5 numbers: " << endl;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int s=0;
    for (int i = 0; i < 5; i++)
    {
        s += abs(arr[i]);
    }
    cout << "The absolute sum is: " << s;
    
    
}