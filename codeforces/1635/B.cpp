#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
int main(){
    int testcases;
    cin>>testcases;
    while(testcases--)
    { int n;
        cin>>n;
        int count=0,mini,maxi;
          vector<long long int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         for(int i=1;i<n-1;i++)
        {if (a[i] > a[i + 1] && a[i] > a[i - 1]) 
        { 
            count++;
            if(i + 2 < n) 
                a[i + 1] = max(a[i], a[i + 2]); 
            else 
                a[i + 1] = a[i]; 
        }
        }
        cout<<count<<"\n";
       for(auto x:a){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}