#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;

        int arr[10];      // to store round numbers
        int cnt = 0;      // number of round numbers
        int place = 1;    // 1, 10, 100, ...

        while (a > 0)
         {  
            int digit = a % 10;
            if (digit != 0) {
                arr[cnt] = digit * place;
                cnt++;
            }

            a /= 10;
            place *= 10;
        }

        cout << cnt << "\n";
        for (int i = 0; i < cnt; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
