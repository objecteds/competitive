#include <bits/stdc++.h>
using namespace std;
char C[102][102];

void dfs(int x, int y) {
    C[x][y] = '.';
    if (C[x+1][y] == 'H') {
        dfs(x+1, y);
    }
    if (C[x-1][y] == 'H') {
        dfs(x-1, y);
    }
    if (C[x][y+1] == 'H') {
        dfs(x, y+1);
    }
    if (C[x][y-1] == 'H') {
        dfs(x, y-1);
    }
    return;
}

int main() {
    int r, c, t=0; cin >> r >> c;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> C[i][j];
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (C[i][j] == 'H') {
                t++;
                dfs(i, j);
            }
        }
    }

    cout << "Oh, bother. There are " << t << " pools of hunny.";
}