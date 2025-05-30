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
  string p,s;
  cin>>p>>s;
    int i=0,j=0;
 while(i<p.size()){
  char c=p[i];

  //frequency of p and s
  int pfreq=0;
  int sfreq=0;
  if( j>s.size()||s[j]!=c){
    cout<<"NO"<<endl;
    return;
    }
  while(i<p.size() && p[i]==c){
      pfreq++;
      i++;
  }
  while(j<s.size() && s[j]==c){
      sfreq++;
        j++;
  }
  if(sfreq>2*pfreq || sfreq<pfreq){
    cout<<"NO"<<endl;
    return;
  }
}
//check full traversal
if (i<p.size() || j<s.size())
  cout<<"NO"<<endl; 
  else 
  cout<<"YES"<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);int tt;cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}