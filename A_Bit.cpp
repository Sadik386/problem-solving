#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,x=0;
    string a;
    cin >> n;
    while (n--)
    {
       cin >> a ;
       if(a == "++X" || a == "X++"){
        x++;
       }
       else if (a == "--X" || a == "X--")
       {
        x--;
       }
    }
    cout << x;
    
}