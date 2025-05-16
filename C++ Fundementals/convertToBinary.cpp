#include<iostream>
using namespace std;

int main()
{
    cout << "Enter any number between 1 and 255: ";
    int x;
    cin >> x;
    int arr[8];
    for (int i = 7; i >= 0; i--)
    {
        arr[i]=x%2;
        x=x/2;
        
    }
    for (int j = 0; j <= 7; j++)
    {
        cout << arr[j];
    }
        

}
