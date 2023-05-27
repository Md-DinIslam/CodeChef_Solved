#include <bits/stdc++.h>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Din cout.tie(NULL);

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// TypeDEf
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef vector<vll> mat;
typedef unordered_map<ll, ll> umpll;
typedef unordered_map<int, int> umpi;
typedef map<ll, ll> mpll;

// Macros
#define prf(x) printf("%d\n", x)
#define pfl(x) printf("%lld\n", x)
#define sc(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define scf(x) scanf("%lf", &x)
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i,a, n) for (int i = a; i <= n; i++)
#define rfl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define pf cout << "FIRST\n";
#define nn cout << '\n';
#define bitcount __builtin_popcountll
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.end(), v.begin()

//DEBUG
void __print(int x) {cerr << x << " ";}
void __print(long x) {cerr << x << " ";}
void __print(long long x) {cerr << x << " ";}
void __print(unsigned x) {cerr << x << " ";}
void __print(unsigned long x) {cerr << x << " ";}
void __print(unsigned long long x) {cerr << x << " ";}
void __print(float x) {cerr << x << " ";}
void __print(double x) {cerr << x << " ";}
void __print(long double x) {cerr << x << " ";}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// Constants
const lld PI = 3.141592653589793238;
const ll INF = 1e18 + 9;
const ll mod = 1e9 + 7;
const int mxN = 1e5 + 10;
ll v[mxN], st[4 * mxN], lz[4 * mxN];
void lazy(int s, int e, int i) {
    st[i] += lz[i] * (e - s + 1);
    if (s != e) {
        lz[i * 2] += lz[i];
        lz[i * 2 + 1] += lz[i];
    }
    lz[i] = 0;
}
void build(int s, int e, int i = 1) {
    if (s == e) st[i] = v[s];
    else {
        int mid = (s + e) / 2;
        build(s, mid, i * 2);
        build(mid + 1, e, i * 2 + 1);
        st[i] = st[i * 2] + st[i * 2 + 1];
    }
}
void update(int s, int e, int lb, int rb, ll val, int i = 1) {
    if (lz[i]) lazy(s, e, i);
    if (s > rb || e < lb) return;
    if (s >= lb && e <= rb) {
        st[i] += val * (e - s + 1);
        if (s != e)
            lz[i * 2] += val, lz[i * 2 + 1] += val;
    }
    else {
        int mid = (s + e) / 2;
        update(s, mid, lb, rb, val, i * 2);
        update(mid + 1, e, lb, rb, val, i * 2 + 1);
        st[i] = st[i * 2] + st[i * 2 + 1];
    }
}
ll query(int s, int e, int lb, int rb, int i = 1) {
    if (lz[i]) lazy(s, e, i);
    if (s > rb || e < lb) return 0ll;
    if (s >= lb && e <= rb) return st[i];
    int mid = (s + e) / 2;
    ll a = query(s, mid, lb, rb, i * 2);
    ll b = query(mid + 1, e, lb, rb, i * 2 + 1);
    return a + b;
}
void solve()
{
    memset(lz, 0, sizeof(lz));
    memset(st, 0, sizeof(st));
    memset(v, 0, sizeof(v));
    int n, q;
    cin >> n >> q;
    build(1, n);
    while (q--) {
        string tp;
        cin >> tp;
        if (tp == "answer") {
            int lb, rb;
            cin >> lb >> rb;
            cout << query(1, n, lb, rb) << '\n';
        }
        else {
            int lb, rb;
            cin >> lb >> rb;
            cout << "OK\n";
            update(1, n, lb, rb, 1ll);
        }
    }
}
// Main
int main()
{
    Code By Din
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    clock_t z = clock();
    ll t = 1;
    cin >> t;
    // while (t--) solve();
    fl(i, t) { //Kickstart
        cout << "Scenario #" << i + 1 << ":\n";
        solve();
    }
    cerr << "\nRun Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC);
    return 0;
}