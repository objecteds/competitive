#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main() {
    int x, y; cin >> x >> y;
    vector<int> A = {1, 3, 5, 7, 8, 10, 12}, B = {4, 6, 9, 11};

    if (x == 2 || y == 2) {
        cout << "No\n";
    } else {
        if (find(A.begin(), A.end(), x) != A.end() && find(A.begin(), A.end(), y) != A.end()) {
            cout << "Yes\n";
        } else if (find(B.begin(), B.end(), x) != B.end() && find(B.begin(), B.end(), y) != B.end()) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}