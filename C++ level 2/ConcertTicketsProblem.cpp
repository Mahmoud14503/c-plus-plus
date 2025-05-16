#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> t;
    int cust[m];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        t.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> cust[i];
    }
    for (int i = 0; i < m; i++)
    {
        int var = -1;
        int index = -1;
        for (int j = 0; j < n; j++)
        {
            if (cust[i] >= t[j]) {
                if (t[j] >= var) {
                    var = t[j];
                    index = j;
                }
            }
        }
        if (index != -1)
            t.erase(t.begin() + index);
        cout << var << '\n';
    }
}