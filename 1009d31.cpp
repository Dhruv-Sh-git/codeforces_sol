#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && c==d && b==c && a!=0){
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}

int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }

    return 0;
}