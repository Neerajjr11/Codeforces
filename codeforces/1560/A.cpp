// A.Dislike of Threes
//     time limit per test1 second
//         memory limit per test256 megabytes
//             inputstandard input
//                 outputstandard output
//                     Polycarp doesn't like integers that are divisible by 3 or end with the digit 3 in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.

//     Polycarp starts to write out the
//     positive(greater than 0) integers which he likes : 1,
//     2, 4, 5, 7, 8, 10, 11, 14, 16,….Output the k - th element of this sequence(the elements are numbered from 1).

//                                                    Input The first line contains one integer t(1≤t≤100) — the number of test cases.Then t test cases follow.

//                                                    Each test case consists of one line containing one integer k(1≤k≤1000)
//                                                        .

//                                                    Output For each test case,
//     output in a separate line one integer x — the k - th element of the sequence that was written out by Polycarp.

//                                                       Example
//                                                       inputCopy
//                                                       10 1 2 3 4 5 6 7 8 9 1000 outputCopy
//                                                       1 2 4 5 7 8 10 11 14 1666
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
// #define size(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define repp(i, a, b, c) for (int i = a; i < b; i += c)
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
#define endl '\n'
// inline int read()
// {
//     char ch = getchar();
//     int x = 0, f = 1;
//     while (ch < '0' || ch > '9')
//     {
//         if (ch == '-')
//             f = -1;
//         ch = getchar();
//     }
//     while (ch >= '0' && ch <= '9')
//     {
//         x  = x * 10 + ch - '0';
//         ch = getchar();
//     }
//     return x * f;
// }

class custom_hash
{
public:
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
template <typename T>
using max_heap = priority_queue<T>;
template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using vec = vector<vector<T>>;
template <typename T>
using uset = unordered_set<T, custom_hash>;
template <typename T1, typename T2>
void amax(T1 &x, T2 y)
{
    if (x < y)
        x = y;
}
template <typename T1, typename T2>
void amin(T1 &x, T2 y)
{
    if (x > y)
        x = y;
}

// find_by_order(K): Returns an iterator to the Kth largest element (counting from zero)
// order_of_key (K): Returns the number of items that are strictly smaller than K

const double pi = acos(-1.0);
const double eps = 1e-9;

char dir[] = {'D', 'L', 'R', 'U'};
const int dx[] = {1, 0, 0, -1, 1, 1, -1, -1};
const int dy[] = {0, -1, 1, 0, -1, 1, -1, 1};

void __print(int x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
void _print() { cerr << "]\n"; }

#ifndef Neeraj_jm
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

int power(int a, int y, int m)
{
    int res = 1;
    a = a % m;
    while (y > 0)
    {
        if (y & 1)
            res = (res * a) % m;
        y = y >> 1LL;
        a = (a * a) % m;
    }
    return res;
}

bool isSqr(int x)
{
    int y = sqrtl(x);
    return x == y * y;
}

bool isPrime(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int inverse(int n, int m) { return power(n, m - 2, m); }
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
int mod_div(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, inverse(b, m), m));
}
const int d4i[4] = {-1, 0, 1, 0}, d4j[4] = {0, 1, 0, -1};
const int d8i[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const int inf = 1e9;
const int linf = 1e18;
const int MOD1 = 1e9 + 7;
const int MOD9 = 998244353;
void IOS()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(20);
    cout.setf(ios::fixed);

#ifndef Neeraj_jm
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// freopen("Error.txt", "w", stderr);
#endif
}
void solve()
{
    int n;
    cin >> n;
    int j = 1;
    int i = 1;
    if (n == 1)
        cout << 1 << endl;
    else
    {
        while (i != 0)
        {
            if (j == (n))
            {
                while (i != 0)
                {
                    if ((i % 3 != 0) && (i % 10 != 3))
                    {
                        cout << i << endl;
                        return;
                    }
                    else
                    {
                        i++;
                    }
                }
            }
            if ((i % 3 != 0) && (i % 10 != 3))
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
    }
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