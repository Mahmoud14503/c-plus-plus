#include<iostream>
using namespace std;

int main()
{
    cout << "Enter 4 numbers: " << "\n";
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int max=arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]>max)
            max = arr[i];
    }
    cout << "The largest numbers is: " << max;
    
}