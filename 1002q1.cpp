#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    vector<ll> count;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll c0 = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n - k >= 1) {
            for (ll i = 0; i < (n - k); i++) {
                int rep = std::count(a.begin(), a.end(), i + 1);
                if (rep == 3) {
                    c0++;
                }
            }
            count.push_back(c0);
        }else {
            set<ll> x(a.begin(), a.end()); 
            ll index = 0, c1 = 0;

            while (index < x.size()) {
                auto it = x.begin();
                advance(it, index);

                if (*it == index + 1) {
                    c1++;
                }
                index++;
            }
            count.push_back(c1);
        }
    }
    for (ll i = 0; i < count.size(); i++) {
        cout << count[i] + 1 << endl;
    }

    return 0;
}
