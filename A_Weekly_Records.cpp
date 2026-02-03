#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,x ,y;
    cin >> t;
    x=t*7;
while (t--)
{
    int ans=0;
    for (int i = 0; i < 7; i++)
    {
      cin >>y;
      ans = ans +y;
    }
    cout << ans << "\n";;
}

    
    return 0;
}