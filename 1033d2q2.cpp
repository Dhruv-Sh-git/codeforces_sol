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
    int n,s;cin>>n>>s;
    int ans=0;
    L(i,0,n){
        int dx,dy,xi,yi;
        cin>>dx>>dy>>xi>>yi;
        if(dx==dy && (xi-yi)%s==0) ans++;
        else if((xi+yi)%s==0) ans++;
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
