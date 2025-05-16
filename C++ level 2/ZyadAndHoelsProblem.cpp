#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x, y;
    int cost = 0;
    cin >> n >> k >> x >> y;
    for (int i = 1; i <= n; i++)
    {
        if ( i <= k)
            cost += x;
        else
            cost += y;
    }
    cout << cost;
}