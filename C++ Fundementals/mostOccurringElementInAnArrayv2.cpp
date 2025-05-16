#include<iostream>
using namespace std;

int main()
{
    cout << "Enter 5 numbers: " << "\n";
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int most=0;
    int m=0;
    int u=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                m++;
            }
            
        }
        if(m>=most)
        {
        most = m;
        u=arr[i];
        }
        m=0;
        
    }
    cout << "The most occurring element is: " << u;
}