#include<iostream>
using namespace std;

int main()
{
    int n , x, y, z, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        if ((x && y == 1) || (x && z == 1) || (z && y == 1))
        {
            count++;
        }
        
    }
    cout << count;

}