#include<bits/stdc++.h>
using namespace std;
 
/*
    - - - - - - 1
    - - - - - - 2
    - - - - - - 3
    - - - - - -
    - - - - - -
    - - - - - - n
knight at cell(#row = j, #col=i) can attack 
(1 <= i + 2 <= n && 1 <= j + 1 <= n) *  1 +
(1 <= i - 2 <= n && 1 <= j + 1 <= n) *  1 +
(1 <= i + 1 <= n && 1 <= j + 2 <= n) *  1 +
(1 <= i - 1 <= n && 1 <= j + 2 <= n) *  1
cells below its position.
 
#attacks ways : 4 * (n>=3) *(n-2) *(n-1) 
#ways : (n²-1) + (n²-2) + ... +1 = n²(n²-1)/2
*/
 
int n;
int main()
{
    cin >> n;
    uint64_t res = 0;
    cout << res << '\n';
    for (int i = 2; i <= n; i++) {
        res = 1ULL * i * i;
        res = res * (res - 1) / 2;
        res -= (i>=3)*4ULL*(i-2)*(i-1);
        cout << res << '\n';
    }
   
    return 0;
}