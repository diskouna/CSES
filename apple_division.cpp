#include <bits/stdc++.h>
 
using namespace std;
 
int n;
vector<uint64_t> p;
int64_t min_diff, cur_diff;
 
void perm(int i)
{
    if (i == n) {
        if (abs(cur_diff) < min_diff)
            min_diff = abs(cur_diff);
        return; 
    }
    cur_diff -= 2 * p[i];
    perm(i+1);
    cur_diff += 2 * p[i];
    perm(i+1);
}
 
int main()
{
    cin >> n;
    p.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        cur_diff += p[i];
    }
    min_diff = cur_diff;
    perm(0);
    cout << min_diff;
}