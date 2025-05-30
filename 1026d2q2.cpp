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
#define vs vector<string>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int> >
#define vll vector<long long>
#define vvl vector<vector<long long> >
#define mll map<long long, long long>

bool canwe(const string &arr) {
    int a= 0;
    int count = 0;

    for (char ch : arr) {
        if (ch=='(') a++;
        else if (ch==')') a--;

        if (a==0){
            count++;
            if (count>1) return true;
        }
    }
    return false;
}

void solve() {
    string s;
    cin>>s;
    if(canwe(s)){
        cout<<"YES";
    }
    else
    cout<<"NO";
    
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