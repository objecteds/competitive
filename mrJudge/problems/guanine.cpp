#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >>  n;
    deque<char> d;
    
    for (int i = 0; i < n; i++) {
        string command; cin >> command;
        if (command == "ADD_BACK") {
            char x; cin >> x;
            d.push_back(x);
        }

        if (command == "ADD_FRONT") {
            char x; cin >> x;
            d.push_front(x);
        }

        if (command == "SNIP_BACK") {
            int y; cin >> y;
            d.erase(d.begin() + y + 1, d.end());
        }

        if (command == "SNIP_FRONT") {
            int y; cin >> y;
            d.erase(d.begin(), d.begin() + y + 1);
        }

        if (command == "QUERY") {
            int z; cin >> z;
            cout << d[z] << '\n';
        }
    }
}