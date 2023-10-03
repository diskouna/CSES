#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int a, b;  
    while (t--) {
        cin >> a >> b;
        int64_t d1 = (2LL * a - b);
        int64_t d2 = (2LL * b - a);
        // d2 = d1 - 3*(a - b)
        if ( d1 % 3 == 0 && d1 >= 0 && d2 >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}