// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//         cout << "at index " << i << " value is " << arr[i] << "\n";
//     };

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

  int numbers[n];

  cout << "Enter " << n << " numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
   
  }
  cout << "You entered: " ;
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] ;
    }

    return 0;
}