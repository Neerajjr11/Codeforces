// B. GCD Arrays
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Consider the array a composed of all the integers in the range [l,r]. For example, if l=3 and r=7, then a=[3,4,5,6,7].

// Given l, r, and k, is it possible for gcd(a) to be greater than 1 after doing the following operation at most k times?

// Choose 2 numbers from a.
// Permanently remove one occurrence of each of them from the array.
// Insert their product back into a.
// gcd(b) denotes the greatest common divisor (GCD) of the integers in b.

// Input
// The first line of the input contains a single integer t (1≤t≤105) — the number of test cases. The description of test cases follows.

// The input for each test case consists of a single line containing 3 non-negative integers l, r, and k (1≤l≤r≤109,0≤k≤r−l).

// Output
// For each test case, print "YES" if it is possible to have the GCD of the corresponding array greater than 1 by performing at most k operations, and "NO" otherwise (case insensitive).

// Example
// inputCopy
// 9
// 1 1 0
// 3 5 1
// 13 13 0
// 4 4 0
// 3 7 4
// 4 10 3
// 2 4 0
// 1 7 3
// 1 5 3
// outputCopy
// NO
// NO
// YES
// YES
// YES
// YES
// NO
// NO
// YES
// Note
// For the first test case, a=[1], so the answer is "NO", since the only element in the array is 1.

// For the second test case the array is a=[3,4,5] and we have 1 operation. After the first operation the array can change to:
// [ 3, 20 ], [ 4, 15 ] or [ 5, 12 ] all of which having their greatest common divisor equal to 1 so the answer is "NO".

//                         For the third test case,
//     a = [13], so the answer is "YES", since the only element in the array is 13.

//     For the fourth test case,
//     a = [4], so the answer is "YES", since the only element in the array is 4.
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
    int l, r, k;
    read(l, r, k);
    // gcd of all even numbers is >=2
    // if l and r both are odd numbers then
    // then number of even nos. are (r-l+1)/2 and odd nos. = even + 1
    // if l and r both are even numbers then
    // then number of odd nos. are (r-l+1)/2 and even nos. = odd + 1
    // if l is even and r is odd or vice versa then
    // then number of odd nos. are equal to even nos. are  (r-l+1)/2
    // (r - l + 1)/2 is the no. of elements in the array
    // to convert odd to even we can multiply odd with even num to get even num
    // we need n operations to make n odd nums even
    if (l == r)
        if (l > 1)
            print("YES");

        else
            print("NO");
    else
    {
        int odd = (r - l + 1) / 2;
        int even = (r - l + 1) / 2;
        if (r % 2 == l % 2)
            if (r % 2 == 1)
                odd++;
            else
                even++;
        if (k >= odd)
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