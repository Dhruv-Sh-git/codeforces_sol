#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<int> arr(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum - (n-1)<<endl;
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