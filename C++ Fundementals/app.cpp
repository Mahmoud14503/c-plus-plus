#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "How old are you?\n";
    cin >> num;
    cout << "your age is " << num << " years\n";
    cout << "your age is " << num * 12 << " months\n";
    // cout << "your age is " << num * 12 * 30 * 24 << " hours\n";
    
    return 0;
}