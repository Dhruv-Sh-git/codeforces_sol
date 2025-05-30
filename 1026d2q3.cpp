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

bool inRange(int val, int l, int r){
    return val>= l && val <= r;
}

vi cases(int n, vi &a, vpii &ranges){
    vi ans = a;
    int sum = 0;
    for (int i=0;i<n;i++){
        int l = ranges[i].first, r = ranges[i].second;
        if (ans[i]== -1){
            if (inRange(sum + 1,l,r)){
                ans[i]= 1;
                sum+= 1;
            }
            else if (inRange(sum,l,r)){
                ans[i]=0;
            }
            else{
                return {-1};
            }
        } else{
            sum += ans[i];
            if (!inRange(sum, l, r)){
                return {-1};
            }
        }
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    vi a(n);
    for (int &x : a) cin >> x;

    vpii ranges(n);
    for (int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        ranges[i] = {l,r};
    }
    vi res = cases(n,a,ranges);
    if(res.size()==1 && res[0]==-1){
        cout<< -1;
    } else{
        for(int x : res) cout <<x<<" ";
    }
}

int main() {
    int tt;
    cin>>tt;
    while(tt--){
    solve();
    cout<<endl;
}
    return 0;
}
