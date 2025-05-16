// #include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int size;
    cin >> size;
    set<int> s;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
    // for (auto ele : s)
    //     cout << '\n' << ele << ' ';
}