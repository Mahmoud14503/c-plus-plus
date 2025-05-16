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
    int j = 0;
    int Arr[7];
        for (int i = 0; i < 7; i++)
        {
            if (arr[i]%2==0)
            {
                Arr[j]=arr[i];
                j++;
            }
        }   
        for (int p = 0; p < 7; p++)
        {
            if (arr[p]%2!=0)
            {
                Arr[j]=arr[p];
                j++;
            }
        }
    cout << "The separated array is {";
    int i = 0;
        do
        {
        cout << Arr[i];
        cout << " , ";
        i++;
        } while (i<6);
    cout << Arr[6];
    cout << "}";
 
}