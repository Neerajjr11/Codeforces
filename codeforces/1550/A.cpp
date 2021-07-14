#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int ntc;
    cin >> ntc;
    for (int i = 0; i < ntc; i++) {
        int x, temp, temp2, temp3, n, nn;
        n = 1;
        nn = 1;
        temp = 3;
        temp2 = 2;
        cin >> x;
        x--;
        temp3 = x;
        for (; x > temp; temp += 2) {
            x -= temp;
            n++;
        }
        for (; temp3 > temp2; temp2 += 2) {
            temp3 -= temp2;
            nn++;
        }
        if (temp3 != 0)nn++;
        if (x != 0)n++;
        n > nn ? cout << nn << endl : cout << n << endl;
    }


}