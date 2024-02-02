#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	vector<int64_t> x(n);
	for (int i = 0; i < n; ++i)
	    cin >> x[i];

	int64_t dp;
	int64_t max_sub_sum = x[0];
	dp = x[0];
	for (int i = 1; i < n; ++i) {
		dp = max (x[i], x[i] + dp);
		if (dp > max_sub_sum)
			max_sub_sum = dp;
	}

	cout << max_sub_sum ;

	return 0;
}
