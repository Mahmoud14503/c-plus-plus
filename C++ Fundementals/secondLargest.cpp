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
    int p;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]>max){
            max = arr[i];
            p = i;
        }
    }
    int min=arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]<min){
            min = arr[i];
        }
    }
    arr[p] = min; 
    int second_max=arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]>second_max){
            second_max = arr[i];
        }
    }
    cout << "The second largest numbers is: " << second_max;
}