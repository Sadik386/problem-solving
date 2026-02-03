
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int b;
 
    string a;
    
    cin >> a;
    for (int i = 0; i < a.length(); i++)
 
    {   b = a[i]- '0';
        if ( b >= 5 &&!(i == 0 &&    b == 9)) //(i != 0 || 9 - b != 0))
        {
            cout << 9-b;
        }
       else {
            
            cout << b ; 
        }
    }
        
        
    }





//     for (int i = 0; i < a.length(); i++) {
//     int d = a[i] - '0';

//     // Only invert if it strictly reduces the digit
//     // AND it does not make the first digit zero
//     if (9 - d < d && !(i == 0 && d == 9)) {
//         cout << 9 - d;
//     } else {
//         cout << d;
//     }
// }

    
 
    