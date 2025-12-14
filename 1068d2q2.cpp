/***************************************************
 * Author  : Dhruv
 * Language: C++17/C++20/C++23
 * Features: Fast I/O, templates, macros, debug mode
 ***************************************************/
#include <bits/stdc++.h>
using namespace std;
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define L(i,x,n) for(int i = (x); i < (n); ++i)
#define R(i,x,n) for(int i = (x); i >= (n); --i)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
const int MOD = 1e9 + 7;
const ll INF  = 1e18;
const ld EPS  = 1e-9;
const ld PI   = acosl(-1);
const long long NEG = -(1LL<<60);
template<typename T> inline void read(T &x) { cin >> x; }
template<typename T> inline void read(vector<T> &v) { for (auto &e : v) cin >> e; }
template<typename T> inline void print(const T &x) { cout << x; }
template<typename T> inline void print(const vector<T> &v, char sep = ' ') {
    for (int i = 0; i < sz(v); ++i) cout << v[i] << (i + 1 == sz(v) ? '\n' : sep);
}
template<typename T> inline T addmod(T a, T b, T m = MOD) { a += b; if (a >= m) a -= m; return a; }
template<typename T> inline T submod(T a, T b, T m = MOD) { a -= b; if (a < 0) a += m; return a; }
template<typename T> inline T mulmod(T a, T b, T m = MOD) { return (a * 1LL * b) % m; }
template<typename T> T powmod(T a, T b, T m = MOD) {
    T res = 1;
    while (b > 0) {
        if (b & 1) res = mulmod(res, a, m);
        a = mulmod(a, a, m);
        b >>= 1;
    }
    return res;
}
#ifdef LOCAL

template<class T> void _print(const T &x) { cerr << x; }
template<class T, class U> void _print(const pair<T,U> &p) { cerr << '(' << p.fi << ',' << p.se << ')'; }
template<class T> void _print(const vector<T> &v) { cerr << '['; for (auto &x : v) cerr << x << ' '; cerr << ']'; }
#define debug(x) cerr << #x << " = ", _print(x), cerr << '\n'
#else
#define debug(x)
//debug(x) prints x(array or num) g++ -std=c++20 -O2 -DLOCAL main.cpp && ./a.out
#endif
void solve() {
  int n; cin>>n;
  vll a(n),b(n);
  read(a); read(b);
  ll p=0,q=NEG;
  for(int i=0;i<n-1;i++) p++;
  p=0;
      for(int i=n-1;i>=0;i--){
          ll pp=p;
          ll qq=q;
          ll nq = max(qq+a[i],pp+b[i]);
          ll np = max(pp-a[i],qq-b[i]);
          p=np;
          q=nq;
        }
        ll dd=0,cc=0;
        for(int i=0;i<n-1;i++){
          
        dd-=12;
        cc-=11;
        }
  cout<<max(p,q)<<endl;
}
int main() {
    fastio();
    int T; cin >> T;
    while (T--) solve();
    return 0;
}
