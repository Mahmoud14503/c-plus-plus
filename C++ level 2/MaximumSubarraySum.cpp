#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long max_so_far = arr[0];
    long long sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (sum < 0)
            sum = 0;
        sum += arr[i];
        max_so_far = max(sum, max_so_far);
    }
    cout << max_so_far;
    return 0;
}