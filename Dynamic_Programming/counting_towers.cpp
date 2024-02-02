#include <bits/stdc++.h>


using namespace std;

int dp[(int)1e6];

int main(void)
{
	int t;
	cin >> t;

	int n;
	while (t--) {
		cin >> n;
		cout << dp[n-1] << '\n';
	}

	return 0;
}
