#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> m;
string str;
cin >> str;
for (char c : str)
    m[c]++;
for (auto mm : m)
    if (mm.second % 2)
         {cout << "No";
         return 0;}
cout << "Yes";
return 0;

}