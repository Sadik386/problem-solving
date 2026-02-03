#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool fl = true;
    int t,x ;
   string s,p;
   cin >> s>>p;

   while (t--)
   {
     cin >> x;
    for (int i = s.size() - 1, j = 0; i >= 0&&j<s.size(); i--, j++) {                        // reverse. for shortcut
      if (s[i] != p[j] || s.size() != p.size()) {
          fl = false;
          
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
   



      
      
    
   
   
}