#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    
    int t;
    cin >> t;
    while (t--) {
      ll n;
      cin>>n;
      if(n%2==0) cout<<-1<<endl;
      else{
        vector<ll>a(n+1);
    for(int i=1;i<n+1;i++){
        if((2*(i+1))%n==0) a[i]=n;
        else a[i]= (2*(i+1))%n;
    }
    for(int i=1;i<n+1;i++) cout<<a[i]<<" ";
    cout<<endl;
          }
    }
        return 0;
}