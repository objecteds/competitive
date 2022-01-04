#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    stack<int> ST;
    map<int, int> M;

    for (int i = 0; i < n; i++) {
        while (!ST.empty() && M[ST.top()] > 0) {
            ST.pop();
        }
        int x; cin >> x;
        if (x == 1) {
            int a; cin >> a;
            ST.push(a);
        } else if (x == 2) {
            int a; cin >> a;
            M[a]++;
        } else if (!ST.empty() && x == 3) {
            ST.pop();
            while (!ST.empty() && M[ST.top()] > 0) {
                ST.pop();
            }
        } else if (x == 4) {
            if (ST.empty()) {
                cout << "-1\n";
            } else {
                cout << ST.top() << '\n';
            }
        }
    }
}