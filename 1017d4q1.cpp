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
    string read;
    getline(cin,read);
    stringstream ss(read);
    string a;
    while(ss>>a){
        cout<<a[0];
    }
    cout<<"\n";
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