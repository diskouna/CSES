#include<bits/stdc++.h>

using namespace std;
 
int dp[(int)1e6];

int mod = (int)1e9 + 7;

int main()
{
/*
 *  j <= i
 *  dp (i, j)  =  dp(i-j, 0) * sum (dp(j-k, j-k) : k : 1..j-1)
 *  		+              sum (dp(  i, j-k) : k : 1..j)
 * 
 *  dp(i, 0) = 2 ^ (i - 1)
 *
 *  return dp(n, n)
 *
 */			
        for (int i = 1; i <= (int)1e6; ++i) { 
		cout << dp[i-1] << ", "; 
	}

	return 0;
}
