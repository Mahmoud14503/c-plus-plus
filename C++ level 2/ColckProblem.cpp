#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((c >= max(a,b) || c <= min(a,b)) && !(d >= max(a,b) || d <= min(a,b))) {
            cout << "YES\n"; 
        }
        else if ((d >= max(a,b) || d <= min(a,b)) && !(c >= max(a,b) || c <= min(a,b))) {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}