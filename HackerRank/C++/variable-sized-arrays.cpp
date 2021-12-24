#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, row, col; cin >> n >> q;
    vector<vector<int> > V;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vector<int> temp;
        for (int j = 0; j < x; j++) {
            int y; cin >> y;
            temp.push_back(y);
        }
        V.push_back(temp);
    }

    for (int i = 0; i < q; i++) {
        cin >> row >> col;
        cout << V[row][col] << '\n';
    }

    return 0;
}