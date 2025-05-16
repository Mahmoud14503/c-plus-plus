#include<iostream>
using namespace std;

int sumArray( int a[], int size ){

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    return sum;    

}

int main()
{
    cout << "=========================================== \n";
    cout << "MAHMOUD MOHAMMED MAHMOUD ELTANTAWY Sec (20) \n";
    cout << "=========================================== \n";


    cout << "Enter 7 numbers: \n";
    const int SIZE = 7;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum is: " << sumArray(arr, SIZE);

}