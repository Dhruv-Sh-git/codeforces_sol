#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    
    vector<ll> x(n), r(n);
    
    for (int i = 0; i<n; i++) {
        cin >>x[i];
    }
    
    for (int i= 0; i<n; i++) {
        cin>>r[i];
    }
    
    set<pair<ll, ll>> unique;
    
    for (int i = 0; i < n; i++) {
        ll center = x[i];
        ll radius = r[i];
        for (ll dx = -radius; dx <= radius; dx++) {
            ll curr_x = center + dx;
            ll y_max = floor(sqrt(1.0 * radius * radius - dx * dx));

            for (ll y = -y_max; y <= y_max; y++) {
                unique.insert({curr_x, y});
            }
        }
    }
    
    cout << unique.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}