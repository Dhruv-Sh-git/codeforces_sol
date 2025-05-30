#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int Count1 = 0;
    long long Sum = 0;
    
    for (int i = 0; i < n; i++) {
        Sum += a[i];
        if (a[i] % 2 == 1) {
            Count1++;
        }
    }
    
    int Count2 = n - Count1;
    //1st tt;
    if (Count1 == 0 || Count2 == 0) {
        cout << *max_element(a.begin(), a.end()) << endl;
        return;
    }
    
    // Two possible max an odd or max even
    long long maxOdd, maxEven;
    maxOdd = Sum - (Count1 - 1);
    maxEven = Sum - Count1;
    
    cout << max(maxOdd, maxEven)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}