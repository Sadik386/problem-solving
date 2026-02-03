#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> num;
    int n;

    cin >> n;              // how many strings to read
    num.resize(n);

    for (string & x : num) {
        cin >> x;
    }
    cout << num[0][0]+num[0][1];

    for (auto &s : num) {
        cout << s[0] + s[1];
    }
}
