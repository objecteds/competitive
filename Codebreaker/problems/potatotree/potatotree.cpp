#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n, q; cin >> n >> q;
    set<int> s;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
        v.push_back(s.size());
    }

    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        cout << v[x-1] << ' ';
    }
}