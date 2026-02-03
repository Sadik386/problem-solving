#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,z=0;
    cin >> t;
    string  a;
   cin >> a;
    for (int i = 0; i < t; i++)
    {   
        if (a[i] == a[i+1])
        {
         z++;
        }  
        
    }
    cout << z;
    
    
   
}