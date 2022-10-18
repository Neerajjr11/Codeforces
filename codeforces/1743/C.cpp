#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> arr;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        arr.push_back(inp);
        if (s[i] == '1')
            ans += arr[i];
    }
    int idx = 0;
    while (idx < n)
    {
        if (s[idx] == '1')
            ++idx;
        else
            break;
    }
    while (idx < n)
    {
        int next = idx + 1;
        if (next >= n or s[next] == '0')
        {
            idx++;
            continue;
        }
        int remove = INT_MAX;
        int op = idx + 1;
        while (next < n and s[next] == '1')
        {
            if (arr[next] < remove)
            {
                remove = arr[next];
                op = next;
            }
            next++;
        }
        if (remove < arr[idx])
        {
            ans -= remove;
            ans += arr[idx];
        }
        idx = op;
    }
    cout << ans << endl;
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