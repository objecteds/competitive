#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, e, a, b;
    cin >> n >> e;

    int g[50][50];
    memset(g, 0, sizeof(g));

    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        g[a-1][b-1] = 1;
        g[b-1][a-1] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j];
        }
        cout << '\n';
    }
}