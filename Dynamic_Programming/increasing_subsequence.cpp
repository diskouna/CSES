#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; ++i)
		cin >> x[i];

	vector<int> dp(n, -1), xx(n);
	dp[0] = 0;
	xx[0] = x[0];

	int i = 0;
	for (int j = 1; j < n; ++j) {
		auto itr = equal_range(xx.begin(),
				 xx.begin() + i + 1, x[j]);

		if (*(itr.first) != x[j] && 
			itr.second == xx.begin() + i + 1) 
			++i;

		if (*(itr.first) != x[j]) {	
			dp[(int)(itr.second - xx.begin())] = j;
			*(itr.second) = x[j];	
		}		
		
	} 

	cout << (i + 1) << '\n';

	return 0;
}
