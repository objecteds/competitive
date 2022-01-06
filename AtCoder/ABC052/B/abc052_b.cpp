#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t=0, best=0; cin >> n;
    string s; cin >> s;
    for (auto x: s) {
        x == 'I' ? t++ : t--;
        best = max(best, t);
    }
    cout << best;
}