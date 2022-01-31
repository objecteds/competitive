#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    set<int> S;
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        set<int> T;
        for (int j = 0; j < m; j++) {
            int x; cin >> x;
            T.insert(x);
            S.insert(x);
        }
        cout << T.size() << '\n';
    }
    cout << S.size();
}