#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int n, k, t=0; cin >> n >> k;
    vector<int> V(100005, 0);
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        V[a] += b;
    }

    for (int i = 0; i < V.size(); i++) {
        t += V[i];
        if (t >= k) {
            cout << i << endl;
            break;
        }
    }
}