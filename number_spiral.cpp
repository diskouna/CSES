#include<bits/stdc++.h>
using namespace std;
 
int t;
uint64_t x, y, res;
int main()
{
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> y >> x;    
        if (y < x) {
            if (x % 2 == 0) {
                res = (x - 1) * (x - 1) + 1;
                res += (y - 1);
            } else {
                res = x * x;
                res -= (y-1);
            }
        } else {
            if (y % 2 == 0) {
                res = y*y;
                res -= (x - 1);
            } else {
                res = (y-1) * (y-1) + 1;
                res += (x - 1);
            }
        }
      
        cout << res << '\n';
    }   
    return 0;
}