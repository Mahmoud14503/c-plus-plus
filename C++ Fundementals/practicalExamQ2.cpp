#include<iostream>
using namespace std;


int main()
{
    cout << "=========================================== \n";
    cout << "MAHMOUD MOHAMMED MAHMOUD ELTANTAWY Sec (20) \n";
    cout << "=========================================== \n";


    cout << "Enter a sequence of numbers separatly until 0: " << endl;
    int n, sum = 0;
    for ( ; n != 0; )
    {
        cin >> n;
        sum += n;
    }

    cout << "The sum of the sequence is: " << sum;
    
}