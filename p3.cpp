// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n ; i ++){
//         cin >> i;
       
//     }

//     for (int i = 1; i <= n ; i++){

    
//     }

//     cout << "maximum number is: " << n  << "\n";
//      if(n > i){
//         cout << n ;
//     } 
     
  

   
//    }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,one=INT_MAX,two=INT_MAX,three=INT_MAX,onei,twoi,threei,fouri,four=INT_MAX;
    cin >> l;

    int n[l];  // array size after input

    for (int i = 1; i <= l; i++) {
        cin >> n[i];
        if (n[i] < one && n[i] < two  && n[i] < three && n[i] < four)
        {
            one= n[i];
            onei = i;
        }
        if (n[i]> one && n[i] < three && n[i] < four)
        {
            two = n[i];
            twoi=i;
        }
          if (n[i]>one  && n[i] > two && n[i] < four)
        {
            three = n[i];
            threei=i;
        }
          if (n[i]>one  && n[i] > two && n[i] > three  )
        {
            four = n[i];
            fouri=i;
        }
                    
        
        
    }

  cout <<onei<<twoi<<threei;

    return 0;
}
