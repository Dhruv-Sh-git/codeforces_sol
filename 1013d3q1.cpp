#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
int findNth(const vector<int>& arr, int n = 3, int x = 0) {
    int count = 0;
    
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            count++;
            if (count == n) {
                return i; // Return the index of the nth zero
            }
        }
    }
    
    return -1; // Return -1 if the nth zero doesn't exist
}
void solve(){
    //"01032025";
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b;
    int max=0;
    b.pb(findNth(a,3,0));
    b.pb(findNth(a,1,1));
    b.pb(findNth(a,2,2));
    b.pb(findNth(a,1,3));
    b.pb(findNth(a,1,5));
    //find the maximum of the 5 indexes
    for(int i=0;i<5;i++){
        if(b[i]==-1){
            cout<<0<<endl;
            return;
        }
        else if(b[i]>max)
        max=b[i];
    }
    cout<<max+1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
