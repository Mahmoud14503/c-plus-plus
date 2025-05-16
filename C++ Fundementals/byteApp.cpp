#include<iostream>
using namespace std;

int num;

int main()
{
    cout << "Please enter the number in kilobytes:\n";
    cin >> num;
    int numInBits = num * 1024 * 8;
    cout << "The number of bytes in \"" << num << "\" is " << num * 1024 << "\n";
    cout << "The number of bits in \"" << num << "\" is " << numInBits << "\n";
    return 0;

}