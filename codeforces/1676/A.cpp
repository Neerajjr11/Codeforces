#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main()
{
    ll testcases;
    string s;
    cin >> testcases;
    while (testcases--)
    {
        cin >> s;
        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}