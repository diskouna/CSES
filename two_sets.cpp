#include<iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    if (n%4==0) {
        cout << "YES\n";
        cout << n/2 << '\n';       
        for (int i = 1; i <= n/4; i++)
            cout << i << ' ';
        for (int i = 1 + 3*n/4; i <= n; i++)
            cout << i << ' ';           
        cout << '\n';
        
        cout << n/2 << '\n';       
        for (int i = 1 + n/4; i <= 3*n/4; i++)
            cout << i << ' ';
      
    } else if ((n+1)%4==0) {
        cout << "YES\n";
        cout << n/2 << '\n';        
        for (int i = 1; i < (n+1)/4; i++)
            cout << i << ' ';
        for (int i = 3*(n+1)/4; i <= n; i++)
            cout << i << ' ';      
        cout << '\n';
        
        cout << (n+1)/2 << '\n';       
        for (int i = (n+1)/4; i < 3*(n+1)/4; i++)
            cout << i << ' ';
            
    } else {
        cout << "NO";
    }
    return 0;
}