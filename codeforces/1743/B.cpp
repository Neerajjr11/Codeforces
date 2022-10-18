#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i = n; i > 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
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