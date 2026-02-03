#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long product = a * b * c * d;

    long long last_two_digits = product % 100;  // last two digits
    long long tens = last_two_digits / 10;      // tens digit
    long long ones = last_two_digits % 10;      // ones digit

    cout << tens << ones ;

    return 0;
}
