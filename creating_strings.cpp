#include <bits/stdc++.h>
 
using namespace std;
 
int n;
int alph[26];
int fact[9] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};
string p(8, ' ');
 
void print_permutation(int i)
{
    if (i == n) {
        cout << p << '\n';
        return;
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (alph[c - 'a'] > 0) {
            alph[c - 'a']--;
            p[i] = c;
            print_permutation(i+1);
            alph[c - 'a']++;
        }
    }   
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    n = s.size();
    
    for (int i = 0; i < n; i++) 
        alph[s[i] - 'a']++;
 
    int count = fact[n];
    for (int i = 0; i < 26; i++)
        count /= fact[alph[i]];
 
    cout << count << '\n';
    print_permutation(0);
}