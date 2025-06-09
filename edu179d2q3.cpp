/***********
 DHRUV KA CODE
***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()  
#define L(i,x,n) for(int i=x;i<n;i++)
#define R(i,x,n) for(int i=x;i>=n;i--)
#define sz(a) ((int) (a).size())
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int> >
#define vll vector<long long>
#define vvl vector<vector<long long> >
#define mll map<long long, long long>

void solve(){
        int n;
        cin >> n;
        vll v(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
        }
        ll ans = LLONG_MAX;
        int i=0;
         while(i<n) {
        int j = i;
        while (j+ 1 <n && v[j + 1]==v[i]) j++;
        ll temp= v[i];
        ll cost = temp*(i + (n - 1 - j)); 
        ans = min(ans,cost);
        i= j + 1;
    }
    cout<<ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);int tt;cin>>tt;
    while(tt--){
        solve();
        cout<<endl;
    }
    return 0;
}
