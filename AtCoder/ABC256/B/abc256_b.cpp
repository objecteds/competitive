#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int n, ans=0; cin >> n;
    vector<int> A(n), V;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (auto x: A) {
        V.push_back(0);
        for (int i = 0; i < V.size(); i++) {
            V[i] += x;
        }
    }
    for (auto x: V) {
        if (x > 3) {
            ans++;
        }
    }
    cout << ans;
}
