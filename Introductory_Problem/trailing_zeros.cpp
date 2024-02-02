#include<bits/stdc++.h>
using namespace std;
int n;
uint64_t dp;
int main()
{
    cin >> n;
    while (n != 0) {
        dp += (n/5);
        n /= 5; 
    }
    cout << dp;
    return 0;
}