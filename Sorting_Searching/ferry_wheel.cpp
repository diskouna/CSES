#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;

    int n, x;
    cin >> n >> x;

    int p[n];
    for (i = 0; i < n; ++i)
        cin >> p[i];
    sort(p, p + n);

    int l, r;
    l = 0;
    r = n-1;

    int k;
    k = 0;

    while (l <= r) {
        // affect a gondola to the child "r"
        k++;
        if (p[l] + p[r] <= x) { // can we add another children to him?  
            // add the most lightweight remaining child to him
            l++;
        }
        r--;
    }

    cout << k ;

    return 0;
}