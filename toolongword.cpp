#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a ;

    int t ;
    cin >> t;
    while(t--){
        cin >> a;
       if (a.size() > 10)
       {
           cout << a[0]<< a.size()-2<<a[a.size()-1];
           cout << "\n";
        
       }
       else
       {
        cout << a << "\n" ;

       }
       
    }
    return 0;
}