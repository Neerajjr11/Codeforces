#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define double long double

#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define vii vector<pii>

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back()
#define in insert
#define lb lower_bound
#define ub upper_bound
#define fr front()
#define bk back()
#define make make_pair
#define size(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define repp(i, a, b, c) for (int i = a; i <= b; i += c)
#define bckk(i, a, b, c) for (int i = a - 1; i >= b; i -= c)
#define rep(i, a, b) repp(i, a, b, 1)
#define bck(i, a, b) bckk(i, a, b, 1)
#define mx(x) *max_element(all(x))
#define mn(x) *min_element(all(x))
#define summ(x) accumulate(all(x), 0LL)
#define mem(x, y) memset(x, y, sizeof(x))
#define count_0(x) __builtin_clzll(x)
#define count_1(x) __builtin_popcountll(x)
#define isEven(x) __builtin_parityll(x)
#define mbit(x) __lg(x)
#define cins(x)       \
    for (auto &i : x) \
    cin >> i
#define ceils(x, y) (x + y - 1) / y
#define srt(x) is_sorted(all(x))
#define gcd __gcd
#define endl '\n';

void IOS()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("Error.txt", "w", stderr);
}
void solve()
{
    int n;
    cin >> n;
    if(n%2 == 0){
        rep(i,1,n/2){
            cout<<i+(n+1)/2<<" "<<i<<" ";
        }
    }
    else{
        rep(i, 1, n / 2)
        {
            cout << i << " " << i + (n + 1) / 2 << " ";
        }
        cout<<(n+1)/2<<" ";
    }
    cout<<endl;
}
int32_t main()
{
    IOS();
    int testcases = 1;
    cin >> testcases;
    while (testcases--)
        solve();
    return 0;
}