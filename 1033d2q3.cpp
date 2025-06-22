/***********
 DHRUV KA CODE
***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()  
#define L(i,x,n) for(int i=x;i<n;i++)
#define R(i,x,n) for(int i=x;i>=n;i--)
#define sz(a) ((int) (a).size())
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int> >
#define vll vector<long long>
#define vvl vector<vector<long long> >
#define mll map<long long, long long>
void solve() {
    ll n, m;
    cin>>n>>m;
    ll mini = n;
    ll maxi = n*(n + 1)/2;
        if (m < mini || m > maxi){
            cout << "-1"<<endl;
            return;
        }
        int rr= 1;
        for (int r = 1; r <= n; ++r) {
            ll smin = n+1LL*r*(r-1)/2;
            ll smax = (1LL*r*n)- (1LL*r*(r-1)/2);
            if (m >= smin && m <=smax){
                rr=r;
                break;
            }
        }
        ll smax = (1LL*rr* n)-(1LL *rr*(rr - 1)/ 2);
        ll differ = smax - m;
        vpii e; e.reserve(n-1);
        for (int p = 1; p <rr; ++p) e.pb({rr, p});
        for (int v =rr+ 1; v <= n; ++v) {
            if (differ>0) {
                ll r = min<ll>(rr- 1, differ);
                int p = rr-(int)r;
                e.pb({p, v});
                differ-= r;
            } else e.push_back({rr, v});
        }
        cout <<rr<<endl;
        for (auto &ans:e) cout << ans.first << ' ' << ans.second << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);int tt;cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
