#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < n; i++) {
        if (p[i].first < p[i].second) {
            cout << "no" << endl;
        } else {
            if ((p[i].first - p[i].second) % 2 == 0) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}
