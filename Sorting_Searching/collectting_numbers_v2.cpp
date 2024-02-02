#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int numbers[n];
	int tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		numbers[tmp-1] = i;
	}

	int rounds_cnt  = 1;
	for (int i = 1; i < n; ++i)
		if (numbers[i] < numbers[i-1])
			rounds_cnt++;
	
	cout << rounds_cnt;
	       		
	return 0;
}
