#include <iostream>
using namespace std;
#include <list>
#include <cmath>
// #include "Timer.h"
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    list<int> desiredSizes, appartmentsSizes;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        desiredSizes.emplace_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        appartmentsSizes.emplace_back(x);
    }
    // Timer t;
    desiredSizes.sort();
    appartmentsSizes.sort();
    cout <<'\n';
    int count = 0;
    for (auto i = desiredSizes.begin(), j = appartmentsSizes.begin(); i != desiredSizes.end();)
    {
        if (abs(*i - *j) <= k) {
            count++;
            j++;
            i++;
        }
        else if (*j < (*i - k))
            j++;
        else if (*j > (*i + k))
            i++;
    }
    cout << count;
}