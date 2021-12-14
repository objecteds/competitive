#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    map<int, string> mp;
    mp[0] = "zero";
    mp[1] = "one";
    mp[2] = "two";
    mp[3] = "three";
    mp[4] = "four";
    mp[5] = "five";
    mp[6] = "six";
    mp[7] = "seven";
    mp[8] = "eight";
    mp[9] = "nine";

    for (int i = 0; i < t; i++) {
        string s, ans; cin >> s;

        for (int i = 0; i < s.size(); i++) {
            ans += mp[s[i] - '0'] + ' ';
        }

        ans.pop_back();
        ans[0] = toupper(ans[0]);

        cout << ans << '\n';
    }
}