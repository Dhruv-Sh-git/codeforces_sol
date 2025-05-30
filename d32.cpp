#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<array<int, 4>> a(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int target = a[i][0];
        int count = 0;
        int round = a[i][1] + a[i][2] + a[i][3];
        int step = 3;
        if (target > round) {
            int fullCycles = target / round;
            count += fullCycles * step;
            target -= fullCycles * round;
        }
        for (int j = 1; j <= 3 && target > 0; j++) {
            target -= a[i][j];
            count++;
        }
        cout <<count<< endl;
    }

    return 0;
}
