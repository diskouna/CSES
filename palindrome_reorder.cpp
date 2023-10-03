#include<bits/stdc++.h>
using namespace std;
 
int n;
int alp[26];
int main()
{
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; i++) {
        alp[s[i]-'A']++;
    }
    if (n % 2 == 0) {
        for (int i = 0; i < 26; i++) {
            if (alp[i] % 2 == 1) {
                cout << "NO SOLUTION";
                return 0;
            }
        }
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < (alp[i]/2); j++)
                cout << static_cast<char>(i + 'A');
        }
        for (int i = 25; i >= 0; i--) {
            for (int j = 0; j < (alp[i]/2); j++)
                cout << static_cast<char>(i + 'A');
        }
    } else {
        int odd = 0, odd_ind = 0;
        for (int i = 0; i < 26; i++) {
            if (alp[i] % 2 == 1) {
                odd++;
                odd_ind = i;
            }
        }
        if (odd != 1) {
            cout << "NO SOLUTION";
            return 0; 
        }
        for (int i = 0; i < 26; i++) {
            if (i != odd_ind)
                for (int j = 0; j < (alp[i]/2); j++)
                    cout << static_cast<char>(i + 'A');
        }
        
        for (int j = 0; j < alp[odd_ind]; j++)
            cout << static_cast<char>(odd_ind + 'A');
            
        for (int i = 25; i >= 0; i--) {
            if (i != odd_ind)
                for (int j = 0; j < (alp[i]/2); j++)
                    cout << static_cast<char>(i + 'A');
        }
 
    }
 
    return 0;
}