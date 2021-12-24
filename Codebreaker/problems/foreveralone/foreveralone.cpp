#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    unordered_set<int> US;

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        if (a != b) {
            US.insert(a); US.insert(b);
        }
    }

    cout << (n - US.size());
}