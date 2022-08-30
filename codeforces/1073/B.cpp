#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
ll checking[999999];
ll books[200015];
int main()
{
    ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    ll n,k,l,ans,m;
    cin>>n;
    int input;
    queue<ll>q;
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        q.push( p);
    }
    for(int i=0;i<n;i++)
    { cin>>books[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cin>>m;
        ans=0;
        if(checking[books[i] ])
        {
            ans=0;
            cout<<ans<<' ';
        }
 
        else{
        while(true)
        {
            int check = q.front();
            checking[check]=1;
            ans++;
            q.pop();
            if(books[i]==check)break;
        }
        cout<<ans<<' ';
    }
    cout<<endl;
  }
}
