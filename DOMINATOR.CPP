#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF (int)1e18
 
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
 
void Solve() 
{
    int n; cin >> n;
    
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    
    vector <int> f(10, 0);
    for (int i = 0; i < n; i++){
        f[a[i]]++;
        
        if (f[0] >= 3 && f[1] >= 1 && f[2] >= 2 && f[3] >= 1 && f[5] >= 1){
            cout << (i + 1) << '\n';
            return;
        }
    }
    
    cout << 0 << "\n";
}
 
int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}