#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m=0, t=0, ans=0; cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
        t += x;
    }

    sort(a.rbegin(), a.rend());

    for (int i = 0; i < n; i++) {
        int c = a[i];
        m += c;
        t -= c;
        ans++;

        if (m > t) {
            break;
        }
    }

    cout << ans;
}