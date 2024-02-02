#include<bits/stdc++.h>
using namespace std;
#define  mod  (1000000007)
uint64_t n, res, a = 2;
 
int main()
{
    cin >> n;
    if (n < 64) {
        cout << (1ULL << n) % mod << '\n';
        return 0;
    }
    res = (1ULL << 63) % mod;
    n -= 63; 
    while (n != 0) {
        if (n & 1) {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        n >>= 1;
    }
    cout << res << '\n';
    return 0;
}