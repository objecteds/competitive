#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, m; cin >> n >> m;
    vector<long long> V(n+2, 1), S(n+2);

    for (int i = 0; i < m; i++) {
        long long x; cin >> x;
        V[x+1] = 0;
    }

    S[1] = 1;

    for (int i = 2; i < n+2; i++) {
        if (V[i] == 1) {
            S[i] = S[i-1] + S[i-2];
            S[i] %= 1000000007;
        } else {
            S[i] = 0;
        }
    }

    cout << S[n+1];
}