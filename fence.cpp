#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,h,width=0,a,b,c ;
    

    cin >> t >> h;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        if (a > h)
        {
            width+=2;
        }
        else{
            width++;
        }
    }
    
    // while(t--){
    //     cin >> a;
    //     if(a > h)
    //     {
    //         width+=2;
    //     }
    //     else{
    //         width++;
    //     }
        
    // }
    cout << width;

    return 0;
}