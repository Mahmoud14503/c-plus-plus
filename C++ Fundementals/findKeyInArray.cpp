#include<iostream>
using namespace std;

bool checkKey( int k, int A[], int size ){

    for (int i = 0; i < size; i++)
    {
        if ( A[i]==k )
        {
            return true;
        }
        
    }
    return false;

}



int main()
{

    cout << "================================== " << endl;
    cout << "MAHMOUD MOHAMMED MAHMOUD ELTANTAWY " << endl;
    cout << "================================== " << endl;
    cout << "Enter 7 numbers: \n";
    int SIZE = 7; 
    int arr[SIZE];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    bool r = checkKey(5, arr, SIZE);
    cout << "The key \"5\" existance result is " << r;





}