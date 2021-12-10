#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, m, k, least = 2147483646; cin >> n >> m >> k;
    vector<int> frogs, kills, min;

    for (int i = 1; i <= m; i++) {
        int x; cin >> x;
        frogs.push_back(x);
        kills.push_back(0);
    }

    for (int i = 0; i < k; i++) {
        int x; cin >> x;
        for (int j = 0; j < m; j++) {
            if (x % frogs[j] == 0) {
                kills[j]++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (kills[i] < least) {
            least = kills[i];
        }
    }

    for (int i = 0; i < m; i++) {
        if (kills[i] == least) {
            min.push_back(i+1);
        }
    }

    cout << min.size() << '\n';

    for (int i = 0; i < min.size(); i++) {
        cout << min[i] << ' ';
    }
}