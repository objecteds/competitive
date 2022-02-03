#include <bits/stdc++.h>
using namespace std;
char C[1002][1002];

void dfs(int x, int y) {
    C[x][y] = 'x';
    if (C[x+1][y] == '*') {
        dfs(x+1, y);
    }
    if (C[x-1][y] == '*') {
        dfs(x-1, y);
    }
    if (C[x][y+1] == '*') {
        dfs(x, y+1);
    }
    if (C[x][y-1] == '*') {
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
            if (C[i][j] == '*') {
                t++;
                dfs(i, j);
            }
        }
    }

    cout << t;
}