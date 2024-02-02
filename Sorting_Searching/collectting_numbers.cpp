#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<pair<int, int>> seq;

	int a;
        for (int i = 0; i < n; ++i) {
		cin >> a;
		seq.push_back({a, i});
	}
	sort(seq.begin(), seq.end());

	int rounds_cnts = 1;
	for (int i = 1; i < n; ++i ) {
		if (seq[i].second < seq[i-1].second)
			rounds_cnts++;
	}

	cout << rounds_cnts;
	
	return 0;
}
