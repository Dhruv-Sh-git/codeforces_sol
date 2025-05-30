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
    vll arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll first=abs(arr[0]); 
    int less=0;
    int great=0;
    
    for (int i=1;i<n;i++){
        ll c=abs(arr[i]);
        if (abs(arr[i])<first){
            less++;
        }
        else if(abs(arr[i])>first){
            great++;
        }
    }
    int mid=(n+ 1)/2;
    if (less<=(mid-1)||great>=(mid-1)){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
        cout<<endl;
    }
    
    return 0;
}