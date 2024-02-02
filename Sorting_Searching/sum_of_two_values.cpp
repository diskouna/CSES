#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n, x;
	cin >> n >> x;

	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; ++i) {
	    cin >> a[i].first;
	    a[i].second = i + 1;
	}

	sort(a.begin(), a.end());

	bool is_possible = false;
	for (int i = 0; i < n-1; ++i) {
	pair<int, int> va = {x-a[i].first, 0};
	int j = lower_bound(a.begin()+i+1, a.end(), va) - a.begin();
		if (j < n  && a[j].first == x - a[i].first) {
			is_possible = true;
			cout << a[i].second << ' ' << a[j].second;
			break;
		}
	}

	if (!is_possible)
		cout << "IMPOSSIBLE";
	

	return 0;
}
