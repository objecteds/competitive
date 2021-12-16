#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    for (int ii = 0; ii < t; ii++) {
        int n; cin >> n;
        bool adj = true;
        vector<string> bg;
        string x;

        for (int i = 0; i < n-2; i++) {
            string s; cin >> s;
            bg.push_back(s);
        }

        x += bg[0];

        for (int i = 1; i < bg.size(); i++) {
            string s = bg[i];
            if (s[0] == bg[i-1][1]) {
                x += s[1];
            } else {
                adj = false;
                x += s;
            }
        }

        adj ? cout << x << 'b' : cout << x; 
        cout << '\n';
    }
}