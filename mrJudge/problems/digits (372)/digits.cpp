#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        long long a, b; cin >> a >> b;
        cout << (long long)(b*log10(a)) + 1 << '\n';
    }
}