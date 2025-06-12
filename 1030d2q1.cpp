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
    int n,k;
    cin>>n>>k;
    string result="";
    for(int i = 0; i <k; i++) result += '1';
    for(int i = 0; i <n-k; i++) result += '0';
    for(char c:result) cout<<c;
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