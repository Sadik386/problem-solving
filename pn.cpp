    #include<bits/stdc++.h>
    using  namespace std;
    int main(){
    int n;
    cin>>n;
    string x = "YES";
    for(int i=2;i< n;i++){
    if(n%i == 0){
        x = "NO";
        break;}
    }

    

    cout << x << endl;
    }

