
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string a;
    int b[2]={0};

    cin >> a;
    
   
    for (int i = 0; i <= a.size()-1; i++)
    {
        if (a[i]  == '4' )
        {   b[0]++;
           
            continue;
        }
        if (a[i]  == '7' )
        {
            b[1]++;
           
            continue;
        }       
    }
    
    
    
    if ( b[0]+b[1]==4 || b[0]+b[1]==7 )
    {
        cout << "YES";
    }
    else
    {
        cout <<"NO";
    }
    
    
    
}
