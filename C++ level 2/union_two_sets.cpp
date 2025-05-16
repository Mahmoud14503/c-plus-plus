#include <iostream>
#include "Timer.h"
#include <cmath>
using namespace std;

int sizeA = 4, sizeB = 3;

void read_arrA(int A[], int sizeA)
{
    for (int i = 0; i < sizeA; i++)
    {
        cin >> A[i];
    }
}

void read_arrB(int B[], int sizeB)
{
    for (int i = 0; i < sizeB; i++)
    {
        cin >> B[i];
    }
}

void print_arrA(int A[], int sizeA)
{
    cout << "{";
    for (int i = 0; i < sizeA; i++)
    {
        cout << A[i];
        if (i < sizeA - 1)
            cout << ", ";
    }
    cout << "}";
}

void print_arrB(int B[], int sizeB)
{
    cout << "{";
    for (int i = 0; i < sizeB; i++)
    {
        cout << B[i];
        if (i < sizeB - 1)
            cout << ", ";
    }
    cout << "}";
}

void print_union_arr(int union_arr[], int union_size)
{
    cout << "{";
    for (int i = 0; i < union_size; i++)
    {
        cout << union_arr[i];
        if (i < union_size - 1)
            cout << ", ";
    }
    cout << "}";
}

int main()
{
    int A[sizeA] = {1, 2, 3, 4}, B[sizeB] = {5, 6, 1};
    Timer t1;

    int union_size = sizeA + sizeB;
    int union_arr[union_size];

    for (int i = 0; i < union_size; i++)
    {
        union_arr[i] = A[i];
    }
    for (int j = 0; j < union_size; j++)
    {
        union_arr[sizeA + j] = B[j];
    }

    for (int i = 0; i < union_size; i++)
    {
        for (int j = i + 1; j < union_size; j++)
        {
            if (union_arr[i] == union_arr[j])
            {
                for (int l = j + 1; l < union_size; l++)
                {
                    union_arr[j] = union_arr[l];
                }
            union_size--;
            }
        }
    }

    cout << "\nThe union is : ";
    print_union_arr(union_arr, union_size);

    return 0;
}
