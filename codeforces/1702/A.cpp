#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main()
{
    ll testcases;
    long long n;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n;
        int k = int(log10(n) + 1);
        long long res = n - pow(10, k - 1);
        cout << res << endl;
    }
}