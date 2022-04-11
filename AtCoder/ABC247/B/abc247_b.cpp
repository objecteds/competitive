#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
signed main() {
    fastio;
    int n; cin >> n;
    vector<pair<string, string>> V;

    for (int i = 0; i < n; i++) {
        string s, t; cin >> s >> t;
        V.push_back(make_pair(s, t));
    }

    for (int i = 0; i < n; i++) {
        string b = V[i].first, c = V[i].second;
        string a = b;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (b == V[j].first or b == V[j].second) {
                a = c;
                break;
            }
        }
        if (a == b) continue;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (c == V[j].first or c == V[j].second) {
                a = "-1";
                break;
            }
        }
        if (a == c) continue;
        if (a == "-1") {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}