#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n; cin>>n;
    string a; cin>>a;
    string b; cin>>b;
    int odd1=0,even1=0,odd2=0,even2=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            if(i%2) odd1++;
            else even1++;
        }
        if(b[i]=='0'){
            if(i%2) odd2++;
            else even2++;
        }
    }
    // cout<<odd1<<" "<<even1<<" "<<odd2<<" "<<even2<<endl;
    if(odd1<=even2 && even1<=odd2) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
    return;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
return 0;
}