#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	set<int> seq;

	int cur_long_seq = 0;
	int max_long_seq = 1;
	int tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (seq.count(tmp) == 0) {
			cur_long_seq++;
			seq.insert(tmp);
		} else {
			max_long_seq = max(max_long_seq, cur_long_seq);
			seq.erase(seq.begin(), seq.end());
		}
	}	

	cout << max_long_seq;

	return 0;
}
