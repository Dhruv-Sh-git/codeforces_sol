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
    int n;
    cin>>n;
    string s; cin>>s;
    int less=0,great=0;
    for(int i=0;i<s.size();i++)
    {if(s[i]=='>'){
            great++;
        }
        else{
        less++;
        }
}
    
    if(s[0]=='>'){
        great++;
    }
    else{
        less++;
    }
    vi a;
    vi b;
    // cout<<great<<" "<<less<<endl;
    for(int i=less;i>0;i--){
       a.pb(i);
    }

    for(int i=(less+1);i<=n;i++){
        b.pb(i);
    }
    // for(int i=0;i<b.size();i++){
    //     cout<<b[i];
    // }
    int count=0,count2=0;
    if(s[0]=='>'){
        cout<<b[0]<<" "<<b[1]<<" ";
        count+=2;
    }
    if(s[0]=='<'){
        cout<<a[0]<<" "<<a[1]<<" ";
        count2+=2;
    }

    for(int i=1;i<(n-1);i++){
        if(s[i]=='>'){
            cout<<b[count]<<" ";
            count++;
        }
        else
        {
            cout<<a[count2]<<" ";
            count2++;
        }
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