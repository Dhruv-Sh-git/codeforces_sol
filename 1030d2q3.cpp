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
#define ull unsigned long long

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ull> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    ll base=0;
    for (auto x : a) base += __builtin_popcountll(x);
    vector<ull> ops;
    ops.reserve(n * 60);
    for (auto x : a) {
        ull cur = x;
        while (true) {
            int p = __builtin_ctzll(~cur);  // lowest unset bit
            if (p>= 60) break;
            ull c = 1ULL << p;
            if (c > (ull)k) break;
            ops.pb(c);
            cur += c;
        }
    }
    sort(ops.begin(), ops.end());
    ull used = 0;
    ll gain = 0;
    for (auto c : ops) {
        if (used + c > (ull)k) break;
            used += c;
        ++gain;
    }

    cout << base + gain;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout<<endl;
    }
    return 0;
}