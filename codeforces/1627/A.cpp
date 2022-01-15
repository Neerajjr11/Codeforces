#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define e '\n'
#define int int32_t
#define ull unsigned long long
#define konch_gleb int32_t main
#define kill return
#define gleb 0
#define fi first
#define se second
#define double long double
#define pb push_back
#define pob pop_back
#define TIME 1.0*clock()/CLOCKS_PER_SEC
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n , m , r , c;
        cin >> n >> m >> r >> c;
        char v[n][m];
        r--;
        c--;
        for(ll i=0 ; i<n ;i++){
            for(ll j=0 ; j<m ; j++){
                cin >> v[i][j];
            }
        }
        if(v[r][c]=='B'){
            cout<<0<<endl;
        }
        else{
            bool ans = true;
            for(ll i=0 ; i<n ; i++){
                for(ll j=0 ; j<m ; j++){
                    if(v[i][j] == 'B'){
                        ans = false;
                    }
                }
            }
            if(ans){
                cout<<-1<<endl;
            }
            else if(v[r][c]=='W'){
                bool x = false;
                for(int i=0;i<m;i++){
                    if(v[r][i]=='B') x=true;
                }
                for(int i=0;i<n;i++){
                    if(v[i][c]=='B') x=true;
                }
                if(!x){
                    cout<<2<<endl;
                }
                else{
                    cout<<1<<endl;
                }
            }
        }
    }
}