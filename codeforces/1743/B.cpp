#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    int n;
    cin >> n;
    int i = 1;
    int j = n;
    while (i <= j)
    {
        if (i == j)
        {
            cout << i;
            i++;
            j--;
        }
        else
        {
            cout << i << " " << j << " ";
            i++;
            j--;
        }
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