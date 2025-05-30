#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    
    vector<int> a;
    a.reserve(n - 2);  // Pre-allocate memory
    for (int i = 0; i < n - 2; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    if (n <= 4) {  // Simplified condition
        cout << "YES\n";
        return;
    }

    bool isOk = true;
    for (int i = 1; i < a.size() - 1; i++) {
        if (!a[i] && a[i + 1] && a[i - 1]) {  // Simplified condition
            isOk = false;
            break;
        }
    }

    cout << (isOk ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}