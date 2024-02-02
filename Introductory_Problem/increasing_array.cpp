#include<bits/stdc++.h>
using namespace std;
 
int n;
vector<uint64_t> x;
 
int main()
{
    cin >> n;
    x.resize(n);
    for (int i = 0; i < n; i++) 
        cin >> x[i];
    uint64_t count = 0;
    for (int i = 1; i < n; i++)
        if (x[i] < x[i-1]) {
            count += (x[i-1] - x[i]);
            x[i] = x[i-1];
        } 
    cout << count;
    return 0;
}