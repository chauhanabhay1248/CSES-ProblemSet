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
    vi adj[n + 1];
    forn(i, m)
    {
        cii(u, v);
        adj[u].pb(v);
        adj[v].pb(u);
    }
    queue<ll> q;
    vector<bool> vis(n + 1, false);
    
    vi clr(n + 1);
    vi par(n + 1);
    fore(i, n)
    {
        if(clr[i] == 0)
        {
            clr[i] = 1;
//            dbg2(i, clr[i]);
            queue<ll> q;
            q.push(i);
            while(sz(q))
            {
                ll chk = q.front();
                q.pop();
//                dbg(chk);
                for(auto x: adj[chk])
                {
//                    dbg(x);
                    par[x] = chk;
                    if(clr[x] == 0)
                    {
                        q.push(x);
                        clr[x] = clr[par[x]] == 1 ? 2 : 1;
//                        dbg3(x, clr[x], par[x]);
                    }
                    else if(clr[x] == clr[par[x]] && x != par[x])
                    {
//                        dbg2(x, chk);
                        cout<<"IMPOSSIBLE"<<endl;
                        return;
                    }
                }
            }
        }
    }
    fore(i, n)
    {
        cout<<clr[i]<<" ";
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
}
