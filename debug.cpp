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
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int ans=n-m;
    
    while(ans){
        if(l<0){
        l++;
        if(ans!=0){
        ans--;
        }
        }
        if(ans!=0){
        ans--;
        if(r>0)
        r--;
        }
        
        }
    cout<<l<<" "<<r<<"\n";
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