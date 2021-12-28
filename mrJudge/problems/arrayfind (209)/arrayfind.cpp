#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int l; cin >> l;
    vector<int> v;

    for (int i = 0; i < l; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int q; cin >> q;

    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        int smaller = lower_bound(v.begin(), v.end(), x) - v.begin(), greater = v.end() - upper_bound(v.begin(), v.end(), x);

        cout << "Smaller: " << smaller << ", Greater: " << greater << '\n';
    }
}