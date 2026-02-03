#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int c,d;


        for (int i = 0; i < a.length(); i++)
        {
           if (a[i] >= 'a' && a[i] <= 'z')
           {
            c= a[i]-32;
           }
           else{
            c = a[i];
           }
           if (b[i] >= 'a' && b[i] <= 'z')
           {
            d= b[i]-32;
           }
           else{
            d = b[i];
           }
           
            if (c < d)
            {
                cout << -1;
                return 0 ;
            
            }
            else if (c > d)
            {
                cout << 1;
                return 0;
                
            }
            
        }
        
            cout << 0;
            return 0;
         
    
       

    
        
    }
  
    

    
 