#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int least(int a, int b) {
    string x = to_string(a);
    string y = to_string(b);
    return max(x.size(), y.size());
}

signed main() {
    int n, best=999; cin >> n;
    vector<pair<int, int>> V;

    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) V.push_back(make_pair(i, n/i));
    }

    for (auto x: V) {
        best = min(best, least(x.first, x.second));
    }
    
    cout << best;
}