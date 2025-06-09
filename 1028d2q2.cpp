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
vector<long long> pow2 = {1};
const ll mod = 998244353;

void solve() {
    int n; cin >> n;
    vi a(n), b(n);
    vi posA(n), posB(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        posA[a[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        posB[b[i]] = i;
    }

    if ((int)pow2.size() <= n) {
        int prev = pow2.size();
        pow2.resize(n + 1);
        for (int i = prev; i <= n; i++) {
            pow2[i] = (pow2[i - 1] * 2) % mod;
        }
    }

    vi maxA(n), maxB(n);
    maxA[0] = a[0];
    maxB[0] = b[0];
    for (int i = 1; i < n; i++) {
        maxA[i] = max(maxA[i - 1], a[i]);
        maxB[i] = max(maxB[i - 1], b[i]);
    }

    vi res(n);
    for (int i = 0; i < n; i++) {
        int mx = max(maxA[i], maxB[i]);
        int val;
        if (maxA[i] > maxB[i]) {
            int j = posA[mx];
            int k = i - j;
            val = b[k];
        } 
        else if (maxB[i] > maxA[i]){
            int k = posB[mx];
            int j = i - k;
            val = a[j];
        } 
        else {
            int x = posA[mx];
            int y = i - x;
            int z = posB[mx];
            int w = i - z;
            int v1 = (y >= 0 && y < n) ? b[y] : -1;
            int v2 = (w >= 0 && w < n) ? a[w] : -1;
            val = max(v1, v2);
        }
        res[i] = (pow2[mx] + pow2[val]) % mod;
    }

    for (int i = 0; i < n; i++) cout << res[i] << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    while (tt--) {
        solve();
        cout << "\n";
    }
    return 0;
}

    
