#include<iostream>
using namespace std;

int main()
{
    cout << "Enter the desired number: ";
    int x;
    cin >> x;
    int arr[7];
    cout << "Enter 7 numbers: \n";

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            
        if (arr[i]+arr[j]==x)
        {
            cout << arr[i] << " " << arr[j] << "\n";
        }
        }
        
        
    }
    
    

}