#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
int main(){
    int t,rem;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {cin>>arr[i];}
        if(is_sorted(arr,arr+n))
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }}