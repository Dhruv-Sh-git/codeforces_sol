#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >>n>>k;
    
    if (k == 1) {
        for (int i = 1; i <= n; i++) {
            if (i != n) {
                cout<< n <<" ";
            } else {
                cout<< n-1 <<" ";
            }
        }
    } else if (k%2 == 0) {
        for (int i=1; i <= n; i++) {
            if (i < n) {
                cout<< i+1 << " ";
            } else {
                cout<<n-1<<" ";
            }
        }
    } else {
        for (int i = 1;i<=n;i++) {
            if (i == n-1){
                cout<<n<<" ";
            } else if (i == n){
                cout<< n-1 <<" ";
            }else{
                cout<<n<<" ";
            }
        }
    }
    cout << endl;
}
int main(){
    int tt;
    cin>>tt;
    while (tt--){
        solve();
    }
    return 0;
}