// A.Construct a Rectangle
//     time limit per test2 seconds
//         memory limit per test256 megabytes
//             inputstandard input
//                 outputstandard output
//                     There are three sticks with integer lengths l1,
//     l2 and l3.

//     You are asked to break exactly one of them into two pieces in such a way that :

//     both pieces have
//     positive(strictly greater than 0) integer length;
// the total length of the pieces is equal to the original length of the stick;
// it's possible to construct a rectangle from the resulting four sticks such that each stick is used as exactly one of its sides.
// A square is also considered a rectangle.

// Determine if it's possible to do that.

// Input
// The first line contains a single integer t (1≤t≤104) — the number of testcases.

// The only line of each testcase contains three integers l1,l2,l3 (1≤li≤108) — the lengths of the sticks.

// Output
// For each testcase, print "YES" if it's possible to break one of the sticks into two pieces with positive integer length in such a way that it's possible to construct a rectangle from the resulting four sticks. Otherwise, print "NO".

// You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES are all recognized as a positive answer).

// Example
// inputCopy
// 4
// 6 1 5
// 2 5 2
// 2 4 2
// 5 5 4
// outputCopy
// YES
// NO
// YES
// YES
// Note
// In the first testcase, the first stick can be broken into parts of length 1 and 5. We can construct a rectangle with opposite sides of length 1 and 5.

// In the second testcase, breaking the stick of length 2 can only result in sticks of lengths 1,1,2,5, which can't be made into a rectangle. Breaking the stick of length 5 can produce results 2,3 or 1,4 but neither of them can't be put into a rectangle.

// In the third testcase, the second stick can be broken into parts of length 2 and 2. The resulting rectangle has opposite sides 2 and 2 (which is a square).

// In the fourth testcase, the third stick can be broken into parts of length 2 and 2. The resulting rectangle has opposite sides 2 and 5.
#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define double long double
#define vt vector
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
typedef pair<double, double> pd;
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
#define each(i, a) for (auto &i : a)
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
typedef vt<double> vd;
typedef vt<pii> vpi;
typedef vt<string> vs;
typedef vt<vi> vvi;
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
string to_string(char c) { return string(1, c); }
string to_string(bool b) { return b ? "true" : "false"; }
string to_string(const char *s) { return string(s); }
string to_string(string s) { return s; }
template <class A, class B>
string to_string(pair<A, B> &a)
{
    return to_string(a.fr) + " " + to_string(a.sc);
}

template <class T>
void read(T &x) { cin >> x; }
void read(float &d)
{
    string t;
    read(t);
    d = stof(t);
}
void read(double &d)
{
    string t;
    read(t);
    d = stod(t);
}
template <class A, class B>
void read(pair<A, B> &a)
{
    read(a.fr);
    read(a.sc);
}
template <class A>
void read(vt<A> &a) { each(i, a) read(i); }
template <class H, class... T>
void read(H &h, T &...t)
{
    read(h);
    read(t...);
}

template <class T>
void write(T x) { cout << to_string(x); }
template <class H, class... T>
void write(const H &h, const T &...t)
{
    write(h);
    write(t...);
}

void print() { write("\n"); }
template <class T>
void print(vt<T> x)
{
    each(i, x)
    {
        write(i);
        write(" ");
    }
    print();
}
template <class H, class... T>
void print(const H &h, const T &...t)
{
    write(h);
    if (sizeof...(t))
        write(' ');
    print(t...);
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p)
{
    os << '{' << p.first << ", " << p.second << '}';
    return os;
}
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
    vi a(3);
    read(a);
    sort(all(a));
    if (a[2] == (a[0] + a[1]))
    {
        print("YES");
        return;
    }
    else
    {
        if ((a[0] == a[1] and a[2] % 2 == 0) or (a[0] == a[2] and a[1] % 2 == 0) or (a[1] == a[2] and a[0] % 2 == 0))
            print("YES");
        else
            print("NO");
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