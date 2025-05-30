#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >>n >>m>>k;
        
        vector<int> a(m);
        for (int i = 0; i < m; i++) {
            cin>>a[i];
        }

        set<int> kn;
        for (int i = 0; i < k; i++) {
            int q;
            cin>>q;
            kn.insert(q);
        }
        string result = "";
        for (int i = 0; i < m; i++) {

            if (kn.find(a[i]) == kn.end()) {
                result+='1';
            } else {
                result+='0';
            }
        }
        cout<<result<<endl;
    }

    return 0;
}
