#include <bits/stdc++.h>
using namespace std;
#include <vector>
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }
    cout << "Array elements are: ";
   for(int x= 0; x < n; x++){
    cout << arr[0]+arr[1];
   } 
//    cout << arr[4];   
    return 0;
}