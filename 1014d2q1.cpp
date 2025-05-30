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
void solve(){
    int n; cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    cout<<a[n-1]-a[0]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
