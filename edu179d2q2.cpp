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

bool canfit(vi& cubes, int W, int L, int H){
    int n = cubes.size();
    vi sortc = cubes;
    sort(sortc.rbegin(), sortc.rend());
    int total_h = 0;
    for (int c : sortc){
        total_h += c;
    }
    int big = sortc[0];
    if (big <= min(W, L) && total_h <= H) {
        return true;
    }
    int t_area = 0;
    int max_h = 0;
    bool all = true;
    
    for (int c : sortc) {
        t_area += c*c;
        max_h = max(max_h, c);
        if (c > min(W, L)) {
            all = false;
        }
    }
    
    if (all && t_area <=W*L&&max_h <= H) {
        return true;
    }
    if (n>=2){
        int bottom = sortc[0];
        if (bottom<= min(W, L) && bottom<=H){
            int remaining = H - bottom;
            vi remaining_cubes(sortc.begin() + 1, sortc.end());
            int baki = 0;
            for (int c : remaining_cubes){
                baki += c;
            }
            
            if (remaining_cubes[0] <= min(W, L) && baki<= remaining){
                return true;
            }
            int rem_area = 0;
            int rem_max = 0;
            bool rem_fit = true;
            for (int cube : remaining_cubes) {
                rem_area += cube * cube;
                rem_max = max(rem_max, cube);
                if (cube > min(W, L)) {
                    rem_fit = false;
                }
            }
            if (rem_fit && rem_area<= bottom*bottom && 
                rem_max<= remaining){
                return true;
            }
        }
    }   
    return false;
}
void solve(){
    // Precompute
    vi fib(11);
    fib[1] = 1;
    fib[2] = 2;
    for (int i =3; i<= 10; i++) {
    fib[i] = fib[i-1] + fib[i-2];
    }
    int n,m;
    cin >> n >> m;
    vi cubes;
    for (int i = 1; i <= n; i++) {
            cubes.push_back(fib[i]);
        }
    string result = "";
    for (int i = 0; i<m; i++) {
    int w, l, h;
    cin >> w >> l >> h;
    if (canfit(cubes, w, l, h)) result += '1';
    else result += '0';
    }
        cout<<result;
    }
    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while (tt--) {
        solve();
        cout << endl;
}
return 0;
}