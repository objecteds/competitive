#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, m; cin >> n >> m;
    vector<int> A(n), V;
    map<int, int> B;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        B[x] = 1;
    }

    for (auto x: A) {
        if (B[x]) {
            V.push_back(x);
        }
    }

    reverse(V.begin(), V.end());

    for (auto x: V) {
        cout << x << ' ';
    }
}