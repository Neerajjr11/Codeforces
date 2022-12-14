#include <bits/stdc++.h>

using namespace std;
using ll = long long int ;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int testcases = 1;
    cin >> testcases;
    for (int t = 1; t <= testcases; t++) {
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;

        bool check_res = false;

        for(ll i = 0; i <= k; i++){
            ll curr = i;
            ll hcatk1 = dc + (w*curr), hcatk2 = hc + (a * (k-curr));
            ll val1 = hm/hcatk1, val2 = hcatk2/dm;
            if(hm%hcatk1){
                val1++;
            }
            if(hcatk2%dm){
                val2++;
            }
            if(val1 <= val2){
                check_res = true;
                break;
            }
        }

        if(check_res){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}