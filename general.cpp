    #include <bits/stdc++.h>
    using namespace std;
    int main(){

        int a,min=INT_MAX,max=0,mini=0,maxi=0,n,x,y;

        cin >> n;

        for(int i = 1;i <= n;i++){  
            cin >> a;
            if(a>max){
                maxi=i;
                max = a;
            }
            if(a <= min){
                mini = i;
                min = a ;
            }
            if(maxi > mini ){
                x =maxi-1;
                y = n -(mini+1);
            }
            else{
                x= maxi-1;
                y =n-mini;
            }
        }


        cout << x+y;

    }