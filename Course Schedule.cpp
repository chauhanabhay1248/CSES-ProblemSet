#include <bits/stdc++.h>
using namespace std;

const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;;
const long long MOD = 998244353;

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;

void __print(int x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << x;}
void __print(const char *x) {cerr << x;}
void __print(const string &x) {cerr << x;}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x)
{
	cerr << '{';
	__print(x.first); cerr << ", "; __print(x.second);
	cerr << '}';
}

template<typename T>
void __print(const T &x)
{
	int f = 0;
	cerr << '{';
	for (auto &i : x)
	{
		cerr << (f++ ? ", " : "");
		__print(i);
	}
	cerr << "}";
}
void _print()
{
	cerr << "]\n";
}

template <typename T, typename... V>
void _print(T t, V... v)
{
	__print(t);
	if (sizeof...(v))
	{
		cerr << ", ";
	}
	_print(v...);
}

#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define  dbg(x...)
#endif

#define pb                  push_back
#define mp                  make_pair

#define fi                  first
#define se                  second

#define Endl                '\n'
#define sz(x)               (long long)x.size()

#define all(c)              (c).begin(), (c).end()
#define allr(c)             (c).rbegin(), (c).rend()

#define Max(a,b)            ((a > b) ? a : b)
#define Min(a,b)            ((a < b) ? a : b)

#define ci(X)               long long X; cin >> X
#define cii(X, Y)           long long X, Y; cin >> X >> Y
#define ciii(X, Y, Z)       long long X, Y, Z; cin >> X >> Y >> Z

long long                   tc_cnt = 1;
#define ons()               cout << "Case #" << tc_cnt ++ << ": ";

#define krosuru             long long ___tc; cin >> ___tc; while (___tc-- > 0)
#define yehbhitheekhai      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define forn(i, l, r)       for(long long i = l; i < (r); i++)
#define forr(i, l, r)       for(long long i = l; i >= (r); i--)

#define mem0(X)             memset((X), 0, sizeof((X)))
#define mem1(X)             memset((X), -1, sizeof((X)))
#define setbits(x)          __builtin_popcountll(x)

ll powermod(ll a, ll b)
{
	ll ans = 1;
	while (b)
	{
		if (b & 1) ans = (ans * a) % mod;
		b = b / 2;
		a = (a * a) % mod;
	}
	return ans;
}

ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
	return (a / gcd(a, b)) * b;
}

void krdiyasuru()
{
	cii(n, m);
	vector<ll> adj[n + 1];
	vector<ll> deg(n + 1);
	forn(i, 0, m)
	{
		cii(u, v);
		adj[u].pb(v);
		deg[v] ++;
	}
	priority_queue<ll, vector<ll>, greater<ll>> q;
//    queue<ll> q;  // you can use queue also
	forn(i, 1, n + 1)
	{
		if (deg[i] == 0)
		{
			q.push(i);
		}
	}
	vector<ll> ans;
	while (sz(q))
	{
		ll chk = q.top();
//        ll chk = q.front();   // for queue
		q.pop();
		ans.pb(chk);
		for (auto x : adj[chk])
		{
			deg[x] --;
			if (deg[x] == 0)
			{
				q.push(x);
			}
		}
	}
	if (sz(ans) == n)
	{
		forn(i, 0, n)
		{
			cout << ans[i] << " ";
		}
		return;
	}
	cout << "IMPOSSIBLE" << endl; // cycle
	return;
}

int main()
{
	yehbhitheekhai;
	//    krosuru
	{
		cerr << endl;
		krdiyasuru();
	}
}
