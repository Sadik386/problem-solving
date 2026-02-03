#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int dot =0;
    string t;

    cin >> t;
    
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i]== 'i' || t[i]=='j')
        {
           dot++; 
        }
        
    }
    cout << dot;
    
    return 0;
}