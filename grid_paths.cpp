#include <bits/stdc++.h>
 
using namespace std;
 
 
bool vis[7][7];
int path_count;
string path;
 
void search_from(int x, int y, int step)
{
    if (step == 48) {
        if (x == 0 && y == 6) {
            path_count++;
        }    
        return;
    }
    
    if (x == 0 && y == 6)
        return;
       
    if ((y == 0 || y == 6 || (vis[x][y+1] && vis[x][y-1])) && x > 0 && x < 6 && !vis[x-1][y] && !vis[x+1][y])
        return;
        
    if ((x == 0 || x == 6 || (vis[x-1][y] && vis[x+1][y])) && y > 0 && y < 6 && !vis[x][y-1] && !vis[x][y+1])
        return;
 
    switch (path[step]) {
        case '?' :
            if (x-1 >= 0 &&  !vis[x-1][y] && step < 48) {
                vis[x-1][y] = true;
                search_from(x-1, y, step + 1);
                vis[x-1][y] = false;
            }
 
            if (x + 1 < 7 &&  !vis[x+1][y] && step < 48) {
                vis[x+1][y] = true;
                search_from(x+1, y, step + 1);
                vis[x+1][y] = false;
            }
 
            if (y - 1 >= 0 &&  !vis[x][y-1] && step < 48) {
                vis[x][y-1] = true;
                search_from(x, y-1, step + 1);
                vis[x][y-1] = false;
            }
 
            if (y + 1 < 7 &&  !vis[x][y + 1] && step < 48) {
                vis[x][y+1] = true;
                search_from(x, y + 1, step + 1);
                vis[x][y+1] = false;
            }
 
            break;
        case 'L' :
            if (x-1 >= 0 &&  !vis[x-1][y] && step < 48) {
                vis[x-1][y] = true;
                search_from(x-1, y, step + 1);
                vis[x-1][y] = false;
            }
            break;
        case 'R' :
            if (x + 1 < 7 &&  !vis[x+1][y] && step <48) {
                vis[x+1][y] = true;
                search_from(x+1, y, step + 1);
                vis[x+1][y] = false;
            }
            break;
        case 'U' :
            if (y - 1 >= 0 &&  !vis[x][y-1] && step < 48) {
                vis[x][y-1] = true;
                search_from(x, y-1, step + 1);
                vis[x][y-1] = false;
            }
            break;
        case 'D' :
            if (y + 1 < 7 &&  !vis[x][y + 1] && step < 48) {
                vis[x][y+1] = true;
                search_from(x, y + 1, step + 1);
                vis[x][y+1] = false;
            }
            break;
    }
}
 
int main()
{
    cin >> path;
    
    vis[0][0] = true;
    search_from(0, 0, 0);
    cout << path_count ;
    return 0;
}