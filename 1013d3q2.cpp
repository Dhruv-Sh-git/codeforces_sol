#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve() {
    int n, x;
    cin >> n >> x;
    
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(all(a));
    ll count=0;
    ll flag=0;
    for(ll i=n-1;i>=0;i--){
        flag++;
        if(flag*a[i]>=x){
            count++;
            flag=0;
        }
    }
    
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
    
    return 0;
}