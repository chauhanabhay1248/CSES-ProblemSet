#include <bits/stdc++.h>

const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long mod = 1e9 + 7;
const long long MOD = 998244353;
long long opnmbr = 1;

#define ll                  long long
#define ld                  long double

#define pb                  push_back
#define mp                  make_pair

#define pll                 pair<ll, ll>
#define vi                  vector<ll>
#define mi                  map<ll, ll>
#define umi                 unordered_map<ll, ll>

#define fi                  first
#define se                  second

#define sz(x)               (ll)x.size()
#define Endl                endl

#define all(c)              (c).begin(), (c).end()
#define allr(c)             (c).rbegin(), (c).rend()

#define Max(a,b)            ((a > b) ? a : b)
#define Min(a,b)            ((a < b) ? a : b)

#define ci(X)               ll X; cin>>X
#define cii(X, Y)           ll X, Y; cin>>X>>Y
#define ciii(X, Y, Z)       ll X, Y, Z; cin>>X>>Y>>Z
#define ciiii(W, X, Y, Z)   ll W, X, Y, Z; cin>>W>>X>>Y>>Z

#define dbg(x)              cout<<#x<<"="<<(x)<<endl;
#define dbg2(x,y)           cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
#define dbg3(x,y,z)         cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
#define dbg4(x,y,z,w)       cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;

#define ons()               cout<<"Case #"<<opnmbr++<<": ";
#define krosuru             ll ___T; cin>>___T; while (___T-- > 0)
#define yehbhitheekhai      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define forn(i, n)          for(ll i = 0; i < (n); i++)
#define fore(i, n)          for(ll i = 1; i <= (n); i++)
#define forl(i, l, r)       for(ll i = l; i < (r); i++)
#define forr(i, l, r)       for(ll i = l; i >= (r); i--)

#define mem0(X)             memset((X), 0, sizeof((X)))
#define mem1(X)             memset((X), -1, sizeof((X)))
#define setbits(x)          __builtin_popcountll(x)

using namespace std;

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
    ciii(n, m, q);
    vector<vi> adj;
    adj.resize(n + 1);
    forn(i, n + 1)
    {
        adj[i].resize(n + 1);
    }
    fore(i, n)
    {
        forl(j, i + 1, n + 1)
        {
            adj[i][j] = adj[j][i] = inf;

        }
    }
    forn(i, m)
    {
        ciii(u, v, cst);
        adj[u][v] = adj[v][u] = min(adj[u][v], cst);
    }
    fore(k, n)
    {
        fore(i, n)
        {
            fore(j, n)
            {
                adj[i][j] = min(adj[i][j],
                                adj[i][k] + adj[k][j]);
            }
        }
    }
    while (q --)
    {
        cii(u, v);
        cout << (adj[u][v] == inf ? -1 :
                 min(adj[u][v] , adj[v][u])) << endl;
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    yehbhitheekhai;
    //    krosuru
    {
        krdiyasuru();
    }
}