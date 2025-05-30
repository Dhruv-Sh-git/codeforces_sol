#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r; 

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i]; 
        }

        sort(v.begin(), v.end());

 
        int sum = 0;


        for (int i = 0; i < r-l+1; i++) {
            sum += v[i];
        }

        cout << sum << endl;
    }

    return 0;
}