#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main()
{
    ll testcases;
    string s1, s2;
    int g1, g2, g3, g4;
    cin >> testcases;
    while (testcases--)
    {
        cin >> g1 >> g2 >> g3 >> g4;
        if ((g1 + g2 + g3 + g4) == 0)
            cout << 0 << endl;
        else if ((g1 + g2 + g3 + g4) == 4)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}