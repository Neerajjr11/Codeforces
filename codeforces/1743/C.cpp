#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> arr;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        arr.push_back(inp);
        
    }
    int mini;
    
    for(int i = n-1;i>=0;){
        if(s[i]=='1'){
            mini = arr[i];
            while(i>=0){
                mini = min(mini,arr[i]);
                if(s[i]=='1'){
                    ans+=arr[i];
                    i--;
                }else{
                    ans+=arr[i];
                    i--;
                    ans-=mini;
                    break;
                }
            }
            
        }else{
            i--;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);
    ll testcases;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}
