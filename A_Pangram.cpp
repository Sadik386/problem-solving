// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t,z=0;
//     cin >> t;
//     string  a;
//     cin >> z >> a;
   
    
//    int arr[26] ={0};
//    for (int i = 0; i < z; i++)
//    {
//     char ak;
//     ak=tolower(a[i]);
//     arr[ak -'a']++;
//    }
//    bool fl = true;
//    for (int i = 0; i < 26; i++)
//    {
//      if (arr[i]==0)
//      {
//         fl = false;
//      }
     
//    }
//    if (fl)
//    {
//     cout << "NO";
//    }
//    else
//    {
//     cout << "NO";
//    }
   
   
   
   
    
    
   
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    string a;
    int arr[26]={0};
    cin >> t >>a;
    for (int i = 0; i < t; i++)
    {
        char ak;
        ak = tolower(a[i]);
        arr[ak -'a']++;
    }
    bool fl = true;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            fl = false;
            break;
        }
        
    }
    if (fl)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    
    
}