#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ,a[4];
    cin >> t;
  while (t--)
  {
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    if (a[0] ==a[1] && a[2]==a[3] && a[0]==a[2] && a[1]==a[3])
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    
  }
  
   
    return 0;
}