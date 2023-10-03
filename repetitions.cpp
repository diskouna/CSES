#include<bits/stdc++.h>
using namespace std;
int n, d = 1, m = 1;
int main()
{
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
        if (s[i] == s[i-1]) m = max(m, ++d);
        else d = 1;
    cout << m;
    return 0;
}