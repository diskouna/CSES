#include<bits/stdc++.h>
using namespace std;
//array version
int n;
vector<int> ar;
int main()
{
    cin >> n;
    ar.resize(n);
    for (int i = 0, k; i < n-1; i++) {
        cin >> k;
        ar[k-1] = 1;
    }
    for (int i = 0; i < n; i++)
        if (ar[i]==0) 
            cout << i + 1;
    return 0;
}