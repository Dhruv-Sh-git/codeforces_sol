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
    
    int count1=0,count0=0;
    string s; cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1') count1++;
        else count0++;
    }
    int pairs = n/2;
    int neg = pairs-k;

    if (count0<neg||count1<neg){
        cout << "NO";
        return;
    }
    int p0 = (count0-neg)/2;
    int p1 = (count1-neg)/2;
    int req = p0+p1;
    if (req<k) {
        cout << "NO";
    } 
    else{
        cout << "YES";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);int tt;cin>>tt;
    while(tt--){
        solve();
        cout<<endl;
    }
    return 0;
}