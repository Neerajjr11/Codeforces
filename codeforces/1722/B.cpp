#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main()
{
    ll testcases;
    string s1, s2;
    int n;
    cin >> testcases;
    while (testcases--)
    {
        cin >> n;
        cin >> s1;
        cin >> s2;
        replace(s1.begin(), s1.end(), 'G', 'B');
        replace(s2.begin(), s2.end(), 'G', 'B');

        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}