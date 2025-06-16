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
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
         ll maxi= 0;
    if (k >= a) {
        ll cnt1 =(k-a)/x +1;
        ll rem =k-cnt1*x;
        ll cnt2 = (rem>=b)?(rem-b)/y+1:0;
        maxi = cnt1 + cnt2;
    }
    if (k>=b){
        ll cnt2 = (k - b) / y + 1;
        ll rem = k - cnt2 * y;
        ll cnt1 = (rem>= a) ? (rem- a) / x + 1 : 0;
        maxi = max(maxi, cnt1 + cnt2);
    }
    cout << maxi;
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