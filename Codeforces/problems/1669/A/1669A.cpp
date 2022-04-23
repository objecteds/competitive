#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
void solve() {
    int rating; cin >> rating;
    if (rating <= 1399) cout << "Division 4\n";
    else if (rating <= 1599) cout << "Division 3\n";
    else if (rating <= 1899) cout << "Division 2\n";
    else cout << "Division 1\n";
}

signed main() {
    fastio;
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}