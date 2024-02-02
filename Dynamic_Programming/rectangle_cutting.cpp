#include <bits/stdc++.h>

using namespace std;

int memo[(int)1e6 + 1] = {

};

int main()
{
	int t;
	cin >> t;
	int n;
	while (t--) {
		cin >> n;
		cout << memo[n];  	
	}

	return 0;
}
