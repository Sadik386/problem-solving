#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int a[5] = {10, 100, 1000, 10000, 100000};

    while (t--) {
        int b;
        cin >> b;

        vector<int> res;

        for (int i = 0; i < 5; i++) {
            int digit = (b % a[i]) / (a[i] / 10);

            if (digit != 0) {
                res.push_back(digit * (a[i] / 10));
            }
        }

        cout << res.size() << "\n";
            for (int x : res) {
                cout << x << " ";
            }
            cout << "\n";
    }
}
