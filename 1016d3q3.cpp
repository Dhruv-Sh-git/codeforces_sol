/***********
 DHRUV KA CODE
***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()  
#define L(i,x,n) for(ll i=x;i<n;i++)
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

int isPrime(ll num) {
  if (num < 2) return false;
  ll i=2;
  while((i*i) <=num){
      if (num%i== 0) return 0;
      i++;
  }
return 1;
}
void solve(){
  ll n,k;
  cin>>n>>k;
  //YE CASE CHOOT RHA THA!
  if(n!=1 && k>1){
    cout<<"NO"<<"\n"; return;
  }
  //normal case 
  if(k==1){
    if(isPrime(n))
    cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return;
  }
  //only for 11
  if(n==1){
    if(k==2){
        cout<<"YES"<<endl; 
        return;
    }
    else cout<<"NO"<<endl;
  }
  
}
int main() {
  int t;
  cin>>t;
  while(t--){
    solve();
    }
    return 0;
}