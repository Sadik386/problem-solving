#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int y = 0;
    
    
    int x[t];
    for (int i = 0; i < t; i++) {
        cin >> x[i];
    }
    
    int max = x[0];
    int min = x[0];

    for (int i = 1; i < t; i++) {
        if (x[i] < min) {
            min = x[i];
            y++;
        }
        else if (x[i] > max) {
            max = x[i];
            y++;
        }
    }

    cout << y;
    return 0;
}
