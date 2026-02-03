#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  a,b,year ;
    cin >> a>>b;
    int bean =a,tot_bean=0;
    for (int i = 0; i <10000000 ; i++)
    { 
       
        tot_bean=tot_bean+bean;
        bean ++;
       ;
        if (tot_bean >= b)
        {
            year =i;
            break;
        }
        
        
    }
    cout<<year;
    
    
   
    return 0;
}