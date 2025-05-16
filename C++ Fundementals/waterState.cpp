#include <iostream>
using namespace std;


int main()
{
    cout << "Enter water degree: ";
    float x;
    cin >> x;

    x <= 0 ? cout << "Solid" : x>0 && x<100 ? cout << "Liquid" : cout << "Gas";

    return 0;
}
