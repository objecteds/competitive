#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, total = 0; cin >> n;
    vector<int> a, b;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int x; cin >> x;

    for (int i = 0; i < n; i++) {
        int over = (a[i] + b[i]) - x;
        if (over > 0) {
            total += over;
        }
    }

    cout << total * 100;
}