#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<char>> A(n, vector<char>(n)), B(m, vector<char>(m));
    bool ok = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + m - 1 >= n || j + m - 1 >= n) {
                continue;
            }

            bool flag = true;

            for (int k = 0; k < m; k++) {
                for (int l = 0; l < m; l++) {
                    if (A[i+k][j+l] != B[k][l]) {
                        flag = false;
                    }
                }
            }

            flag ? ok = true : ok = ok;
        }
    }

    ok ? cout << "Yes" : cout << "No";
}