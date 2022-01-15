#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 vector<ll> edges[100001];
 map<pair<ll,ll>,ll> pos;
 ll N;

 bool dfs(ll src,ll par,vector<ll> &path){
    path.push_back(src);
    if(path.size()==N) return true;
    for(auto itr : edges[src]){
        if(itr==par) continue;
        if(dfs(itr,src,path)) return true;
    }
    path.pop_back();
    return false;
 }

 void solve(){
     ll n; cin>>n;
     N = n;
     for(ll i=1;i<=n;i++) edges[i].clear();
     pos.clear();
     for(ll i=0;i<n-1;i++){
        ll x,y; cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
        ll LX = min(x,y);
        ll LY = max(x,y);
        pos[{LX,LY}]=i;
     }
     ll src = -1;
     for(ll i=1;i<=n;i++) if(edges[i].size()==1) src=i;
     vector<ll> path;
     if(src==-1 or !dfs(src,0,path)){
        cout<<"-1"<<endl;
     }
     else{
        vector<ll> ret(n-1,0);
        for(ll i=0;i<n-1;i++){
          ll LX = min(path[i],path[i+1]);
          ll LY = max(path[i],path[i+1]);
          ret[pos[{LX,LY}]]=(i&1?2:5);
        }
        for(auto elem : ret) cout<<elem<<" ";
        cout<<endl;
     }
 }
 
 int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll t; cin>>t;
     while(t--) solve();
 }