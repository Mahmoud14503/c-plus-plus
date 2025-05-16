#include<iostream>
using namespace std;
#include "Timer.h"

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void coutArray(int* arr, int size) {
    cout << "[ ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << arr[size - 1];

    cout << " ]";
}

int main()
{
    Timer t;
    int size1 = 4 , size2 = 3;
    int array1[size1] = {1, 2, 3, 4};
    int array2[size2] = {3, 6, 7};
    int size1_BeforeLoop = size1;

    for (int i = size1, j = 0; i < size1_BeforeLoop + size2; i++, j++)
    {
        size1++;
        array1[i] = array2[j];
    }

    cout << "The array before shifting: "; coutArray(array1, size1);
    
    for (int i = 0; i < size1; i++)
    {
        for (int j = i + 1; j < size1; j++)
        {
            if (array1[i] == array1[j])
            {
                for (int k = i; k < size1; k++)
                {
                    array1[k] = array1[k + 1];
                }
                size1--;
            }
        }
        
    }
    
    cout << "\nThe array after shifting and deleting: "; coutArray(array1, size1);
}