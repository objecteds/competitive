#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n; cin >> n;
    vector<int> A;
    set<int> S;
    map<int, int> M;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        S.insert(x);
        M[x]++;
    }

    for (auto x: S) {
        for (int i = 0; i < M[x]/2; i++) {
            A.push_back(x);
        }
    }

    sort(A.rbegin(), A.rend());

    if (A.size() < 2) {
        cout << 0;
    } else {
        cout << A[0]*A[1];
    }
}