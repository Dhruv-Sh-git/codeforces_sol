#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    vector<string> ans;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (v[j]+1< 2 * (n - j)) {
                // count++;
                if(j>n/2){
                    if(v[j]+1<2*j){
                        count++;
                    }
                }
                else
                count++;
            }
        }

        if (count > 0) {
            ans.push_back("NO");
        } 
        else {
            ans.push_back("YES");
        }
    }

    for (const string &ca : ans) {
        cout << ca << endl;
    }

    return 0;
}
