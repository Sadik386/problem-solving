#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int up =0,low=0;

   string a;
   cin >> a ;
   for (int i = 0; i < a.length(); i++)

   {
    if (a[i] <'z')
    {
        up ++;
    }
    else{
        low ++;
    }
    
   }
   if (up > low)
   {
    for (int i = 0; i < a.length() ; i++)
    {
        a[i] = toupper(a[i]);
        cout << a[i];
    }
    
    
}
else
{  
    for (int i = 0; i < a.length() ; i++)
{
    a[i] = tolower(a[i]);
    cout << a[i];
}
}
   
   
}