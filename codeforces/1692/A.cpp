#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main()
{
    ll testcases;
    long long a, b, c, d;
    int count = 0;
    cin >> testcases;
    while (testcases--)
    {
        cin >> a >> b >> c >> d;

        count = (b > a) + (c > a) + (d > a);
        cout << count << endl;
        count = 0;
    }
}