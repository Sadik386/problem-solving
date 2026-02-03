#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // faster input/output
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0; // read number of problems; safe-guard if no input

    int ans = 0; // counter for problems they will implement

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;      // read three integers (0 or 1)
        int sum = a + b + c;     // count how many are sure
        if (sum >= 2) {
            ++ans;               // if at least two are sure, increment result
        }
    }

    cout << ans << '\n';        // print the final answer
    return 0;
}
                                                                