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

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve() {
    int n;
    cin>>n;
    vi a(n);
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int mini=n;
    int eveo=-1,evel=-1;
    for (int i=0;i<n;i++){
        if(a[i]%2==0){
            if (eveo==-1) eveo = i;
            evel = i;
        }
    }
    if (eveo!=-1){
        int ops =eveo + (n - 1 - evel);
        mini =min(mini, ops);
    }
    int oddo=-1,oddl=-1;
    for (int i =0;i<n;i++){
        if (a[i] % 2 == 1){
            if (oddo == -1) oddo = i;
            oddl = i;
        }
    }
    if (oddo!=-1){
        int ops =oddo+ (n - 1 - oddl);
        mini =min(mini, ops);
    }

    cout<<mini;
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