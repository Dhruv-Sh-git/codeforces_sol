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

void solve() {
    int n;
    cin >> n;
    int k = 0;
    if (n % 2!= 0){
        cout<<2*(n - 1)<<endl;
        for (int i = 2; i <= n; ++i) {
            cout << i << " " << 1 << " " << (n - i + 2) << endl;
            cout << i << " " << 2 << " " << n << endl;
        }
    } else{
        cout<< 1 + 2 * (n - 2)<<endl;
        for (int i = 2; i <= n; ++i) {
            if (i == 2) {
                cout << i << " " << 1 << " " << n << endl;
            } else if (i % 2 != 0){
                cout << i << " " << 1 << " " << (n - i + 2) << endl;
                cout << i << " " << 2 << " " << n << endl;
            } else {
                cout << i << " " << (i - 1) << " " << n << endl;
                cout << i << " " << 1 << " " << (i - 2) << endl;
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);int tt;cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
