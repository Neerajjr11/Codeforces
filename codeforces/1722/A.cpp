#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main()
{
    ll testcases;
    string s = "Timur";
    sort(s.begin(), s.end());
    cin >> testcases;
    int len;
    string name;
    while (testcases--)
    {
        cin >> len;
        cin >> name;
        if (len != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(name.begin(), name.end());
            if (name == s)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }
    }
}