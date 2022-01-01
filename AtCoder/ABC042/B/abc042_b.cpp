#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l; cin >> n >> l;
    vector<string> V;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        V.push_back(s);
    }

    sort(V.begin(), V.end());

    for (auto x: V) {
        cout << x;
    }
}