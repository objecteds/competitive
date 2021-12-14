#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans=0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ans = max(x, ans);
    }
    cout << ans;
}