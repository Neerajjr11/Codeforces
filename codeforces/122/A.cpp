#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[]={4,7,47,74,447,474,744, 747, 477, 774};    
    

    for (int i = 0; i < sizeof(arr)/sizeof(int); ++i) {
            
            if(n % arr[i] == 0) {
                    cout << "YES";
                    return 0;
                }
    }
    cout << "NO";
    
    return 0;

}