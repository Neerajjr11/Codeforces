#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if ((n == a && a == b && b == n))
            cout << "Yes" << endl;
        else if (n - 1 > a + b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}