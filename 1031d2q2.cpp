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
    ll w, h, a, b;
    cin>>w>>h>>a>>b;
    ll x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    bool hei = false;
    if ((y1-y2)%b==0){
        if (y1 == y2){
            if ((x1 - x2) % a == 0) hei = true;
        }else {
            hei=true;
        }
    }

    bool wid = false;
    if ((x1-x2)%a==0){
        if (x1==x2){
            if ((y1-y2)%b==0) wid = true;
        } else wid = true;
    }
    if (hei||wid) cout<<"YES";
    else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
        cout<<endl;
    }

   return 0;
}