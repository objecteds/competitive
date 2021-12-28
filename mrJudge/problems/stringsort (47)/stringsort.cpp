#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<char> upper, lower;
    string s; getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            isupper(s[i]) ? upper.push_back(s[i]) : lower.push_back(s[i]);
        }
    }

    for (auto x: upper) {
        cout << x;
    }

    for (auto x: lower) {
        cout << x;
    }
}