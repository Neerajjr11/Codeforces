#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        arr.push_back(inp);
    }
    int pass = 10 - n;
    if (pass == 2)
        cout << 6 << endl;
    else
    {
        int op = (pass * (pass - 1)) / 2;
        cout << op * 6 << endl;
    }
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