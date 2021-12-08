#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, k; cin >> m >> k;
    deque<int> d;
    string s; cin >> s;

    for (int i = 0; i < m; i++) {
        d.push_back(i);
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            d.push_back(d.front());
            d.pop_front();
        } else if (s[i] == 'B' && d.size() >= 2) {
            int x = d.front();
            d.pop_front();
            d.push_back(d.front());
            d.pop_front();
            d.push_front(x);
        } else if (s[i] == '.') {
            break;
        }
    }

    cout << d[k-1] << ' ' << d[k] << ' ' << d[k+1];
}