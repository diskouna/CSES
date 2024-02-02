#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n; 
	cin >> n;
	vector<pair<int, int>> movies(n);
        for (int i = 0; i < n; ++i)
		cin >> movies[i].second >> movies[i].first;

	sort(movies.begin(), movies.end());

	int end_time = movies[0].first;
	int cnt = 1;
	for (int i = 1; i < n; ++i) {
		if (movies[i].second >= end_time) {
			cnt++;
			end_time = movies[i].first;
		}
	}	
	
	cout << cnt ;

	return 0;
}
