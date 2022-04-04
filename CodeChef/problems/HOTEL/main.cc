#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
bool cmp(pair<int, int> A, pair<int, int> B) {
    if (A.first == B.first) {
        return A.second > B.second;
    } else {
        return A.first < B.first;
    }
}

void solve() {
    int n, t=0, best=0; cin >> n;
    vector<pair<int, char>> V;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        V.push_back(make_pair(x, 'a'));
    }

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        V.push_back(make_pair(x, 'd'));
    }

    sort(V.begin(), V.end(), cmp);

    for (auto x: V) {
        if (x.second == 'a') t++;
        else if (x.second == 'd') t--;
        best = max(best, t);
    }

    cout << best << endl;
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) solve();
}