#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	multiset<int> h;
	int t;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		h.insert(-t); 
	}

	for (int i = 0; i < m; ++i) {
		cin >> t;
		auto itr = h.lower_bound(-t);
		if (itr == h.end())
			cout << "-1 \n";
		else {
			cout << -*itr << '\n';	
			h.erase(itr);
		}
	}
	return 0;
}
