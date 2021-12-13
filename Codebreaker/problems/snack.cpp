#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> v;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'M') {
            v.push_back(-2);
        } else {
            v.push_back(s[i] - '0');
        }
    }

    int best=0, sum=0;

    for (int i = 0; i < s.size(); i++) {
        sum = max(v[i], sum + v[i]);
        best = max(best, sum);
    }

    cout << best;
}