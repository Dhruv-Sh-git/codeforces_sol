#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll pdsum = accumulate(a.begin(), a.end(), 0LL);
    vector<ll> front(2*n + 1, 0);
    for (int i = 0; i < n; i++) {
        front[i + 1] = front[i] + a[i];
        front[i + n + 1] = front[i + n] + a[i];
    }
    
    ll ans = 0;
    for (int start = 0; start<n*k; start++) {
        bool found = false;
        int pos = start%n;
        int pd = start/n;
        
        for (int end = pos; end < n; end++){
            if (front[end + 1] - front[pos] >= x){
                found = true;
                break;
     }
        }
        
        if(found){
            ans++;
            continue;
        }
        if(pdsum <= 0){
            continue;
        }
        ll cc = front[n] - front[pos];
        ll gain = x - cc;
        ll chahiye = (gain + pdsum - 1)/pdsum;
        if (pd + 1 + chahiye <=k) {
            ans++;
        }
    }
    
    cout<<ans<< "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
