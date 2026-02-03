    #include <bits/stdc++.h>
    using namespace std;
    int main (){
        int n;
        cin >> n ;
        for (int i = 1; i <= n; i++)
        {
            for (int space = 0; space < n - i; space++)
            {
                /* code */
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                /* code */
                cout << "* ";
            }
            
            cout << "\n"; 
        
        }

    }