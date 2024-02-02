#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; ++i)
		cin >> p[i];

	sort(p.begin(), p.end());
	int64_t med = p[n/2];
      	int64_t res = 0LL;
	for (int i = 0; i < n; ++i)
		res += llabs(med - p[i]);

	cout << res;

	return 0;
}
