    #include <iostream>
    using namespace std;
    int main(){
        int n,a,b,c,ans= 0 ;
        cin >> n;
        while (n--)
        {
            /* code */
            cin >> a >> b >> c;
            int sum = a+b+c ;
            if (sum >= 2){
                ans++;
            }
        

        }
        cout << ans ;
        
    }


//     //#include <iostream>
// using namespace std;
// int main(){
//     int n,a,b,c,ans= 0 ;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin >> a >> b >> c;
//         int sum = a+b+c ;
//         if (sum >= 2){
//             ans++;
//         }
    

//     }
//     cout << ans ;
    
// }//