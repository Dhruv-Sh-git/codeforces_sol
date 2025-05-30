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

void solve() {
    int n;
    cin>>n;
    vvi a(n, vi(n));
    for(int i= 0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    vi b;
    for(int j=0;j<n;j++) {
        b.pb(a[0][j]);
    }
    for(int i=1;i<n;i++) {
        b.pb(a[i][n - 1]);
    }

    // Output the result
    // for(int i = 0; i < b.size(); i++) {
    //     cout << b[i] << " ";
    // }
    int sum=0;
    for(int i=0;i<b.size();i++){
        sum+=b[i];
    }
    int miss = n+2*(n*n)-sum;
    b.insert(b.begin(), miss);
    for(int i = 0; i < b.size(); i++) {
         cout << b[i] << " ";
     }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);int tt;cin>>tt;
    cin.ignore();
    while(tt--){
        solve();
    }
    return 0;
}