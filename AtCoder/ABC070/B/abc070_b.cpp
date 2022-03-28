#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    fastio;
    int a, b, c, d, t=0; cin >> a >> b >> c >> d;
    vector<int> A(101, 0), B(101, 0);
    for (int i = a; i <= b; i++) A[i] = 1;
    for (int i = c; i <= d; i++) B[i] = 1;
    for (int i = 0; i <= 100; i++) {
        if (A[i] && B[i]) {
            t++;
        }
    }
    t -= 1;
    t >= 0 ? cout << t : cout << 0;
}