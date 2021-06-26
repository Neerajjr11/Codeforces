#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }

    vector<int> output(n);
    for (int i = 1; i <= n; ++i) {
        int pos = input[i-1];
        output[pos-1] = i;
    }

    
    for (int i = 0; i < n; ++i) {
        cout << output[i] << ' ';
    }
        
    return 0;
}