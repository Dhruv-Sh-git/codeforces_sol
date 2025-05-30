#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkTriangle(ll a, ll b, ll c) {
    return (a + b > c) && (b + c > a) && (a + c > b);
}

void solve() {
    ll x;
    cin >> x;
    ll y;
    if (x >= 5) {
        y = (x % 2 == 0) ? x - 1 : x - 2;
        ll z = x ^ y;
        if (z > 0 && checkTriangle(x, y, z)) {
            cout << y << endl;
            return;
        }
    }
    cout << -1 << endl;
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