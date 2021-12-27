#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int best=1, cur=1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            cur++;
            best = max(best, cur);
        } else {
            cur = 1;
        }
    }

    cout << best;
}