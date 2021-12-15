#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;

    for (int ii = 0; ii < t; ii++) {
        string s, ans; cin >> s;
        ans += s[0];

        for (int i = 1; i < s.size(); i++) {
            if (s[i-1] == '_') {
                ans += s[i];
            }
        }

        ans.size() > 5 ? cout << "CENSORED\n" : cout << ans << '\n';
    }
}