#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int  n; 
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i] >> b[i];
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i, j;
	i = 0;
	j = 0;
	int cur_cnt, max_cnt;
	cur_cnt = 0;
	max_cnt = 0;
	while (i < n) {
		if (j == n || a[i] < b[j]) {
			i++;
			cur_cnt++;
		}
		else {
			cur_cnt--;
			j++;
		}
		if (cur_cnt > max_cnt)
			max_cnt = cur_cnt;
	}	
	
	cout << max_cnt; 

	return 0;
}
