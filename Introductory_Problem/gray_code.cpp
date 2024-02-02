#include<bits/stdc++.h>
using namespace std;
 
int n;
int main()
{
    cin >> n;
    string s(n, '0');
    for (int i = 1; i <= (1 << n); i++) {
        cout << s << '\n';
        for (int j = 0; j < n; j++) {
            if ((i % (1<<(j)) == 0) && (i % (1<<(j+1)) != 0)) {
                if (s[j] == '1') s[j] = '0';
                else s[j] = '1';
            }
        }
    }
    return 0;
}