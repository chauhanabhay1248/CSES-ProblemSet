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
 
long long dx[] = {0, -1, 1, 0, -1, -1, 1, 1};
long long dy[] = {1, 0, 0, -1, 1, -1, -1, 1};
 
ll n, m;
char a[1007][1007];
vector<vector<bool>> vis(1007, vector<bool>(1007, false));
 
bool chk(ll x, ll y)
{
    if(x >= n || y >= m || x < 0 || y < 0 || a[x][y] == '#' || vis[x][y] == true)
    {
        return false;
    }
    return true;
}
 
void krdiyasuru()
{
    cin >> n >> m;
    forn(i, n)
    {
        forn(j, m)
        {
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    forn(i, n)
    {
        forn(j, m)
        {
            if(vis[i][j] == false && a[i][j] == '.')
            {
                ans ++;
                queue<pll> q;
                q.push(mp(i, j));
                vis[i][j] = true;
                while(q.size())
                {
                    ll x = q.front().fi;
                    ll y = q.front().se;
                    q.pop();
                    forn(k, 4)
                    {
                        if(chk(x + dx[k], y + dy[k]))
                        {
                            vis[x + dx[k]][y + dy[k]] = true;
                            q.push(mp(x + dx[k], y + dy[k]));
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<Endl;
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
