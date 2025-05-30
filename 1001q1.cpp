#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> count(t, 0);
    
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        for (char a : s) {
            if (a == '1') {
                count[i]++;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        cout<<count[i]<<endl;
    }

    return 0;
}
