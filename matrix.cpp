#include <bits/stdc++.h>
using namespace std;
int main(){
    int ai =0 ,aj=0,n,move=0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
             cin >> n;
             if(n==1){
                ai = i;
                aj = j;
                
             }
        }
        cout << "\n";
        
    }
    
    move =abs(3-ai)+abs(3-aj);
    cout << move ;

   
}