#include <bits/stdc++.h>
using namespace std;

int main() {
    int l;
    cin >> l;

    int n[l + 1];

    int one = INT_MAX, two = INT_MAX, three = INT_MAX;
    int onei = -1, twoi = -1, threei = -1;

    for (int i = 1; i <= l; i++) {
        cin >> n[i];

        if (n[i] < one) {
            three = two;   threei = twoi;
            two = one;     twoi = onei;
            one = n[i];    onei = i;
        }
        else if (n[i] < two) {
            three = two;   threei = twoi;
            two = n[i];    twoi = i;
        }
        else if (n[i] < three) {
            three = n[i];  threei = i;
        }
    }

    cout << onei << " " << twoi << " " << threei;
    return 0;
}
