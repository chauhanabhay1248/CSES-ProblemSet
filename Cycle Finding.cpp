#include <bits/stdc++.h>
using namespace std;

const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;
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
		if (b & 1) ans = (ans * a) % MOD;
		b = b / 2;
		a = (a * a) % MOD;
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
	vector<pair<pair<ll, ll>, ll>> adj(m + 1);
	forn(i, 0, m)
	{
		cin >> adj[i].fi.fi >> adj[i].fi.se >> adj[i].se;
	}
	vector<ll> dist(n + 1, inf);
	vector<ll> par(n + 1);
	forn(i, 0, n - 1)
	{
		for (auto x : adj)
		{
			ll u = x.fi.fi;
			ll v = x.fi.se;
			ll cst = x.se;
			if (dist[v] > dist[u] + cst)
			{
				dist[v] = dist[u] + cst;
				par[v] = u;
			}
		}
	}
	for (auto x : adj)
	{
		ll u = x.fi.fi;
		ll v = x.fi.se;
		ll cst = x.se;
		if (dist[v] > dist[u] + cst)
		{
			cout << "YES" << endl;
			vector<bool> vis(n + 1, false);
			while (vis[v] == false)
			{
				vis[v] = true;
				v = par[v];
			}
			vector<ll> ans;
			ans.pb(v);
			for (ll chk = par[v]; chk != v; chk = par[chk])
			{
				ans.pb(chk);
			}
			ans.pb(v);
			reverse(all(ans));
			for (auto i : ans)
			{
				cout << i << " ";
			}
			cout << endl;
			return;
		}
	}
	cout << "NO" << endl;
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
