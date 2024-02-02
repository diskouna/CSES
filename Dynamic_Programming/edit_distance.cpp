#include<bits/stdc++.h>

using namespace std;
 
int dp[5001][5001];

int main()
{
    string A, B; 
    cin >> A >> B;
 
    int n = A.size();
    int m = B.size();

    //dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
        dp[i][0] = i;
    for (int j = 1; j <= m; j++)
        dp[0][j] = j;
        
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (A[i-1] == B[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min( 
                 dp[i-1][j-1], // replace
                 min (
                  dp[i-1][j],  // add || remove
                  dp[i][j-1]   // add || remove
                 )
                );          
            }
        }
    }
    
    cout << dp[n][m];

    return 0;
}
