#include <bits/stdc++.h>
 
using namespace std;
 
int cnt;
vector<string> board(8);
int col[8], diag1[15], diag2[15];
 
void place(int nl)
{
    if (nl == 8) {
        cnt++;
        return;
    }
    for (int j = 0; j < 8; j++) {
        if (board[nl][j] == '.' && !col[j] && !diag1[nl + j] && !diag2[nl + 7 - j]) {
            col[j] = diag1[nl + j] = diag2[nl + 7 - j] = 1; 
            place(nl + 1);
            col[j] = diag1[nl + j] = diag2[nl + 7 - j] = 0; 
        }
    }
}
int main()
{
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
    place(0);
    cout << cnt;
}