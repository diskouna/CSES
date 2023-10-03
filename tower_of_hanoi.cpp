#include <bits/stdc++.h>
 
using namespace std;
 
void print_hanoi(int n, int l, int m, int r)
{
    if (n == 1) {
        cout << l << " " << r << '\n';
        return;
    }
    print_hanoi(n-1, l, r, m);
    cout << l << " " << r << '\n';
    print_hanoi(n-1, m, l, r);
}
 
uint64_t cnt_hanoi(int n, int l, int m, int r)
{
    if (n == 1) return 1;
    return cnt_hanoi(n-1, l, r, m) + cnt_hanoi(n-1, m, l, r) + 1;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int l, m, r;
    l = 1;
    m = 2;
    r = 3;
    cout << (1 << n) - 1 << '\n';
    //cout << cnt_hanoi(n, l, m, r) << '\n';
    print_hanoi(n, l, m, r);
}