#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = n;
    sort(arr, arr + n);
    // for (auto c : arr)
    //     cout << c  << " - ";
    // cout << '\n' <<  '\n';
    for (int i = 0, j = n - 1; i < j;)
    {
        if (arr[i] + arr[j] <= x) { 
            counter--;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] > x)
            j--;
    }
    cout << counter;

}