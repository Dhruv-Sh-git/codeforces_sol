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
int trim(vi& arr){
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start < n && arr[start] == 0) {
        start++;
    }
    while (end >= 0 && arr[end] == 0) {
        end--;
    }
    if (start > end) return 0;
    arr = vector<int>(arr.begin() + start, arr.begin() + end + 1);
    return arr.size();
}

void solve(){
    int n,x;
    cin>>n>>x;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int news = trim(a);
    if(news<=x) cout<<"YES";
    else cout<<"NO";
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
