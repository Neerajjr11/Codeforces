#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    ll cx = min(a, x);
    ll cy = min(b, y);
    x -= cx;
    y -= cy;
    if (x + y > c)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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