#include <bits/stdc++.h>
 
using namespace std;
 
/*
      Let Sn be the string created by the concatenation of numbers of
      #n digits sorted in increasing order.
      
      S1 = "0 1 2 3 4 5 6 7 8 9"
      S2 = "00 01 02 03 ...94 95 96 97 98 99"
      ...
      Let's d(n, m) be the digit at position m (0-indexed) in Sn
      d(n, m) is only defined for 0 <= m <= n * (10 ^ n) - 1
 
      d(n, m) = digit_at_pos(n, m)       
*/
uint64_t pow_10[] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000,100000000000,1000000000000,10000000000000,100000000000000,1000000000000000,10000000000000000,100000000000000000 };
 
int digit_at_pos(int n, uint64_t m)
{
	if (m % n == 0)
		return m / n / pow_10[n-1];
	else {
	       m = m %   (n * pow_10[n-1]); 
	       return digit_at_pos(n-1, m - m/n - 1);
	}
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int q;
    cin >> q;
    uint64_t k;
    while (q--) {
        cin >> k;
	int n = 1;
	while (k >= 9 * n * pow_10[n-1]) {
		k -= 9 * n * pow_10[n-1];
		n++;
	}
 
	cout <<  digit_at_pos(n, pow_10[n-1] * n  + k - 1) << '\n';
    }
 
   return 0;
}