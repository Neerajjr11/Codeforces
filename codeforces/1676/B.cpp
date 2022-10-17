#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
void solve()
{
    int n, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(arr[i], mini);
    }

    for (int i = 0; i < n; i++)
    {
        count += (arr[i] - mini);
    }
    cout << count << endl;
}
int main()
{
    ll testcases;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}