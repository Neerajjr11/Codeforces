#include<bits/stdc++.h>
using namespace std;
 
using ll = long long int ;
int main(){
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         int ans = a[0];
        for(int i=0;i<n;i++)
        {
            ans = (ans| a[i]);
        }
        cout<<ans<<"\n";
    }}