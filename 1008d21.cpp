#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n,x;
    cin>>n>>x;
    
    vector<int> a(n);
    ll sum =0;
    
    for (int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    if (sum%n==0 && sum/n==x){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}