#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ,x=0,a;
      cin >> t;
//    a = ceil(t/5.0);
//    cout << a;
if (t % 5 == 0 )
{
  a = t /5;
}
else{
    a=(t/5)+1;
}

cout << a;
}
