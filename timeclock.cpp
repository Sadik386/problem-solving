#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H,M;


    cin >> H >> M;

    float angle = (11.0 * M - 60.0 * H ) / 2.0;
    if (angle < 0) {
        angle = 360.0 + angle;
    }
     
    if (angle > 180.0) {
        angle = 360.0 - angle;
    }
    
    cout << fixed << setprecision(6) << angle << "\n";

    return 0;
}