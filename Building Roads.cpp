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
    cii(n, m);
    vi adj[n + 7];
    forn(i, m)
    {
        cii(u, v);
        adj[u].pb(v);
        adj[v].pb(u);
    }
    queue<ll> q;
    vector<bool> vis(SZ, false);
    ll ans = 0;
    vi str;
    fore(i, n)
    {
        if(vis[i] == false)
        {
//            dbg(i);
            str.pb(i);
            ans ++;
            q.push(i);
            vis[i] = true;
            while(sz(q))
            {
                ll chk = q.front();
                q.pop();
                for(auto i: adj[chk])
                {
                    if(vis[i] == false)
                    {
                        vis[i] = true;
                        q.push(i);
                    }
                }
            }
        }
    }
    cout<<ans - 1<<endl;
    forl(i, 1, ans)
    {
        cout<<str[i - 1]<<" "<<str[i]<<endl;
    }
    return;
}
 
int main()
{
    yehbhitheekhai;
    //    krosuru
    {
        krdiyasuru();
    }
