    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string a,c,e;
        int b,d,f,num1=0,num2=0,ans,num3=0,g;
        cin >> a >> c;
        for (int i = 0; i < a.length(); i++)
        {
            b= a[i] - '0';
            if(b != 0){

                num1 = num1*10 + b ;
            }
        
        }
        for (int i = 0; i < c.length(); i++)
        {
            d= c[i] - '0';
            if(d != 0){
                num2 = num2*10 + d ;
                
            }

        }
        ans = stoi(a) + stoi(c);
        e = to_string(ans);
        for (int i = 0; i < e.length(); i++)
        {
            f= e[i] - '0';
            if(f != 0){

                num3 = num3*10 + f ;
            }
            
        }
     
          if(num3 == num1 + num2){      
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
        
    } 
        

    