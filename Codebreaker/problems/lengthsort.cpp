#include <bits/stdc++.h>
using namespace std;
bool compare(pair<string, int> a, pair<string, int> b) {
    if (a.first.size() != b.first.size()) {
        return a.first.size() > b.first.size();
    } else {
        return a.second < b.second;
    }
}

int main() {
    int n;
    cin >> n;
    pair<string, int> p[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i;
    }

    sort(p, p+n, compare);

    for (int i = 0; i < n; i++) {
        cout << p[i].first << endl;
    }
}