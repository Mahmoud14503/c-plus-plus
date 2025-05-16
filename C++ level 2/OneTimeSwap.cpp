#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    map<char, int> m;
    for (auto c : input)
        m[c]++;
    
    // for (auto mm : m)
    //     cout << mm.first << '-' << mm.second << '\n';
    
    long long sum = 0;
    for (long unsigned int i = 1; i < input.size(); i++)
    {
        sum += i;
    }

    long long sumMap = 0;
    for (auto mm : m)
        sumMap += mm.second- 1;

    sum -= sumMap;
    if (m.size() == 1)
        cout << 1;
    else
        cout << sum;
    // set<char> s;
    // for (int i = 0; i < input.size(); i++)
    // {
    //     s.insert(input[i]);
    // }
    // if (s.size() == 1)
    //     cout << 1;
    // else
    //     cout << sum;
    
}