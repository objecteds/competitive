#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    set<int> s;

    for(int i = 0; i < q; i++) {
        string str; cin >> str; 

        if (str == "WAKE") {
            int x; cin >> x;
            s.erase(x);
        } else if (str == "SLEEP") {
            int x; cin >> x;
            s.insert(x);
        } else if (str == "TRANSMIT") {
            int x, y; cin >> x >> y;
            if (*s.lower_bound(x) > y || s.lower_bound(x) == s.end()) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}