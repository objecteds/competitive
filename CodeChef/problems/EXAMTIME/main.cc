#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    int da, db, dc, sa, sb, sc; cin >> da >> db >> dc >> sa >> sb >> sc;
    int d=da+db+dc, s=sa+sb+sc;

    if (d > s) {
        cout << "Dragon";
    } else if (s > d) {
        cout << "Sloth";
    } else {
        if (da > sa) {
            cout << "Dragon";
        } else if (sa > da) {
            cout << "Sloth";
        } else {
            if (db > sb) {
                cout << "Dragon";
            } else if (sb > db) {
                cout << "Sloth";
            } else {
                cout << "Tie";
            }
        }
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}